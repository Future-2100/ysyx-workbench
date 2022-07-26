#include <common.h>
#include "syscall.h"

enum { SYS_exit, SYS_yield = 2 };
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  switch (a[0]) {
    case SYS_exit  : printf("is in sys_exti \n"); halt( c->GPRx ); break;
    case SYS_yield : printf("is in sys_yield\n"); yield();  break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
