#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Include common routines
#include <verilated.h>

// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>

#include "svdpi.h"
#include "Vtop__Dpi.h"

uint32_t pmem_read(uint64_t pc) {
  if ( pc == 0x80000080 )
    return 0x100073;
  else
    return 0x108093;
}

int main(int argc, char** argv, char** env) {

  // Prevent unused variable warnings
  if( false && argc && argv && env) {}

  //Create logs/ directory in case we have traces to put under it
  Verilated::mkdir("build/logs");

  //Construct a VerilatedContext to hold simulation time, etc.
  VerilatedContext* contextp = new VerilatedContext; // must delete it at end
//const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

  // Set debug level, 0 is off, 9 is highest presently used
  contextp->debug(0);

  //Verilator must compute traced signals
  contextp->traceEverOn(true);

  // Pass arguments so Verilated code can see them, e.g. $value$plusargs
  // This needs to be called before you create any model
  contextp->commandArgs(argc, argv);

  // Construct the Verilated model, from Vtop.h generated froom Verilating "top.v"
  Vtop* top = new Vtop;  // must delete it at end
//const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};

  const svScope scope = svGetScopeFromName("TOP.top");
  assert(scope);
  svSetScope(scope);

  top->rstn = 0;
  top->clk  = 0;
  top->inst = 0x00;
  
    for ( int i=0; i<10; i++ ) {
      contextp->timeInc(1);
      top->clk = !top->clk;
      top->rstn = 0 ;
      top->eval();
    }

    top->rstn = 1;

  // Simulated until $finish
  while( !Verilated::gotFinish() ) {

    contextp->timeInc(1); // 1 timeprecision period passes...

    top->clk = !top->clk ;

    top->inst = pmem_read(top->dnxt_pc);

    if(top->ebreak) end_sim();
    // Evaluate model
    top->eval();

    if( !top->clk ) {
      printf("pc = %lx, gpr[1] = %lx \n", top->dnxt_pc, top__DOT__regfile_inst__DOT__gpr);
    }

  }

  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

  // Return good completion status
  return 0;
}

