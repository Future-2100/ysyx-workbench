#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char expr[64];
  word_t result_pre;
  word_t result_now;
  bool using;
} WP ;

static WP wp_pool[NR_WP] = {};

static WP head ;
static WP head_end;
static WP free_;
static WP free_end;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i+1;
    wp_pool[i].next = (i == NR_WP - 1 ? &free_end : &wp_pool[i + 1]);
    wp_pool[i].result_pre = 0;
    wp_pool[i].result_now = 0;
    wp_pool[i].using = false;
  }

  head.next = &head_end;
  head.NO = 0;
  head.using = true;
  
  head_end.next = NULL;
  head_end.NO   = NR_WP+1; 
  head_end.using = true;

  free_.next = wp_pool;
  free_.NO = 0;
  free_.using = false;

  free_end.next = NULL;
  free_end.NO = NR_WP+1;
  free_end.using = false;
}

/* TODO: Implement the functionality of watchpoint */

void new_wp(char *arg) {
  WP *p = &head;
  WP *q = free_.next;
  if( q == &free_end) {
    printf("the number of the watchpoint is not enough!\n");
    return ;
  }
  else {
    free_.next = q->next;
    while( q->NO != p->NO+1 ) {
      p = p->next;
    }
    q->next = p->next;
    p->next = q;
    strcpy(q->expr, arg);
    q->using = true;
    printf("watchpoint NO.%d : %s \n",q->NO,q->expr);
  }
}

void free_wp(WP *wp) {

  if(wp->using == false) {
    printf("the watchpoint NO.%d is not in using\n",wp->NO);
    return ;
  }
  else {
    //char *arg = NULL;
    //strcpy(wp->expr, arg);
      wp->result_pre = 0;
      wp->result_now = 0;
      wp->using = false;
      printf("free_.next != NULL\n");

      WP *p = &head;
      printf("1\n");
      WP *q = &free_;
      printf("2\n");

      while(p->next != wp) {
        p = p->next;
      }

      p->next = wp->next;
      while( wp->NO < q->NO || wp->NO > q->next->NO ) {
        q = q->next;
      }
      wp->next = q->next;

      q->next = wp;
    printf("deleted the watchpoint NO.%d \n", wp->NO);
  }
}

void free_no(int NO) {
  printf("deleting the watchpoint NO.%d...\n",(wp_pool+NO-1)->NO);
  free_wp(wp_pool+NO-1);
}
