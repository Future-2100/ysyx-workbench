#ifndef __CPU_H__
#define __CPU_H__

#include <common.h>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState ;

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} ISADecodeInfo;

typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc; // static next pc
  vaddr_t dnpc; // dynamic next pc
  ISADecodeInfo isa;
  char logbuf[128];
} Decode;


#endif

