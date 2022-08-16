#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <NDL.h>

//uint64_t NDL_GetTicks();
//int NDL_Init(uint32_t flags);

int main() {
  NDL_Init(0);
  int times = 1;
  struct timeval tv;
  uint32_t seconds = 0;
  while(1) {
    while( NDL_GetTicks() / 1000000 < times ) ;
    seconds = NDL_GetTicks() / 1000000 ;
    printf(" Now time is %d seconds\n", seconds );
    times ++ ;
  }
}
