#include <common.h>
#include "syscall.h"

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

  switch (a[0]) {
    case SYS_exit  : printf("is in sys_exti \n");               break;
    case SYS_yield : printf("is in sys_yield\n"); sys_yield();  c->GPRx = 0 ; break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
