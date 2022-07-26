#include <common.h>
#include "syscall.h"

enum { SYS_exit = 0 , SYS_yield = 2 };

/*
int sys_exit(){

}
*/

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  printf(" a[0] = %d\n", a[0]);

  switch (a[0]) {
    case SYS_exit  : printf("is in sys_exti \n"); halt(c->GPRx) ;  break;
    case SYS_yield : printf("is in sys_yield\n"); yield();  break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
