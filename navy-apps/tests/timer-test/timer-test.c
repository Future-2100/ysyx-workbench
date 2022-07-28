#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>

//uint64_t NDL_GetTicks();
//int NDL_Init();

int main() {
  NDL_Init();
  int times = 1;
  struct timeval tv;
  uint32_t seconds = 0;
  while(1) {
    seconds = NDL_GetTicks() / 1000000 ;
    printf(" Now time is %d seconds\n", seconds );

    //gettimeofday(&tv, NULL);
    /*
    if( tv.tv_usec ==500 || tv.tv_usec == 0) {
      printf("output a sentence every 0.5 second. %d\n",times);
      times ++ ;
      */
  }
}
