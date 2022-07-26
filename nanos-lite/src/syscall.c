#include <common.h>
#include "syscall.h"

enum { SYS_exit = 1 , SYS_yield = 2 };

/*
int sys_exit(){

}
*/

void sys_yield() {
  yield();
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  printf(" a[0] = %d\n", a[0]);

  switch (a[0]) {
    //case SYS_exit  : printf("is in sys_exti \n"); halt()              break;
    case SYS_yield : printf("is in sys_yield\n"); sys_yield();  break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  c->GPRx = 0 ;
}
