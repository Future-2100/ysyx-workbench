#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {

  if( direction == DIFFTEST_TO_REF ) {
    memcpy(guest_to_host(RESET_VECTOR), addr + buf - 0x80000000, n);
  }
  else if ( direction == DIFFTEST_TO_DUT ) {
    memcpy( addr + buf - 0x80000000, guest_to_host(RESET_VECTOR), n);
  }
}

void difftest_regcpy(CPU_state *dut, bool direction) {

  int i;
  for( i=0; i<32; i++ ) {
    if( direction == DIFFTEST_TO_REF ) {
      cpu.gpr[i] = dut->gpr[i];
    }
    else if ( direction == DIFFTEST_TO_DUT ) {
      (dut->gpr[i]) = cpu.gpr[i] ;
    }
  }
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
<<<<<<< HEAD
=======
  isa_raise_intr( NO, cpu.pc );
>>>>>>> tracer-ysyx2204
 // assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
