// Include common routines
#include <verilated.h>
// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>

#include "svdpi.h"
#include "Vtop__Dpi.h"

void init_monitor(int, char *[]);
void init_module();
void engine_start();
int is_exit_status_bad();

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

  init_monitor(argc, argv);

  init_sim(argc, argv, env);

  init_module();  //reset 10 periods


  engine_start();


  // Simulated until $finish
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

  printf("a = %lx\n", a);
  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

  // Return good completion status
  return a;

}

