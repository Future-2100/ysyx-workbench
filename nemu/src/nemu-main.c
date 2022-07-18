#include <common.h>
#define TEST_NUM 10000

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
  
  // Initialize the monitor.
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

 //  Start engine. 
    engine_start();

    return is_exit_status_bad();
 

/*
  FILE *fp=NULL;
  fp = fopen("./input","r");
  char buff[1024];
  int a=0,b=0;
  word_t result=0,answer=0;
    
  bool success = true;

  for(int i=0; i<TEST_NUM; i++) {
       a =  fscanf(fp, "%ld", &result);
       b =  fscanf(fp, "%s" , buff);
    if(a!=EOF && b!=EOF) {
      answer = expr(buff,&success);
      if(success == true && answer==result) {
        printf("%d:%s = %ld----",i,buff,answer);
        printf("success\n");
      }
      else {
        printf("error\n");
        assert(0);
      }
    }
  }

  fclose(fp);
  return 0;
  */
}
