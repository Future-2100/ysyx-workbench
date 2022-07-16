// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

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
    CData/*0:0*/ top__DOT__wb_en;
    CData/*0:0*/ top__DOT__wb_pc;
    CData/*0:0*/ top__DOT__wb_alu;
    CData/*0:0*/ top__DOT__I_type;
    CData/*0:0*/ top__DOT__U_type;
    CData/*0:0*/ top__DOT__rs1_en;
    CData/*0:0*/ top__DOT__pc_en;
    CData/*0:0*/ top__DOT__rs2_en;
    CData/*0:0*/ top__DOT__imm_en;
    CData/*0:0*/ top__DOT__lgc_en;
    CData/*3:0*/ top__DOT__lgc_op;
    CData/*0:0*/ top__DOT__wlgc_en;
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
    CData/*0:0*/ top__DOT__pc_gen_inst__DOT__snxt_en;
    CData/*0:0*/ top__DOT__alu_inst__DOT__br_result;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__immop_en;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__immsf_en;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__wimmop_en;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__wimmsf_en;
    CData/*0:0*/ top__DOT__controlor_inst__DOT__R_type;
    IData/*31:0*/ top__DOT__regfile_inst__DOT__i;
    IData/*31:0*/ top__DOT__alu_inst__DOT__wlgc_result;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__result;
    QData/*63:0*/ top__DOT__load_data;
    QData/*63:0*/ top__DOT__rd_data1;
    QData/*63:0*/ top__DOT__rd_data2;
    QData/*63:0*/ top__DOT__pc_gen_inst__DOT__br_pc;
    QData/*63:0*/ top__DOT__regfile_inst__DOT__wb_data;
    QData/*63:0*/ top__DOT__imm_gen_inst__DOT__immI_num;
    QData/*63:0*/ top__DOT__imm_gen_inst__DOT__immS_num;
    QData/*63:0*/ top__DOT__imm_gen_inst__DOT__immB_num;
    QData/*63:0*/ top__DOT__imm_gen_inst__DOT__immU_num;
    QData/*63:0*/ top__DOT__imm_gen_inst__DOT__immJ_num;
    QData/*63:0*/ top__DOT__alu_inst__DOT__opdata1;
    QData/*63:0*/ top__DOT__alu_inst__DOT__opdata2;
    QData/*63:0*/ top__DOT__alu_inst__DOT__lgc_result;
    QData/*63:0*/ top__DOT__memory_inst__DOT__lb_data;
    QData/*63:0*/ top__DOT__memory_inst__DOT__lh_data;
    QData/*63:0*/ top__DOT__memory_inst__DOT__lw_data;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__regfile_inst__DOT__gpr;

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__rstn;
        CData/*0:0*/ top__DOT____Vtogcov__ebreak;
        CData/*2:0*/ top__DOT____Vtogcov__wlen;
        CData/*0:0*/ top__DOT____Vtogcov__wen;
        CData/*0:0*/ top__DOT____Vtogcov__ren;
        CData/*0:0*/ top__DOT____Vtogcov__br_asrt;
        CData/*0:0*/ top__DOT____Vtogcov__jalr_en;
        CData/*0:0*/ top__DOT____Vtogcov__jal_en;
        CData/*0:0*/ top__DOT____Vtogcov__wb_en;
        CData/*0:0*/ top__DOT____Vtogcov__wb_load;
        CData/*0:0*/ top__DOT____Vtogcov__wb_pc;
        CData/*0:0*/ top__DOT____Vtogcov__wb_alu;
        CData/*0:0*/ top__DOT____Vtogcov__I_type;
        CData/*0:0*/ top__DOT____Vtogcov__S_type;
        CData/*0:0*/ top__DOT____Vtogcov__B_type;
        CData/*0:0*/ top__DOT____Vtogcov__U_type;
        CData/*0:0*/ top__DOT____Vtogcov__rs1_en;
        CData/*0:0*/ top__DOT____Vtogcov__pc_en;
        CData/*0:0*/ top__DOT____Vtogcov__rs2_en;
        CData/*0:0*/ top__DOT____Vtogcov__imm_en;
        CData/*0:0*/ top__DOT____Vtogcov__lgc_en;
        CData/*3:0*/ top__DOT____Vtogcov__lgc_op;
        CData/*0:0*/ top__DOT____Vtogcov__wlgc_en;
        CData/*4:0*/ top__DOT____Vtogcov__wlgc_op;
        CData/*0:0*/ top__DOT____Vtogcov__zero;
        CData/*0:0*/ top__DOT____Vtogcov__lb;
        CData/*0:0*/ top__DOT____Vtogcov__lh;
        CData/*0:0*/ top__DOT____Vtogcov__lw;
        CData/*0:0*/ top__DOT____Vtogcov__ld;
        CData/*0:0*/ top__DOT____Vtogcov__lbu;
        CData/*0:0*/ top__DOT____Vtogcov__lhu;
        CData/*0:0*/ top__DOT____Vtogcov__lwu;
        CData/*0:0*/ top__DOT____Vtogcov__sb;
        CData/*0:0*/ top__DOT____Vtogcov__sh;
        CData/*0:0*/ top__DOT____Vtogcov__sw;
        CData/*0:0*/ top__DOT____Vtogcov__sd;
        CData/*0:0*/ top__DOT__pc_gen_inst__DOT____Vtogcov__snxt_en;
        CData/*0:0*/ top__DOT__alu_inst__DOT____Vtogcov__br_result;
        CData/*0:0*/ top__DOT__controlor_inst__DOT____Vtogcov__lui_en;
        CData/*0:0*/ top__DOT__controlor_inst__DOT____Vtogcov__auipc_en;
        CData/*0:0*/ top__DOT__controlor_inst__DOT____Vtogcov__immop_en;
        CData/*0:0*/ top__DOT__controlor_inst__DOT____Vtogcov__immsf_en;
        CData/*0:0*/ top__DOT__controlor_inst__DOT____Vtogcov__rsop_en;
        CData/*0:0*/ top__DOT__controlor_inst__DOT____Vtogcov__wimmop_en;
        CData/*0:0*/ top__DOT__controlor_inst__DOT____Vtogcov__wimmsf_en;
        CData/*0:0*/ top__DOT__controlor_inst__DOT____Vtogcov__wrsop_en;
        CData/*0:0*/ top__DOT__controlor_inst__DOT____Vtogcov__R_type;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rstn;
        IData/*31:0*/ top__DOT____Vtogcov__inst;
        IData/*31:0*/ top__DOT__alu_inst__DOT____Vtogcov__wlgc_result;
        QData/*63:0*/ top__DOT____Vtogcov__a;
        QData/*63:0*/ top__DOT____Vtogcov__dnxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__pc;
        QData/*63:0*/ top__DOT____Vtogcov__wdata;
        QData/*63:0*/ top__DOT____Vtogcov__addr;
        QData/*63:0*/ top__DOT____Vtogcov__rdata;
        QData/*63:0*/ top__DOT____Vtogcov__imm;
        QData/*63:0*/ top__DOT____Vtogcov__result;
        QData/*63:0*/ top__DOT____Vtogcov__snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__load_data;
        QData/*63:0*/ top__DOT____Vtogcov__rd_data1;
        QData/*63:0*/ top__DOT____Vtogcov__rd_data2;
    };
    struct {
        QData/*63:0*/ top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc;
        QData/*63:0*/ top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc;
        QData/*63:0*/ top__DOT__regfile_inst__DOT____Vtogcov__wb_data;
        QData/*63:0*/ top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num;
        QData/*63:0*/ top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num;
        QData/*63:0*/ top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num;
        QData/*63:0*/ top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num;
        QData/*63:0*/ top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num;
        QData/*63:0*/ top__DOT__alu_inst__DOT____Vtogcov__opdata1;
        QData/*63:0*/ top__DOT__alu_inst__DOT____Vtogcov__opdata2;
        QData/*63:0*/ top__DOT__alu_inst__DOT____Vtogcov__lgc_result;
        QData/*63:0*/ top__DOT__memory_inst__DOT____Vtogcov__lb_data;
        QData/*63:0*/ top__DOT__memory_inst__DOT____Vtogcov__lh_data;
        QData/*63:0*/ top__DOT__memory_inst__DOT____Vtogcov__lw_data;
        QData/*63:0*/ top__DOT__memory_inst__DOT____Vtogcov__lbu_data;
        QData/*63:0*/ top__DOT__memory_inst__DOT____Vtogcov__lhu_data;
        QData/*63:0*/ top__DOT__memory_inst__DOT____Vtogcov__lwu_data;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

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
