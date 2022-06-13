#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static int n=0;
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
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
  int size = sprintf(str,"%d",rand()%10);
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
  if(n <=16) {
    switch (choose(3)) {
     case 0 : gen_num(); break;
     case 1 : gen('(') ; gen_rand_expr(); gen(')'); break;
     default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
    }
  }
  else  gen_num();
  buf[n] = '\0';
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    int x = fscanf(fp, "%d", &result);
    if(x==EOF) continue;
    pclose(fp);

    printf("%u %s\n", result, buf);
    n=0;
  }
  return 0;
}
