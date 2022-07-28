#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>


int main() {
  int times = 1;
  struct timeval tv;
  while(1) {
    gettimeofday(&tv, NULL);
    if( tv.tv_usec >=500 ) {
      printf("output a sentence every 0.5 second . %d\n",times);
      times ++ ;
    }
  }
}
