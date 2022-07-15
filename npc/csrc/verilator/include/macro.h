#ifndef __MACRO_H__
#define __MACRO_H__



#define Log(format, ...) \
  do { \
    printf(FONT_BLUE "[%s:%d %s]" format FONT_NONE"\n",__FILE__, __LINE__, __func__, ## __VA_ARGS__);\
  } while(0)

