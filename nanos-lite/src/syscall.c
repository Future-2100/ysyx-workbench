#include <common.h>
#include "syscall.h"

void write( uintptr_t *ret , void *pdir){

  *ret = 0;
}


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  printf(" a[0] = %d\n", a[0]);

  switch (a[0]) {
    case SYS_exit  : printf("is in sys_exit \n"); halt(c->GPRx) ;  break;
    case SYS_yield : printf("is in sys_yield\n"); yield();  break;
    //case SYS_write : printf("is in sys_write\n"); write(&c->GPRx,pdir);  break;
    case SYS_write : printf("is in sys_write\n");  break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
