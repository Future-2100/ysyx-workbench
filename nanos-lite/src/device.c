#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

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
  size_t real_len = 0 ;

  //char *src = keyname[ev.keycode];
  char *dst = buf;
  AM_INPUT_KEYBRD_T ev ;
  ev.keycode = AM_KEY_NONE;
  for( int i=0; i < len; i++ ) {
    while( ev.keycode == AM_KEY_NONE || ev.keydown == 0 ) {
       ev = io_read(AM_INPUT_KEYBRD);
    }
    if( ev.keycode == AM_KEY_RETURN ) {
      *dst = '\n';
      *(dst++) = '\0';
      real_len ++ ;
      return real_len;
    }
    else if( ev.keycode == AM_KEY_SPACE ) {
        *dst = ' ';
    }
    else {
      *dst = *keyname[ev.keycode];
    }
    real_len ++ ;
    dst ++;
    ev.keycode = AM_KEY_NONE;
}
  *dst = '\n';
  *(dst++) = '\0';
  return real_len;

}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
/*
bool ioe_init() {
  panic_on(cpu_current() != 0, "call ioe_init() in other CPUs");
  panic_on(ioe_init_done, "double-initialization");
  __am_has_ioe = true;
  return true;
}
*/
