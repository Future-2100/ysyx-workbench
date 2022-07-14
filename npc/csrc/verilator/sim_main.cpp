// Include common routines
#include <verilated.h>
// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>

#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <Vtop.h>

void init_memory(int argc, char** argv);
void init_sim(int argc, char** argv, char** env);
uint32_t pmem_read(uint64_t pc);
void reset(int n);

//Construct a VerilatedContext to hold simulation time, etc.
VerilatedContext* contextp = new VerilatedContext; // must delete it at end
//const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

// Construct the Verilated model, from Vtop.h generated froom Verilating "top.v"
  Vtop* top = new Vtop;  // must delete it at end
//const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};


int main(int argc, char** argv, char** env) {

  init_memory(argc, argv);
  init_sim(argc, argv, env);

  reset(10); // reset 10 periods 

  // Simulated until $finish
  while( !Verilated::gotFinish() ) {

    // Evaluate model
    if(  top->clk ) {
      if(top->ebreak)  end_sim(); 
      //contextp->timeInc(1); // 10 timeprecision period passes...
      top->inst = pmem_read(top->pc);
    }
    
    else {
      printf("pc = %lx, inst = %x \n", top->pc, top->inst);
    }

    top->eval();
    contextp->timeInc(10);
    top->clk = !top->clk ;

  }

  uint64_t a = top->a ;

  printf("a = %lx\n", a);
  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

  // Return good completion status
  return a;

}

