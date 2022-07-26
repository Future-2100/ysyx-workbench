#include <common.h>
/*
struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t mepc, mcause, gpr[32], mstatus;
  void *pdir;
};
*/

static Context* do_event(Event e, Context* c) {

  printf("event number = %d\n", e.event);

  switch (e.event) {
      case EVENT_YIELD     :  printf("\n\nhere is the event_yield !\n\n") ; break; 
      case EVENT_SYSCALL   :  printf("\n\nhere is the event_syscall!\n\n"); break;
                              /*
      case EVENT_PAGEFAULT : break;
      case EVENT_ERROR     : break;
      case EVENT_IRQ_TIMER : break;
      case EVENT_IRQ_IODEV : break;
      */
      default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
