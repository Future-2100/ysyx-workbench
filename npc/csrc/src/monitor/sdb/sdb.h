#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);


void new_wp(char *arg);
void free_NO(int NO);
bool head_expr();
void info_w();

#endif
