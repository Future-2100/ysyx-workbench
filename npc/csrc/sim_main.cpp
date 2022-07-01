#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Include common routines
#include <verilated.h>

// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>

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

  // Simulated until $finish
//  while( !Verilated::gotFinish() ) {
  int i = 30;
  while ( i-- ) {

    contextp->timeInc(1); // 1 timeprecision period passes...

    int a = rand() & 1;
    int b = rand() & 1;

    top->a = a;
    top->b = b;

    // Evaluate model
    top->eval();

    printf("a = %d, b = %d, f = %d\n", a, b, top->f);

    assert(top->f == a ^ b);


  }

  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

  // Return good completion status
  return 0;
}
