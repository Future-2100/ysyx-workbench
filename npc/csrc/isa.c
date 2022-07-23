#include <paddr.h>
#include <isa.h>
#include <common.h>

static const uint32_t img [] = {
    0x00000297,  // lui t0,0x80000
    0x0002b823,  // sw  zero,0(t0)
    0x0102b503,  // lw  a0,0(t0)
    0x00100073,  // ebreak (used as nemu_trap)
    0xdeadbeef,  // some data
};

static void restart() {  
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}


void init_isa() {
  /* Load build-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this vertual computer system. */
  restart();
}
