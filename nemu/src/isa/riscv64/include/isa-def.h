#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>
#define reg_t uint64_t

typedef struct {
  word_t gpr[32];
  vaddr_t pc    ;
  reg_t mstatus ;
  reg_t mcause  ;
  reg_t mepc    ;
  reg_t mtvec   ;
} riscv64_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
