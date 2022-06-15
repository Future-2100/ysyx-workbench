#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char *expr;
  word_t result_pre;
  word_t result_now;
} WP ;

static WP wp_pool[NR_WP] = {};

static WP head ;
static WP free_;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i+1;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head.next = NULL;
  head.NO = 0;
  free_.next = wp_pool;
  free_.NO = 0;
}

/* TODO: Implement the functionality of watchpoint */

void new_wp(char *arg) {
  WP *p = &head;
  WP *q = free_.next;
  if( q == NULL) {
    assert(0);
  }
  else {
    free_.next = q->next;
    while( q->NO != p->NO+1 ) {
      p = p->next;
    }
    q->next = p->next;
    p->next = q;
    strcpy(q->expr, arg);
  }
}

void free_wp(WP *wp) {
  WP *p = &head;
  WP *q = &free_;

//  char *arg = NULL;
//  strcpy(wp->expr, arg);
  wp->result_pre = 0;
  wp->result_now = 0;

  while(p->next != wp) {
    p = p->next;
  }
  p->next = wp->next;
  while( wp->NO < q->NO || wp->NO > q->next->NO ) {
    q = q->next;
  }
  wp->next = q->next;
  q->next = wp;
}

