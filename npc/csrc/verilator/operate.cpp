// Include common routines
#include <verilated.h>
// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>

#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <Vtop.h>

extern Vtop* top;
extern VerilatedContext* contextp ;


void reset(int n) {
  printf("start reset\n");
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



