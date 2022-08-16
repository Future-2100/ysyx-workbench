#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int canvas_w = 0, canvas_h = 0;
static int canvas_x = 0, canvas_y = 0;
static int evt_fd = -1;
static int fb_fd = -1;
static int dispinfo_fd = -1;

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
  uint32_t milisec = (now - bool_time)/1000;
  return milisec;
}

int NDL_PollEvent(char *buf, int len) {

  int fp = evt_fd;
  assert( fp != -1 );

  return read(fp, buf, len);
}

void NDL_OpenCanvas(int *w, int *h) {

  assert( screen_w != 0 && screen_h != 0 );

  if ( (*w == 0) && (*h == 0) ) { 
    *w = screen_w;
    *h = screen_h;
  }
  canvas_w = *w ; 
  canvas_h = *h ; 
  canvas_x = (screen_w -canvas_w) / 2 ;
  canvas_y = (screen_h -canvas_h) / 2 ;
  
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

  int fp = fb_fd;
  assert(fp != -1);
  int draw_x;
  int draw_y;
  int draw_w;
  int draw_h;

  if( w == 0 ) w = canvas_w;
  if( h == 0 ) h = canvas_h;

  if( x < 0 ) {
    draw_x = 0;
    draw_w = w+x;
  }
  else {
    draw_x = x ;
    draw_w = w ;
  }
  int max_w = canvas_w - draw_x;
  if( max_w < draw_w )   draw_w = max_w;

  if( y < 0 ) {
    draw_y = 0 ;
    draw_h = h+y ;
  }
  else {
    draw_y = y ;
    draw_h = h ;
  }
  int max_h = canvas_h - draw_y;
  if( max_h < draw_h ) draw_h = max_h;
  if(draw_w <=0 || draw_h <=0 )
    return ;

  int i  ;
  uint8_t *ret = (uint8_t *)pixels;

    for( int i = 0; i < h; i++ ) {
        lseek(fp, (((i+draw_y+canvas_y)*screen_w + draw_x+canvas_x)*4), SEEK_SET);
        write(fp, ret , draw_w*4);
        ret = ret + draw_w*4 ;
    }
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

  evt_fd = open("/dev/events", O_RDONLY);
  fb_fd = open("/dev/fb", O_WRONLY);
  dispinfo_fd = open("/proc/dispinfo", O_RDONLY);

    int fp = dispinfo_fd;
    char buf[128];
    char WIDTH[5];
    char HEIGHT[5];
    char *width_p  = WIDTH ;
    char *height_p = HEIGHT;
    read(fp, buf, sizeof(buf));
    int i;
    for( i = 0; (i < sizeof(buf)) && (*(buf+i)!='\n') ; i++) {
      if( *(buf+i) >= '0' && *(buf+i) <= '9' ){
        *width_p = *(buf+i);
        width_p ++ ;
      }
    }
    *width_p = '\0';
    screen_w = atoi(WIDTH);
    printf("init : screen_w = %d\n", screen_w);
    for( ; (i < sizeof(buf)) && (*(buf+i)!='\0') ; i++) {
      if( *(buf+i) >= '0' && *(buf+i) <= '9' ){
        *height_p = *(buf+i);
        height_p ++;
      }
    }
    *height_p = '\0';
    screen_h = atoi(HEIGHT);
    printf("init : screen_h = %d\n", screen_h);

  if (getenv("NWM_APP")) {
    evtdev = 3;
  }

  //assert(0);
  return 0;
}

void NDL_Quit() {

  close(dispinfo_fd);
  close(fb_fd);
  close(evt_fd);

}
