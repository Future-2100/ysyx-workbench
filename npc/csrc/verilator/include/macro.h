#ifndef __MACRO_H__
#define __MACRO_H__

#define FONT_BLACK   "\33[1;30m"
#define FONT_RED     "\33[1;31m"
#define FONT_GREEN   "\33[1;32m"
#define FONT_YELLOW  "\33[1;33m"
#define FONT_BLUE    "\33[1;34m"
#define FONT_MAGENTA "\33[1;35m"
#define FONT_CYAN    "\33[1;36m"
#define FONT_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define FONT_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str FONT_NONE

#define Log(format, ...) \
  do { \
    printf(FONT_BLUE "[%s:%d %s]" format FONT_NONE"\n",__FILE__, __LINE__, __func__, ## __VA_ARGS__);\
  } while(0)

#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
          (fflush(stdout), fprintf(stderr, ANSI_FMT(format, FONT_RED) "\n", ##  __VA_ARGS__)); \
      extern void isa_reg_display(); \
      isa_reg_display(); \
      assert(cond); \
    } \
  } while (0)

#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)

#endif
