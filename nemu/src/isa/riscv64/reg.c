#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  for(int i=0; i<(sizeof(regs)/sizeof(regs[0])); i++) {
    //printf("%s = 0x%lx\n",regs[i], cpu.gpr[i]);
    printf("%s = 0x%lx\n", reg_name(i, 64), gpr(i) );
  }
}

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
