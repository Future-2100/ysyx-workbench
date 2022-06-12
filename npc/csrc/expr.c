#include <common.h>
#include <regex.h>
#include <paddr.h>

enum {
  TK_NOTYPE = 256,
  /* TODO: Add more token types */
  TK_EQ, TK_NE, TK_AND,
  TK_NUM, TK_HEX, TK_REG, TK_POINT,

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-" , '-'},
  {"\\*" , '*'},
  {"/" , '/'},
  {"&&",TK_AND},
  {"==", TK_EQ},        // equal
  {"!=", TK_NE},
  {"^0x[0-9a-fA-F]+",TK_HEX},
  {"^\\$[\\$a-z0-9]+",TK_REG},
  {"[0-9]+", TK_NUM} ,
  {"\\(" , '('},
  {"\\)" , ')'},

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        switch (rules[i].token_type) {
          case (TK_NOTYPE) :                                 break;
          case ('+')       : tokens[nr_token].type = '+'   ; break;
          case ('-')       : tokens[nr_token].type = '-'   ; break;
          case ('*')       :
            if( (nr_token==0) || ( tokens[nr_token-1].type != TK_NUM &&
                                   tokens[nr_token-1].type != TK_HEX &&
                                   tokens[nr_token-1].type != TK_REG &&
                                   tokens[nr_token-1].type != ')'
                                   )
                )
                             tokens[nr_token].type = TK_POINT;
            else             tokens[nr_token].type = '*'   ;
                                                             break;
                             tokens[nr_token].type = '*'   ; break;
          case ('/')       : tokens[nr_token].type = '/'   ; break;
          case ('(')       : tokens[nr_token].type = '('   ; break;
          case (')')       : tokens[nr_token].type = ')'   ; break;
          case (TK_NUM)    : tokens[nr_token].type = TK_NUM; break;
          case (TK_HEX)    : tokens[nr_token].type = TK_HEX; break;
          case (TK_REG)    : tokens[nr_token].type = TK_REG; break;
          case (TK_EQ )    : tokens[nr_token].type = TK_EQ ; break;
          case (TK_NE )    : tokens[nr_token].type = TK_NE ; break;
          case (TK_AND)    : tokens[nr_token].type = TK_AND; break;
          default          : return false                  ;
        }
        if( rules[i].token_type == TK_NUM ||
            rules[i].token_type == TK_HEX ||
            rules[i].token_type == TK_REG
            )
        {
          int j;
          if(substr_len <=32)
          {
            for(j=0; j<substr_len; j++)
              tokens[nr_token].str[j] = substr_start[j];
            tokens[nr_token].str[j] = '\0';
          }
          else
          {
            printf("error: beyond the boundary of tokens.str\n");
            return false;
          }
        }
        if( rules[i].token_type != TK_NOTYPE )
          nr_token++;
        break;
      }
    }

   if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  nr_token--;
  return true;
}

static bool check_parentheses(int p,int q,bool *success) {
  int  pair=0;
  int point=0;
  for(int i=0; i <= (q-p); i++) {
    if (tokens[p+i].type == '(')
      point++;
    else if (tokens[p+i].type == ')') {
      point--;
      if(point<0) {
        printf("check_parentheses error: point < 0.\n");
        *success = false;
        return false;
      }
      else if(point==0) pair++;
    }
  }

  if(point != 0) {
    printf("check_parentheses error: point !=0 . \n");
    *success = false;
    return false;
  }

  else if (tokens[p].type == '(' && tokens[q].type == ')' && pair==1)
    return true;
  else
    return false;
}

word_t isa_reg_str2val(const char *s, bool *success); 
static word_t eval(int p, int q, bool *success){
  if(p>q) {
    printf("Bad expression, p > q !\n");
    *success = false;
    return 0;
  }

  else if (p == q) {
    word_t result;
    switch (tokens[p].type) {
      case TK_NUM: sscanf(tokens[p].str, "%ld"  , &result); break;
      case TK_HEX: sscanf(tokens[p].str, "0x%lx", &result); break;
      case TK_REG: result = isa_reg_str2val(tokens[p].str+1, success); break;
      default    : printf("Bad expression, p==q !\n"); result=0; *success = false;
    }
    return result;
  }

  else if (check_parentheses(p,q,success)==true){
    return eval(p+1,q-1,success);
  }

  else {
    int n;
    int point=0;
    int op_1=0;
    int op_2=0;
    int op_3=0;
    int op_4=0;
    int op_5=0;
    for(n=p; n <= q; n++) {
      if( tokens[n].type=='(' )
        point ++ ;
      else if ( tokens[n].type==')' ) {
        point -- ;
      }
      if(point==0) {
        if( tokens[n].type == TK_AND )
          op_1 = n;
        if( tokens[n].type == TK_EQ || tokens[n].type == TK_NE )
          op_2 = n;
        if( tokens[n].type == '+'   || tokens[n].type == '-' )
          op_3 = n;
        if( tokens[n].type == '*'   || tokens[n].type == '/' )
          op_4 = n;
        if( tokens[n].type == TK_POINT)
          op_5 = n;
      }
    }
    int op;
    if      ( op_1 != 0 ) op = op_1;
    else if ( op_2 != 0 ) op = op_2;
    else if ( op_3 != 0 ) op = op_3;
    else if ( op_4 != 0 ) op = op_4;
    else                  op = op_5;

    if(tokens[op].type == TK_POINT) {
      vaddr_t addr = (vaddr_t) eval(p+1,q,success);
      return paddr_read(addr,4);
    }

    else {
      word_t val1 = eval(p,op-1,success);
      word_t val2 = eval(op+1,q,success);

      switch (tokens[op].type) {
        case ('+')    : return  val1 +  val2 ;  break;
        case ('-')    : return  val1 -  val2 ;  break;
        case ('*')    : return  val1 *  val2 ;  break;
        case ('/')    : return  val1 /  val2 ;  break;
        case (TK_EQ)  : return (val1 == val2);  break;
        case (TK_NE)  : return (val1 != val2);  break;
        case (TK_AND) : return (val1 && val2);  break;
        default       : *success = false     ;
                        return 0             ;
      }
    }
  }
}


word_t expr(char *e, bool *success) {
  *success = true;
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  return eval(0,nr_token,success);

}