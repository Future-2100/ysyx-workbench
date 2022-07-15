#include <assert.h>
#include <getopt.h>
#include <verilated.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <Vtop.h>

extern uint8_t pmem ;

uint32_t pmem_read(uint64_t pc) {
  uint32_t inst = *(uint32_t *)( pc - 0x80000000 + pmem);
  return inst;
}

extern VerilatedContext* contextp ;

extern Vtop* top ; 

void init_sim(int argc, char** argv, char** env) {

  // Prevent unused variable warnings
  if( false && argc && argv && env) {}

  //Create logs/ directory in case we have traces to put under it
  Verilated::mkdir("build/logs");

  // Set debug level, 0 is off, 9 is highest presently used
  contextp->debug(0);
  
  //Verilator must compute traced signals
  contextp->traceEverOn(true);

  // Pass arguments so Verilated code can see them, e.g. $value$plusargs
  // This needs to be called before you create any model
  contextp->commandArgs(argc, argv);

  const svScope scope = svGetScopeFromName("TOP.top");
  assert(scope);
  svSetScope(scope);

}

