// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT8(ebreak,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(dnxt_pc,63,0);
    VL_OUT64(pc,63,0);
    VL_OUT64(gpr1,63,0);

    // LOCAL SIGNALS
    CData/*3:0*/ top__DOT__rglr_op;
    CData/*4:0*/ top__DOT__wrglr_op;
    CData/*0:0*/ top__DOT__sb;
    CData/*0:0*/ top__DOT__sh;
    CData/*0:0*/ top__DOT__sw;
    CData/*0:0*/ top__DOT__sd;
    CData/*0:0*/ top__DOT__pc_gen_inst__DOT__jalbr_en;
    CData/*0:0*/ top__DOT__memory_inst__DOT__wr_en;
    CData/*7:0*/ top__DOT__memory_inst__DOT__ram_inst__DOT__rdata1;
    CData/*7:0*/ top__DOT__memory_inst__DOT__ram_inst__DOT__rdata2;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__immop_en;
    SData/*15:0*/ top__DOT__memory_inst__DOT__ram_inst__DOT__rdata3;
    IData/*31:0*/ top__DOT__regfile_inst__DOT__i;
    IData/*31:0*/ top__DOT__alu_inst__DOT__wrglr_rslt;
    IData/*31:0*/ top__DOT__memory_inst__DOT__ram_inst__DOT__rdata4;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__result;
    QData/*63:0*/ top__DOT__rdata2;
    QData/*63:0*/ top__DOT__regfile_inst__DOT__wdata;
    QData/*63:0*/ top__DOT__alu_inst__DOT__opdata1;
    QData/*63:0*/ top__DOT__alu_inst__DOT__opdata2;
    QData/*63:0*/ top__DOT__alu_inst__DOT__rglr_rslt;
    QData/*63:0*/ top__DOT__memory_inst__DOT__rdata;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__regfile_inst__DOT__gpr;
    VlUnpacked<CData/*7:0*/, 8192> top__DOT__memory_inst__DOT__ram_inst__DOT__ram1;
    VlUnpacked<CData/*7:0*/, 8192> top__DOT__memory_inst__DOT__ram_inst__DOT__ram2;
    VlUnpacked<SData/*15:0*/, 8192> top__DOT__memory_inst__DOT__ram_inst__DOT__ram3;
    VlUnpacked<IData/*31:0*/, 8192> top__DOT__memory_inst__DOT__ram_inst__DOT__ram4;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rstn;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
