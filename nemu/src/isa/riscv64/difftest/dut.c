#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
<<<<<<< HEAD

  for(int i=0; i<32; i++) {
    if( difftest_check_reg( reg_name(i, 64), pc, ref_r->gpr[check_reg_idx(i)], gpr(i) ) == false )
      return false;
  }
  return true ;
}
=======
>>>>>>> tracer-ysyx2204

  for(int i=0; i<32; i++) {
    if( difftest_check_reg( reg_name(i, 64), pc, ref_r->gpr[check_reg_idx(i)], gpr(i) ) == false )
      return false;
  }
//static inline bool difftest_check_reg(const char *name, vaddr_t pc, word_t ref, word_t dut) {
  /*
    if( difftest_check_reg( "mstatus", pc, ref_r->mstatus, cpu.mstatus) == false )
      return false;
    if( difftest_check_reg( "mcause", pc, ref_r->mcause, cpu.mcause) == false )
      return false;
    if( difftest_check_reg( "mepc", pc, ref_r->mepc, cpu.mepc) == false )
      return false;
    if( difftest_check_reg( "mtvec", pc, ref_r->mtvec, cpu.mtvec) == false )
      return false;
      */

  return true ;
}
//80000550
void isa_difftest_attach() {
}
