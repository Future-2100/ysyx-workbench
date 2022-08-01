#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

uint32_t bool_time = 0 ;

uint32_t NDL_GetTicks() {
  struct timeval tv;
  struct timezone tz;
  if( bool_time == 0 ) {
    gettimeofday(&tv,&tz);
    bool_time = tv.tv_sec * 1000000 + tv.tv_usec;
  }
  gettimeofday(&tv,&tz);
  uint32_t now = tv.tv_sec * 1000000 + tv.tv_usec;
  return now - bool_time;
}

int NDL_PollEvent(char *buf, int len) {
  int fp = open("/dev/events", 0, 0);
  return  read(fp, buf, len);
}

void NDL_OpenCanvas(int *w, int *h) {

  screen_w = *w ; 
  screen_h = *h ; 

  if ( *w == 0 && *h == 0 ) { 
    int fp = open("/proc/dispinfo", 0);
    assert(fp);
    char buf[128];
    char WIDTH[5];
    char HEIGHT[5];
    char *width_p  = WIDTH ;
    char *height_p = HEIGHT;
    read(fp, buf, sizeof(buf));
    int i;
    for( i = 0; (i < sizeof(buf)) && ((buf+i)!='\n') ; i++) {
      if( *(buf+i) >= '0' && *(buf+i) <= '9' ){
        *width_p = *(buf+i);
        width_p ++ ;
      }
    }
    *width_p = '\0';
    printf("%s\n", WIDTH);
    assert(0);
    *w = atoi(WIDTH);
    printf("w = %d\n", *w);
    assert(0);
    for( ; i < sizeof(buf) && (buf+i)!='\0'; i++) {
      if( *(buf+i) >= '0' && *(buf+i) <= '9' ){
        *height_p = *(buf+i);
        height_p ++;
      }
    }
    *height_p = '\0';
    *h = atoi(HEIGHT);
    printf("h = %d\n", *h);

    screen_w = *w ; 
    screen_h = *h ; 
  }
  
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }

}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
