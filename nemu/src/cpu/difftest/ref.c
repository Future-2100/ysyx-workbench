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
//  assert(0);
}

void difftest_regcpy(void *dut, bool direction) {

  int i;
  for( i=0; i<32; i++ ) {
    if( direction == DIFFTEST_TO_REF ) {
      cpu.gpr[i] = *(uint64_t *)(dut+i);
    }
    else if ( direction == DIFFTEST_TO_DUT ) {
      *(uint64_t *)(dut+i) = cpu.gpr[i] ;
    }
  }
 // assert(0);
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
  //assert(0);
}

void difftest_raise_intr(word_t NO) {
 // assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
