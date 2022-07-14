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

//Construct a VerilatedContext to hold simulation time, etc.
VerilatedContext* contextp = new VerilatedContext; // must delete it at end
//const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

// Construct the Verilated model, from Vtop.h generated froom Verilating "top.v"
  Vtop* top = new Vtop;  // must delete it at end
//const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};


int main(int argc, char** argv, char** env) {

  init_memory(argc, argv);

  init_sim(argc, argv, env);

  //begin 
  top->rstn = 0;
  top->clk  = 1;
  
    for ( int i=0; i<10; i++ ) {
      top->eval();
      contextp->timeInc(10);
      top->clk = !top->clk;
    }

    top->rstn = 1;

    top->eval();
  // Simulated until $finish
  // int k = 0;
  while( !Verilated::gotFinish() ) {

    if(  top->clk ) {
      if(top->ebreak)  end_sim(); 
      contextp->timeInc(1); // 10 timeprecision period passes...
      top->inst = pmem_read(top->pc);
      top->eval();
      contextp->timeInc(9);
    }
    
    else {
      printf("pc = %lx, inst = %x \n", top->pc, top->inst);
      contextp->timeInc(10);
    }

    top->clk = !top->clk ;

    // Evaluate model
    top->eval();
  }

  uint64_t a = top->a ;

  printf("a = %x\n", a);
  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

  // Return good completion status
  return a;

}

