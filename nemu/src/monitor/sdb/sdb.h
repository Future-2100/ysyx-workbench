#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char *expr;
  word_t result_pre;
  word_t result_now;
} WP ;

WP wp_pool[NR_WP] = {};

word_t expr(char *e, bool *success);
WP* new_wp(char *arg);
void free_wp(WP *wp);

#endif
