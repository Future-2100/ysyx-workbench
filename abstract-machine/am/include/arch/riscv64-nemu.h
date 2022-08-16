#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
<<<<<<< HEAD
  uintptr_t mepc, mcause, gpr[32], mstatus;
  void *pdir;
};

#define GPR1 gpr[17] // a7
#define GPR2 gpr[0]
#define GPR3 gpr[0]
#define GPR4 gpr[0]
#define GPRx gpr[0]
=======

  uintptr_t gpr[32] , mcause, mstatus, mepc;

  void *pdir;
  
//  uintptr_t np;
};

#define GPR1 gpr[17] // a7
#define GPR2 gpr[10] // a0
#define GPR3 gpr[11] // a1
#define GPR4 gpr[12] // a2
#define GPRx gpr[10] // a0
>>>>>>> tracer-ysyx2204
#endif
