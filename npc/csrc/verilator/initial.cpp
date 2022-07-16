#include <getopt.h>
#include <verilated.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <Vtop.h>

extern VerilatedContext* contextp ;

// Construct the Verilated model, from Vtop.h generated froom Verilating "top.v"
 Vtop* top = new Vtop;  // must delete it at end
//const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};

//Construct a VerilatedContext to hold simulation time, etc.
VerilatedContext* contextp = new VerilatedContext; // must delete it at end
//const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};


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

