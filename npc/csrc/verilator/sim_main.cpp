#include <common.h>
// Include common routines
#include <verilated.h>
// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>

void init_monitor(int argc, char** argv);
void init_module();
void engine_start();
int is_exit_status_bad();

// Construct the Verilated model, from Vtop.h generated froom Verilating "top.v"
Vtop* top = new Vtop;  // must delete it at end
//const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};

//Construct a VerilatedContext to hold simulation time, etc.
VerilatedContext* contextp = new VerilatedContext; // must delete it at end
//const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

int main(int argc, char** argv) {

  if( false && argc && argv) {}

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
  //assert(scope);
  svSetScope(scope);



//  init_monitor(argc, argv);

//  init_module();  //reset 10 periods

 // engine_start();

  // Return good completion status
  return 0;//is_exit_status_bad();

}

