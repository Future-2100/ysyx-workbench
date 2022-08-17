#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static size_t screen_w = 0;
static size_t screen_h = 0;

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  char *ch = (char *)buf;
  for (int i=0; i<len; i++) {
    putch(*ch);
    ch++;
  }
  return len ;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  //bool has_kbd = io_read(AM_INPUT_CONFIG).present;

  size_t ret = 0 ;
  AM_INPUT_KEYBRD_T ev ;
  ev = io_read(AM_INPUT_KEYBRD);
    if( ev.keycode == AM_KEY_NONE )  {
      ret =  0;
    }
    else { 
      ret = snprintf(buf, len, "%s %s\n", ev.keydown?"kd":"ku", keyname[ev.keycode]);
    }
    return ret;
}


size_t dispinfo_read(void *buf, size_t offset, size_t len) {

  int width  = io_read(AM_GPU_CONFIG).width ;
  int height = io_read(AM_GPU_CONFIG).height;
  //snprintf(buf, len, "WIDTH : %d \n HEIGHT : %d \n", width, height);
  snprintf(buf, len, "WIDTH : %d \n HEIGHT : %d \n", width, height);
  return 0;

}

size_t fb_write(const void *buf, size_t offset, size_t len) {


  uint32_t *pixels = (uint32_t *)buf;

  size_t screen_offset = offset / 4u;
  size_t times = len / 4u;
  
  size_t start_x = screen_offset % screen_w;
  size_t start_y = screen_offset / screen_w;

  for(int i = 0; i < times; i++ ) {
    /*
    if(!( offset >= 0 && offset <= width*height*4 )) {
        printf("offset = %p \n", offset);
        assert(0);
    }
    assert( start_x <= width && start_x >=0 && start_y <= height && start_y >=0 );
    */

    io_write(AM_GPU_FBDRAW, start_x, start_y, pixels, 1, 1, false);
    pixels ++ ;
    screen_offset ++ ;
    start_x = screen_offset % screen_w ;
    start_y = screen_offset / screen_w ;
  }

  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true );


//  io_write(AM_GPU_FBDRAW, ((offset / sizeof(uint32_t)) % width),  ((offset / sizeof(uint32_t)) / height), (uint32_t *)buf, (len / sizeof(uint32_t)), 1, true);

  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
  screen_w  = (size_t)io_read(AM_GPU_CONFIG).width ;
  screen_h  = (size_t)io_read(AM_GPU_CONFIG).height;
}
/*
bool ioe_init() {
  panic_on(cpu_current() != 0, "call ioe_init() in other CPUs");
  panic_on(ioe_init_done, "double-initialization");
  __am_has_ioe = true;
  return true;
}
*/
