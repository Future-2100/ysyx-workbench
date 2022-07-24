#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {

  for(int i=0; i<32; i++) {
    if( difftest_check_reg( reg_name(i, 64), pc, ref_r->gpr[check_reg_idx(i)], gpr(i) ) == false )
      return false;
  }
  if( ref_r->mstatus != cpu.mstatus ) return false;
  if( ref_r->mcause  != cpu.mcause  ) return false;
  if( ref_r->mepc    != cpu.mepc    ) return false;
  if( ref_r->mtvec   != cpu.mtvec   ) return false;

  return true ;
}

void isa_difftest_attach() {
}
