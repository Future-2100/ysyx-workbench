#include <common.h>
#include <isa.h>

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])

word_t isa_reg_str2val(const char *s, bool *success) {
  for(int i=0; i<(sizeof(regs)/sizeof(regs[0])); i++) {
    if( strcmp( s, regs[i] ) == 0 )
      return cpu.gpr[i];
    else if ( strcmp(s, "pc") == 0 )
      return cpu.pc;
}
  *success = false;
  return 0;
}

static inline bool difftest_check_reg(const char *name, vaddr_t pc, word_t ref, word_t dut) {
    if (ref != dut) {
        Log("%s is different after executing instruction ap pc = " FMT_WORD
        ", right = " FMT_WORD ",wrong = " FMT_WORD ",diff = " FMT_WORD,
        name, pc, ref, dut, ref ^ dut);
        return false;
    }
    return true;
}

static inline int check_reg_idx(int idx){
   assert(idx >= 0 && idx < 32) ;
   return idx;
}

static const char* reg_name(int idx, int width) {
  return regs[check_reg_idx(idx)];
}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {

  for(int i=1; i<32; i++) {
    if( difftest_check_reg( reg_name(i, 64), pc, ref_r->gpr[check_reg_idx(i)], gpr(i) ) == false )
      return false;
  }
  return true ; 
}


void isa_reg_display() {
  int i;
  for (i = 0; i<(sizeof(regs)/sizeof(regs[0])); i++) {
    printf("%s = 0x%lx\n", reg_name(i,64), cpu.gpr[i]);
  }
}
