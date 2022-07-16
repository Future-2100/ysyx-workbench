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
    VL_OUT8(wlen,2,0);
    VL_OUT8(wen,0,0);
    VL_OUT8(ren,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(a,63,0);
    VL_OUT64(dnxt_pc,63,0);
    VL_OUT64(pc,63,0);
    VL_OUT64(wdata,63,0);
    VL_OUT64(addr,63,0);
    VL_IN64(rdata,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__br_asrt;
    CData/*0:0*/ top__DOT__I_type;
    CData/*0:0*/ top__DOT__U_type;
    CData/*3:0*/ top__DOT__lgc_op;
    CData/*4:0*/ top__DOT__wlgc_op;
    CData/*0:0*/ top__DOT__lb;
    CData/*0:0*/ top__DOT__lh;
    CData/*0:0*/ top__DOT__lw;
    CData/*0:0*/ top__DOT__ld;
    CData/*0:0*/ top__DOT__lbu;
    CData/*0:0*/ top__DOT__lhu;
    CData/*0:0*/ top__DOT__lwu;
    CData/*0:0*/ top__DOT__sb;
    CData/*0:0*/ top__DOT__sh;
    CData/*0:0*/ top__DOT__sw;
    CData/*0:0*/ top__DOT__sd;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__immop_en;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__immsf_en;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__wimmop_en;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__wimmsf_en;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__R_type;
    IData/*31:0*/ top__DOT__regfile_inst__DOT__i;
    IData/*31:0*/ top__DOT__alu_inst__DOT__wlgc_result;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__result;
    QData/*63:0*/ top__DOT__rd_data2;
    QData/*63:0*/ top__DOT__regfile_inst__DOT__wb_data;
    QData/*63:0*/ top__DOT__imm_gen_inst__DOT__immS_num;
    QData/*63:0*/ top__DOT__alu_inst__DOT__opdata1;
    QData/*63:0*/ top__DOT__alu_inst__DOT__opdata2;
    QData/*63:0*/ top__DOT__alu_inst__DOT__lgc_result;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__regfile_inst__DOT__gpr;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rstn;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
