#ifndef __MACRO_H__
#define __MACRO_H__

#define ANSI_FMT_BLACK   "\33[1;30m"
#define ANSI_FMT_RED     "\33[1;31m"
#define ANSI_FMT_GREEN   "\33[1;32m"
#define ANSI_FMT_YELLOW  "\33[1;33m"
#define ANSI_FMT_BLUE    "\33[1;34m"
#define ANSI_FMT_MAGENTA "\33[1;35m"
#define ANSI_FMT_CYAN    "\33[1;36m"
#define ANSI_FMT_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_FMT_NONE   "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_FMT_NONE

#define ARRLEN(arr) (int)(sizeof(arr)) / sizeof(arr[0])

#define Log(format, ...) \
  do { \
    printf(ANSI_FMT_BLUE "[%s:%d %s]" format ANSI_FMT_NONE"\n",__FILE__, __LINE__, __func__, ## __VA_ARGS__);\
  } while(0)

#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
          (fflush(stdout), fprintf(stderr, ANSI_FMT(format, ANSI_FMT_RED) "\n", ##  __VA_ARGS__)); \
      extern void isa_reg_display(); \
      isa_reg_display(); \
      assert(cond); \
    } \
  } while (0)

#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)

#endif
