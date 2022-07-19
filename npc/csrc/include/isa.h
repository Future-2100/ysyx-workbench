#ifndef __ISA_H__
#define __ISA_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
}CPU_state;

typedef struct {
  union {
    uint32_t val;
  }inst;
}ISADecodeInfo;

extern CPU_state cpu;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
