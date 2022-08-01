#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

/*
struct Context {
  // TODO: fix the order of these members to match trap.S

  uintptr_t gpr[32], mcause, mstatus, mepc;

  void *pdir;
};
*/

//#define CONFIG_ETRACE

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
#ifdef CONFIG_ETRACE
  printf("---------------- trap triggered -------------------\n");
  printf(" mcause  =   %d \n", c->mcause );
  printf(" mstatus = 0x%x \n", c->mstatus);
  printf(" mepc    = 0x%x \n", c->mepc   );
  for(int i = 0; i < 32; i++) {
    printf(" gpr[%d]  = 0x%x \n", i, c->gpr[i]);
  }
  printf("------------- Context information end ------------\n");
#endif

  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11  : ev.event = EVENT_SYSCALL; break;
      default  : ev.event = EVENT_ERROR  ; break;
    }

    c = user_handler(ev, c);
    //user_handler = do_event()
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
