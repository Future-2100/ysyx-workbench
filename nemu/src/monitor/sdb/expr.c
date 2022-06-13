#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,

  /* TODO: Add more token types */
  TK_NUM,

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
  {"==", TK_EQ},        // equal
  {"-" , '-'},
  {"\\*" , '*'},
  {"/" , '/'},
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

static Token tokens[128] __attribute__((used)) = {};
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
          case ('*')       : tokens[nr_token].type = '*'   ; break;
          case ('/')       : tokens[nr_token].type = '/'   ; break;
          case ('(')       : tokens[nr_token].type = '('   ; break;
          case (')')       : tokens[nr_token].type = ')'   ; break;
          case (TK_NUM)    : tokens[nr_token].type = TK_NUM; break;
          default          : assert(0)                     ; break;
        }
        if( rules[i].token_type == TK_NUM ) {
          int j;
          for(j=0; j<substr_len; j++) {
            tokens[nr_token].str[j] = substr_start[j];
          }
            tokens[nr_token].str[j] = '\0';
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

static word_t eval(int p, int q, bool *success){
  if(p>q) {
    printf("Bad expression, p > q");
    *success = false;
    return 0;
  }
  else if (p == q) {
    word_t result;
    if(tokens[p].type==TK_NUM) {
      sscanf(tokens[p].str, "%ld", &result);
      return result;
    }
    else {
      printf("Bad expression, p==q but type is not TK_NUM.\n");
      *success = false;
      return 0;
    }

  }
  else if (check_parentheses(p,q,success)==true){
    return eval(p+1,q-1,success);
  }

  else {
    int n;
    int point=0;
    int op_1=0;
    int op_2=0;
    for(n=0; n <= (q-p); n++) {
      if( tokens[p+n].type=='(' )
        point ++ ;
      else if ( tokens[p+n].type==')' ) {
        point -- ;
      }
      if(point==0) {
        if( tokens[p+n].type=='+' || tokens[p+n].type=='-' )
          op_1 = p+n;
        if( tokens[p+n].type=='*' || tokens[p+n].type=='/' )
          op_2 = p+n;
      }
    }
    int op;
    if( op_1 !=0 ) op = op_1;
    else op = op_2;

    word_t val1 = eval(p,op-1,success);
    word_t val2 = eval(op+1,q,success);

    switch (tokens[op].type) {
      case ('+') : return val1 + val2;  break;  
      case ('-') : return val1 - val2;  break;
      case ('*') : return val1 * val2;  break;
      case ('/') : return val1 / val2;  break;
      default  :          assert(0);  break;
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
