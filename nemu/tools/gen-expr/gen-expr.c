#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>

// this should be enough
static char buf[65536] = {};
static int n=0;
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned int result = (unsigned)%s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static uint32_t choose(uint32_t i) {
  uint32_t answer;
  answer = (uint32_t) rand()%i;
  return answer;
}

static void gen_num() {
  char str[32] ;
  uint32_t size = sprintf(str,"%u",rand()%256);
  for(int i=0; i<size; i++) {
    buf[n] = str[i];
    n++;
  }
}

static void gen(char str) {
  buf[n] = str;
  n++;
}

static void gen_rand_op() {
  switch (choose(4)) {
    case 0 : gen('+') ; break;
    case 1 : gen('-') ; break;
    case 2 : gen('*') ; break;
    default: gen('/') ; break;
  }
}

static void gen_rand_expr() {
  if(n <=15) {
    switch (choose(3)) {
     case 0 : gen_num(); break;
     case 1 : gen('(') ; gen_rand_expr(); gen(')'); break;
     default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
    }
  }
  else  gen_num();
  buf[n] = '\0';
}

static bool check_parentheses(int p,int q){
    int i;
    int num = 0;
    int pair = 0;
    for(i=p;i<=q;i++) { 
      if( buf[i] == '(')   
        num++;
      else if ( buf[i] == ')' ) {
        num--;
        if(num == 0)  pair++; 
      }
    }
    if ( (buf[p] == '(') && (buf[q] == ')') && (pair == 1) ) {
      return true; 
    }
    else 
      return false;
}

static uint32_t eval(int p, int q, bool *success ){
    int op=0;
    int nu=0;
    int i,j;
    int op1=0,op2=0;
    int nonum=0;

    for(i=p;i<=q;i++) {
      if ( (buf[i]=='(') || (buf[i]==')') ||
          (buf[i]=='+') || (buf[i]=='-') || 
          (buf[i]=='*') || (buf[i]=='/') )
        nonum++;
    }

    if(nonum == 0) {
      char number[30] = {};
      j = 0 ;
      for(i = p; i <=q; i++) {
        number[j] = buf[i];
        j ++ ;
      }
      number[j] = '\0';
      return (uint32_t)atoi(number);
    }
    else if (check_parentheses(p,q) == true) {
      return eval(p+1, q-1,success);
    }
    else {
      for(i=p; i<=q; i++){
        if( buf[i]=='(') 
          nu++;
        else if ( buf[i] == ')' ) 
          nu--;
        else if ( nu == 0 ) {
          if( (buf[i] == '+') || (buf[i] == '-') ) 
            op1 = i;
          else if ( (buf[i] == '*') || (buf[i] == '/') ) 
            op2 = i;
        }
      }
      op = (op1==0)? op2 : op1 ;
      uint64_t val1 = eval(p ,op-1,success);
      uint64_t val2 = eval(op+1, q,success);
      uint64_t result;
      switch (buf[op]) {
        case '+': result =  val1 + val2; break;
        case '-': if(val2 <= val1) {
                    result = val1 - val2; break;
                  }
                  else { 
                    *success = false;
                    return 0;
                  }
        case '*': result =  val1 * val2; break;
        case '/': if (val2 == 0) {
                    *success = false;
                    return 0;
                  }
                  else {
                    result = val1 / val2;
                    break;
                  }
        default : *success = false;
                  return 0; break;
      } 
      if(result <= 0xffffffff && result >=0) { return (uint32_t)result; }

      else { *success = false; return 0; }
    } 
}


int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  bool success=true;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();
    eval(0,n-1,&success);
    if(success == true) {
  
      sprintf(code_buf, code_format, buf);
  
      FILE *fp = fopen("/tmp/.code.c", "w");
      assert(fp != NULL);
      fputs(code_buf, fp);
      fclose(fp);
  
      int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
      if (ret != 0) continue;
  
      fp = popen("/tmp/.expr", "r");
      assert(fp != NULL);
  
      uint32_t result;
      int x = fscanf(fp, "%u", &result);
      if(x==EOF) continue;
      pclose(fp);
  
      printf("%u %s\n", result, buf);
    }
    success = true;
    n=0;
  }
  return 0;
}
