// Include common routines
#include <verilated.h>
// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>

#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <Vtop.h>

extern Vtop* top;
extern VerilatedContext* contextp ;

uint32_t pmem_read(uint64_t pc);

void reset(int n) {
  top->rstn = 0 ;
  top->clk  = 1 ;

  for ( int i=0; i<(n*2); i++ ) {
      top->eval();
      contextp->timeInc(10);
      top->clk = !top->clk;
  }
    top->rstn = 1;
    top->eval();
}


void init_module() {

  reset(10);
  printf("pc = %lx\n",top->pc);
  printf("----------module reset successful----------\n");
  
}


void run_step(uint64_t n) {

  while( (n--) && ( !Verilated::gotFinish() )  ) {

    if(  top->clk ) {
      if(top->ebreak)  { 
        end_sim(); 
        printf("---------- program end  ----------\n");
        uint64_t a = top->a ;
        printf("a = %lx\n", a);
      }
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

    if(  top->clk ) {
      if(top->ebreak)  { 
        end_sim(); 
        printf("---------- program end  ----------\n");
        uint64_t a = top->a ;
        printf("a = %lx\n", a);
      }
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
}

void run_all() {

  run_step(-1);
  /*
  // Simulated untill $finish
  printf("---------- run all ----------\n");
  while( !Verilated::gotFinish() ) {

    if(  top->clk ) {
      if(top->ebreak)  { 
        end_sim(); 
        printf("---------- finish  ----------\n");
      }
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
  */

  uint64_t a = top->a ;

  printf("a = %lx\n", a);

}

void delete_module() {

  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

}


