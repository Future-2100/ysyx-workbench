// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first);

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vtop___024root___configure_coverage(this, first);
}

Vtop___024root::~Vtop___024root() {
}

// Coverage
void Vtop___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[866]);
    ++(vlSymsp->__Vcoverage[1594]);
    ++(vlSymsp->__Vcoverage[1796]);
    ++(vlSymsp->__Vcoverage[1835]);
    ++(vlSymsp->__Vcoverage[1874]);
    ++(vlSymsp->__Vcoverage[1883]);
    ++(vlSymsp->__Vcoverage[2286]);
    if ((1U & (~ ((IData)(vlSelf->top__DOT____Vtogcov__wmlgc_op) 
                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->top__DOT____Vtogcov__wmlgc_op = (8U 
                                                 | (IData)(vlSelf->top__DOT____Vtogcov__wmlgc_op));
    }
    if ((1U & (IData)(vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = (0xfffffffffffffffeULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rstn) ^ (IData)(vlSelf->top__DOT____Vtogcov__rstn))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rstn = vlSelf->rstn;
    }
    if (((IData)(vlSelf->ifu_ARREADY) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_ARREADY))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT____Vtogcov__ifu_ARREADY = vlSelf->ifu_ARREADY;
    }
    if (((IData)(vlSelf->ifu_RVALID) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_RVALID))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT____Vtogcov__ifu_RVALID = vlSelf->ifu_RVALID;
    }
    if ((1U & ((IData)(vlSelf->ifu_RRESP) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_RRESP)))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT____Vtogcov__ifu_RRESP = ((2U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__ifu_RRESP)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->ifu_RRESP)));
    }
    if ((2U & ((IData)(vlSelf->ifu_RRESP) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_RRESP)))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->top__DOT____Vtogcov__ifu_RRESP = ((1U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__ifu_RRESP)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->ifu_RRESP)));
    }
    if ((1U & ((IData)(vlSelf->ifu_RDATA) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_RDATA)))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffffffeULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->ifu_RDATA)))));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 1U)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                                                             >> 1U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffffffdULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 1U))))) 
                                                     << 1U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 2U)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                                                             >> 2U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffffffbULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 2U))))) 
                                                     << 2U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 3U)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                                                             >> 3U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffffff7ULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 3U))))) 
                                                     << 3U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 4U)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                                                             >> 4U))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffffffefULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 4U))))) 
                                                     << 4U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 5U)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                                                             >> 5U))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffffffdfULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 5U))))) 
                                                     << 5U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 6U)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                                                             >> 6U))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffffffbfULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 6U))))) 
                                                     << 6U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 7U)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                                                             >> 7U))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffffff7fULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 7U))))) 
                                                     << 7U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 8U)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                                                             >> 8U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffffeffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 8U))))) 
                                                     << 8U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 9U)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                                                             >> 9U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffffdffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 9U))))) 
                                                     << 9U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffffbffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffff7ffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffffefffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffffdfffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffffbfffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffff7fffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffeffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffdffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffffbffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffff7ffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffefffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffdfffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffffbfffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffff7fffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffeffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffdffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffffbffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffff7ffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffefffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffdfffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffffbfffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffff7fffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffeffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffdffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffffbffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffff7ffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffefffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffdfffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x25U))))) 
                                                     << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffffbfffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x26U))))) 
                                                     << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffff7fffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x27U))))) 
                                                     << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffeffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x28U))))) 
                                                     << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffdffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x29U))))) 
                                                     << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffffbffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x2aU))))) 
                                                     << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffff7ffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x2bU))))) 
                                                     << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffefffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x2cU))))) 
                                                     << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffdfffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x2dU))))) 
                                                     << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffffbfffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x2eU))))) 
                                                     << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffff7fffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x2fU))))) 
                                                     << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffeffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x30U))))) 
                                                     << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffdffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x31U))))) 
                                                     << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfffbffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x32U))))) 
                                                     << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfff7ffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x33U))))) 
                                                     << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffefffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x34U))))) 
                                                     << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffdfffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x35U))))) 
                                                     << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xffbfffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x36U))))) 
                                                     << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xff7fffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x37U))))) 
                                                     << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfeffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x38U))))) 
                                                     << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfdffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x39U))))) 
                                                     << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xfbffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x3aU))))) 
                                                     << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xf7ffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x3bU))))) 
                                                     << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xefffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x3cU))))) 
                                                     << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xdfffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x3dU))))) 
                                                     << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0xbfffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x3eU))))) 
                                                     << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->ifu_RDATA >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__ifu_RDATA 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT____Vtogcov__ifu_RDATA = ((0x7fffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__ifu_RDATA) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ifu_RDATA 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU));
    }
    vlSelf->instr = (IData)(vlSelf->ifu_RDATA);
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__first_pc_ld) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__first_pc_ld))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__first_pc_ld 
            = vlSelf->top__DOT__controlor_inst__DOT__first_pc_ld;
    }
    if ((1U & ((IData)(vlSelf->pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffeULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (IData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->pc)))));
    }
    if ((1U & ((IData)((vlSelf->pc >> 1U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffdULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 1U))))) 
                                              << 1U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 2U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffbULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 2U))))) 
                                              << 2U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 3U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffff7ULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 3U))))) 
                                              << 3U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 4U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffefULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 4U))))) 
                                              << 4U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 5U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffdfULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 5U))))) 
                                              << 5U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 6U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffbfULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 6U))))) 
                                              << 6U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 7U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 7U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffff7fULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 7U))))) 
                                              << 7U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 8U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 8U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffeffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 8U))))) 
                                              << 8U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 9U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffdffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 9U))))) 
                                              << 9U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xaU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffbffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xaU))))) 
                                              << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xbU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffff7ffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xbU))))) 
                                              << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xcU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffefffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xcU))))) 
                                              << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xdU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffdfffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xdU))))) 
                                              << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xeU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffbfffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xeU))))) 
                                              << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xfU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffff7fffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xfU))))) 
                                              << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x10U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffeffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x10U))))) 
                                              << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x11U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffdffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x11U))))) 
                                              << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x12U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffbffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x12U))))) 
                                              << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x13U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffff7ffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x13U))))) 
                                              << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x14U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffefffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x14U))))) 
                                              << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x15U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffdfffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x15U))))) 
                                              << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x16U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffbfffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x16U))))) 
                                              << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x17U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffff7fffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x17U))))) 
                                              << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x18U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffeffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x18U))))) 
                                              << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x19U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffdffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x19U))))) 
                                              << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1aU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffbffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1aU))))) 
                                              << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1bU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffff7ffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1bU))))) 
                                              << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1cU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffefffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1cU))))) 
                                              << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1dU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffdfffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1dU))))) 
                                              << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1eU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffbfffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1eU))))) 
                                              << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1fU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffff7fffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1fU))))) 
                                              << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x20U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffeffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x20U))))) 
                                              << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x21U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffdffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x21U))))) 
                                              << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x22U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffbffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x22U))))) 
                                              << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x23U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffff7ffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x23U))))) 
                                              << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x24U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffefffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x24U))))) 
                                              << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x25U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffdfffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x25U))))) 
                                              << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x26U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffbfffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x26U))))) 
                                              << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x27U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffff7fffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x27U))))) 
                                              << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x28U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffeffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x28U))))) 
                                              << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x29U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffdffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x29U))))) 
                                              << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2aU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffbffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2aU))))) 
                                              << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2bU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffff7ffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2bU))))) 
                                              << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2cU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffefffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2cU))))) 
                                              << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2dU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffdfffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2dU))))) 
                                              << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2eU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffbfffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2eU))))) 
                                              << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2fU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffff7fffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2fU))))) 
                                              << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x30U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffeffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x30U))))) 
                                              << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x31U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffdffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x31U))))) 
                                              << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x32U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffbffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x32U))))) 
                                              << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x33U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfff7ffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x33U))))) 
                                              << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x34U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffefffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x34U))))) 
                                              << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x35U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffdfffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x35U))))) 
                                              << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x36U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffbfffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x36U))))) 
                                              << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x37U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xff7fffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x37U))))) 
                                              << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x38U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfeffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x38U))))) 
                                              << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x39U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfdffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x39U))))) 
                                              << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3aU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfbffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3aU))))) 
                                              << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3bU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xf7ffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3bU))))) 
                                              << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3cU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xefffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3cU))))) 
                                              << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3dU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xdfffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3dU))))) 
                                              << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3eU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xbfffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3eU))))) 
                                              << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3fU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__pc = ((0x7fffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU));
    }
    vlSelf->snxt_pc = (4ULL + vlSelf->pc);
    if ((0U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
        if ((1U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
            if ((2U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
                ++(vlSymsp->__Vcoverage[2284]);
            }
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
        ++(vlSymsp->__Vcoverage[2280]);
    }
    if ((0U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
        if ((1U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
            ++(vlSymsp->__Vcoverage[2281]);
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
        if ((1U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
            if ((2U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
                ++(vlSymsp->__Vcoverage[2285]);
            }
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
        if ((1U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
            if ((2U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
                if ((1U & (~ ((IData)(vlSelf->ifu_RVALID) 
                              & (0U == (IData)(vlSelf->ifu_RRESP)))))) {
                    ++(vlSymsp->__Vcoverage[2283]);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
        if ((1U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
            if ((2U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
                if (((IData)(vlSelf->ifu_RVALID) & 
                     (0U == (IData)(vlSelf->ifu_RRESP)))) {
                    ++(vlSymsp->__Vcoverage[2282]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_cstate)))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_cstate 
            = ((2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_cstate)) 
               | (1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_cstate)))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_cstate 
            = ((1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_cstate)) 
               | (2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate)));
    }
    vlSelf->ifu_ARVALID = 0U;
    if ((0U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
        if ((1U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
            vlSelf->ifu_ARVALID = 1U;
        } else if ((2U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
            if (((IData)(vlSelf->ifu_RVALID) & (0U 
                                                == (IData)(vlSelf->ifu_RRESP)))) {
                vlSelf->ifu_ARVALID = 1U;
            }
        }
    }
    vlSelf->top__DOT__controlor_inst__DOT__cpu_nstate 
        = ((0U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))
            ? 1U : ((1U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))
                     ? ((IData)(vlSelf->ifu_ARREADY)
                         ? 2U : 1U) : ((2U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))
                                        ? (((IData)(vlSelf->ifu_RVALID) 
                                            & (0U == (IData)(vlSelf->ifu_RRESP)))
                                            ? ((IData)(vlSelf->ifu_ARREADY)
                                                ? 2U
                                                : 1U)
                                            : 2U) : 1U)));
    vlSelf->ifu_ARPORT = 0U;
    if ((0U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
        if ((1U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
            vlSelf->ifu_ARPORT = 4U;
        } else if ((2U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate))) {
            if (((IData)(vlSelf->ifu_RVALID) & (0U 
                                                == (IData)(vlSelf->ifu_RRESP)))) {
                vlSelf->ifu_ARPORT = 4U;
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((0x2000U & vlSelf->instr)) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1790]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((0x2000U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1789]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1793]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1794]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1791]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1792]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1788]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1787]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((0x2000U & vlSelf->instr)) {
            ++(vlSymsp->__Vcoverage[1834]);
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1833]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1830]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1831]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1832]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1834]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1829]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((0x2000U & vlSelf->instr)) {
            ++(vlSymsp->__Vcoverage[1882]);
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1877]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1880]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1881]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1878]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1879]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1876]);
            }
        }
    }
    if (((0x67U == (0x7fU & vlSelf->instr)) ^ (IData)(vlSelf->top__DOT____Vtogcov__jalr_en))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->top__DOT____Vtogcov__jalr_en = (0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->instr));
    }
    if (((0x6fU == (0x7fU & vlSelf->instr)) ^ (IData)(vlSelf->top__DOT____Vtogcov__jal_en))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->top__DOT____Vtogcov__jal_en = (0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->instr));
    }
    if (((0x63U == (0x7fU & vlSelf->instr)) ^ (IData)(vlSelf->top__DOT____Vtogcov__B_type))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->top__DOT____Vtogcov__B_type = (0x63U 
                                               == (0x7fU 
                                                   & vlSelf->instr));
    }
    if (((0x37U == (0x7fU & vlSelf->instr)) ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__lui_en))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__lui_en 
            = (0x37U == (0x7fU & vlSelf->instr));
    }
    if (((0x17U == (0x7fU & vlSelf->instr)) ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__auipc_en))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__auipc_en 
            = (0x17U == (0x7fU & vlSelf->instr));
    }
    vlSelf->ebreak = (IData)(((0x100073U == (0x1f0007fU 
                                             & vlSelf->instr)) 
                              & (0U == (vlSelf->instr 
                                        >> 0x19U))));
    if ((1U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffffeU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (1U 
                                                 & vlSelf->instr));
    }
    if ((2U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffffdU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (2U 
                                                 & vlSelf->instr));
    }
    if ((4U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffffbU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (4U 
                                                 & vlSelf->instr));
    }
    if ((8U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffff7U 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (8U 
                                                 & vlSelf->instr));
    }
    if ((0x10U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffffefU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x10U 
                                                 & vlSelf->instr));
    }
    if ((0x20U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffffdfU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x20U 
                                                 & vlSelf->instr));
    }
    if ((0x40U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffffbfU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x40U 
                                                 & vlSelf->instr));
    }
    if ((0x80U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffff7fU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x80U 
                                                 & vlSelf->instr));
    }
    if ((0x100U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffeffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x100U 
                                                 & vlSelf->instr));
    }
    if ((0x200U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffdffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x200U 
                                                 & vlSelf->instr));
    }
    if ((0x400U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffbffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x400U 
                                                 & vlSelf->instr));
    }
    if ((0x800U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffff7ffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x800U 
                                                 & vlSelf->instr));
    }
    if ((0x1000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffefffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x1000U 
                                                 & vlSelf->instr));
    }
    if ((0x2000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffdfffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x2000U 
                                                 & vlSelf->instr));
    }
    if ((0x4000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffbfffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x4000U 
                                                 & vlSelf->instr));
    }
    if ((0x8000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffff7fffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x8000U 
                                                 & vlSelf->instr));
    }
    if ((0x10000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffeffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x10000U 
                                                 & vlSelf->instr));
    }
    if ((0x20000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffdffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x20000U 
                                                 & vlSelf->instr));
    }
    if ((0x40000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffbffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x40000U 
                                                 & vlSelf->instr));
    }
    if ((0x80000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfff7ffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x80000U 
                                                 & vlSelf->instr));
    }
    if ((0x100000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffefffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x100000U 
                                                 & vlSelf->instr));
    }
    if ((0x200000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffdfffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x200000U 
                                                 & vlSelf->instr));
    }
    if ((0x400000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffbfffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x400000U 
                                                 & vlSelf->instr));
    }
    if ((0x800000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xff7fffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x800000U 
                                                 & vlSelf->instr));
    }
    if ((0x1000000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfeffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x1000000U 
                                                 & vlSelf->instr));
    }
    if ((0x2000000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfdffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x2000000U 
                                                 & vlSelf->instr));
    }
    if ((0x4000000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfbffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x4000000U 
                                                 & vlSelf->instr));
    }
    if ((0x8000000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xf7ffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x8000000U 
                                                 & vlSelf->instr));
    }
    if ((0x10000000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xefffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x10000000U 
                                                 & vlSelf->instr));
    }
    if ((0x20000000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xdfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x20000000U 
                                                 & vlSelf->instr));
    }
    if ((0x40000000U & (vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xbfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x40000000U 
                                                 & vlSelf->instr));
    }
    if (((vlSelf->instr ^ vlSelf->top__DOT____Vtogcov__instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT____Vtogcov__instr = ((0x7fffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x80000000U 
                                                 & vlSelf->instr));
    }
    vlSelf->top__DOT__wb_pc = ((0x6fU == (0x7fU & vlSelf->instr)) 
                               | (0x67U == (0x7fU & vlSelf->instr)));
    vlSelf->top__DOT__pc_en = ((0x17U == (0x7fU & vlSelf->instr)) 
                               | (0x6fU == (0x7fU & vlSelf->instr)));
    vlSelf->top__DOT__rd_data1 = ((0U == (0x1fU & (vlSelf->instr 
                                                   >> 0xfU)))
                                   ? 0ULL : vlSelf->top__DOT__regfile_inst__DOT__gpr
                                  [(0x1fU & (vlSelf->instr 
                                             >> 0xfU))]);
    vlSelf->top__DOT__rd_data2 = ((0U == (0x1fU & (vlSelf->instr 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->top__DOT__regfile_inst__DOT__gpr
                                  [(0x1fU & (vlSelf->instr 
                                             >> 0x14U))]);
    vlSelf->top__DOT__imm_gen_inst__DOT__immI_num = 
        (((- (QData)((IData)((vlSelf->instr >> 0x1fU)))) 
          << 0xbU) | (QData)((IData)((0x7ffU & (vlSelf->instr 
                                                >> 0x14U)))));
    vlSelf->top__DOT__imm_gen_inst__DOT__immS_num = 
        (((- (QData)((IData)((vlSelf->instr >> 0x1fU)))) 
          << 0xbU) | (QData)((IData)(((0x7e0U & (vlSelf->instr 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlSelf->instr 
                                                  >> 7U))))));
    vlSelf->top__DOT__imm_gen_inst__DOT__immB_num = 
        (((- (QData)((IData)((vlSelf->instr >> 0x1fU)))) 
          << 0xcU) | (QData)((IData)(((0x800U & (vlSelf->instr 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSelf->instr 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSelf->instr 
                                             >> 7U)))))));
    vlSelf->top__DOT__imm_gen_inst__DOT__immU_num = 
        (((- (QData)((IData)((vlSelf->instr >> 0x1fU)))) 
          << 0x1fU) | (QData)((IData)((0x7ffff000U 
                                       & vlSelf->instr))));
    vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num = 
        (((- (QData)((IData)((vlSelf->instr >> 0x1fU)))) 
          << 0x14U) | (QData)((IData)(((0xff000U & vlSelf->instr) 
                                       | ((0x800U & 
                                           (vlSelf->instr 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->instr 
                                                >> 0x14U)))))));
    vlSelf->top__DOT__U_type = ((0x37U == (0x7fU & vlSelf->instr)) 
                                | (0x17U == (0x7fU 
                                             & vlSelf->instr)));
    vlSelf->top__DOT__controlor_inst__DOT__mrsop_en 
        = (IData)((0x2000033U == (0x200007fU & vlSelf->instr)));
    vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en 
        = (IData)((0x200003bU == (0x200007fU & vlSelf->instr)));
    vlSelf->top__DOT__controlor_inst__DOT__wrsop_en 
        = (IData)((0x3bU == (0x200007fU & vlSelf->instr)));
    vlSelf->top__DOT__controlor_inst__DOT__rsop_en 
        = (IData)((0x33U == (0x200007fU & vlSelf->instr)));
    vlSelf->top__DOT__controlor_inst__DOT__wimmop_en 
        = ((0x1bU == (0x7fU & vlSelf->instr)) & (1U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->instr 
                                                     >> 0xcU))));
    vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en 
        = (IData)((0x101bU == (0x307fU & vlSelf->instr)));
    vlSelf->top__DOT__controlor_inst__DOT__immop_en 
        = ((0x13U == (0x7fU & vlSelf->instr)) & (1U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->instr 
                                                     >> 0xcU))));
    vlSelf->top__DOT__controlor_inst__DOT__immsf_en 
        = (IData)((0x1013U == (0x307fU & vlSelf->instr)));
    if ((1U & ((IData)(vlSelf->snxt_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__snxt_pc)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->snxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffdULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 2U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffbULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 3U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffff7ULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 4U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffffefULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 5U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffffdfULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 6U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffffbfULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 7U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffff7fULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 8U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffeffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 9U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffdffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xaU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffbffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xbU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffff7ffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xcU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffefffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xdU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffdfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xeU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffbfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xfU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffff7fffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffeffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffdffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffbffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffff7ffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffefffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffdfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffbfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffff7fffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffeffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffdffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffbffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffff7ffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffefffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffdfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffbfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffff7fffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffeffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffdffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffbffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffff7ffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffefffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffdfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffbfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x26U))))) 
                                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffff7fffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x27U))))) 
                                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffeffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x28U))))) 
                                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffdffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x29U))))) 
                                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffbffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2aU))))) 
                                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffff7ffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2bU))))) 
                                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffefffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2cU))))) 
                                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffdfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2dU))))) 
                                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffbfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2eU))))) 
                                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffff7fffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2fU))))) 
                                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffeffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x30U))))) 
                                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffdffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x31U))))) 
                                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffbffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x32U))))) 
                                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfff7ffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x33U))))) 
                                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffefffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x34U))))) 
                                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffdfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x35U))))) 
                                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffbfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x36U))))) 
                                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xff7fffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x37U))))) 
                                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfeffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x38U))))) 
                                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfdffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x39U))))) 
                                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfbffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3aU))))) 
                                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xf7ffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3bU))))) 
                                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xefffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3cU))))) 
                                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xdfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3dU))))) 
                                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xbfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3eU))))) 
                                                   << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
    if (((IData)(vlSelf->ifu_ARVALID) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_ARVALID))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__ifu_ARVALID = vlSelf->ifu_ARVALID;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_nstate) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_nstate)))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_nstate 
            = ((2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_nstate)) 
               | (1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_nstate)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_nstate) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_nstate)))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_nstate 
            = ((1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__cpu_nstate)) 
               | (2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__cpu_nstate)));
    }
    if ((1U & ((IData)(vlSelf->ifu_ARPORT) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_ARPORT)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT____Vtogcov__ifu_ARPORT = (
                                                   (6U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ifu_ARPORT)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ifu_ARPORT)));
    }
    if ((2U & ((IData)(vlSelf->ifu_ARPORT) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_ARPORT)))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT____Vtogcov__ifu_ARPORT = (
                                                   (5U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ifu_ARPORT)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->ifu_ARPORT)));
    }
    if ((4U & ((IData)(vlSelf->ifu_ARPORT) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_ARPORT)))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT____Vtogcov__ifu_ARPORT = (
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT____Vtogcov__ifu_ARPORT)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->ifu_ARPORT)));
    }
    if (((IData)(vlSelf->ebreak) ^ (IData)(vlSelf->top__DOT____Vtogcov__ebreak))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT____Vtogcov__ebreak = vlSelf->ebreak;
    }
    if (((IData)(vlSelf->top__DOT__wb_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_pc))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->top__DOT____Vtogcov__wb_pc = vlSelf->top__DOT__wb_pc;
    }
    if (((IData)(vlSelf->top__DOT__pc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_en))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT____Vtogcov__pc_en = vlSelf->top__DOT__pc_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__rd_data1) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rd_data1)))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__rd_data1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffffffdULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 1U))))) 
                                                    << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffffffbULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 2U))))) 
                                                    << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffffff7ULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 3U))))) 
                                                    << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffffffefULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 4U))))) 
                                                    << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffffffdfULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 5U))))) 
                                                    << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffffffbfULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 6U))))) 
                                                    << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffffff7fULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 7U))))) 
                                                    << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffffeffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 8U))))) 
                                                    << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffffdffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 9U))))) 
                                                    << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffffbffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0xaU))))) 
                                                    << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffff7ffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0xbU))))) 
                                                    << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffffefffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0xcU))))) 
                                                    << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffffdfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0xdU))))) 
                                                    << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffffbfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0xeU))))) 
                                                    << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffff7fffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0xfU))))) 
                                                    << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffeffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x10U))))) 
                                                    << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffdffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x11U))))) 
                                                    << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffbffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x12U))))) 
                                                    << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffff7ffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x13U))))) 
                                                    << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffefffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x14U))))) 
                                                    << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffdfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x15U))))) 
                                                    << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffffbfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x16U))))) 
                                                    << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffff7fffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x17U))))) 
                                                    << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffeffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x18U))))) 
                                                    << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffdffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x19U))))) 
                                                    << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffbffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x1aU))))) 
                                                    << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffff7ffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x1bU))))) 
                                                    << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffefffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x1cU))))) 
                                                    << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffdfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x1dU))))) 
                                                    << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffffbfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x1eU))))) 
                                                    << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffff7fffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x1fU))))) 
                                                    << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffeffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x20U))))) 
                                                    << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffdffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x21U))))) 
                                                    << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffbffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x22U))))) 
                                                    << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffff7ffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x23U))))) 
                                                    << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffefffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x24U))))) 
                                                    << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffdfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x25U))))) 
                                                    << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffffbfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x26U))))) 
                                                    << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffff7fffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x27U))))) 
                                                    << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffeffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x28U))))) 
                                                    << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffdffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x29U))))) 
                                                    << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffbffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x2aU))))) 
                                                    << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffff7ffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x2bU))))) 
                                                    << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffefffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x2cU))))) 
                                                    << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffdfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x2dU))))) 
                                                    << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffffbfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x2eU))))) 
                                                    << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffff7fffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x2fU))))) 
                                                    << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffeffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x30U))))) 
                                                    << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffdffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x31U))))) 
                                                    << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffbffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x32U))))) 
                                                    << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfff7ffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x33U))))) 
                                                    << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffefffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x34U))))) 
                                                    << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffdfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x35U))))) 
                                                    << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xffbfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x36U))))) 
                                                    << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xff7fffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x37U))))) 
                                                    << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfeffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x38U))))) 
                                                    << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfdffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x39U))))) 
                                                    << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfbffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x3aU))))) 
                                                    << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xf7ffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x3bU))))) 
                                                    << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xefffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x3cU))))) 
                                                    << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xdfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x3dU))))) 
                                                    << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xbfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x3eU))))) 
                                                    << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__rd_data2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rd_data2)))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__rd_data2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffffffdULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 1U))))) 
                                                    << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffffffbULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 2U))))) 
                                                    << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffffff7ULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 3U))))) 
                                                    << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffffffefULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 4U))))) 
                                                    << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffffffdfULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 5U))))) 
                                                    << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffffffbfULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 6U))))) 
                                                    << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffffff7fULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 7U))))) 
                                                    << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffffeffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 8U))))) 
                                                    << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffffdffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 9U))))) 
                                                    << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffffbffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0xaU))))) 
                                                    << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffff7ffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0xbU))))) 
                                                    << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffffefffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0xcU))))) 
                                                    << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffffdfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0xdU))))) 
                                                    << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffffbfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0xeU))))) 
                                                    << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffff7fffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0xfU))))) 
                                                    << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffeffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x10U))))) 
                                                    << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffdffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x11U))))) 
                                                    << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffbffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x12U))))) 
                                                    << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffff7ffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x13U))))) 
                                                    << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffefffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x14U))))) 
                                                    << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffdfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x15U))))) 
                                                    << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffffbfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x16U))))) 
                                                    << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffff7fffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x17U))))) 
                                                    << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffeffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x18U))))) 
                                                    << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffdffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x19U))))) 
                                                    << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffbffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x1aU))))) 
                                                    << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffff7ffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x1bU))))) 
                                                    << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffefffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x1cU))))) 
                                                    << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffdfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x1dU))))) 
                                                    << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffffbfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x1eU))))) 
                                                    << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffff7fffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x1fU))))) 
                                                    << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffeffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x20U))))) 
                                                    << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffdffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x21U))))) 
                                                    << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffbffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x22U))))) 
                                                    << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffff7ffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x23U))))) 
                                                    << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffefffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x24U))))) 
                                                    << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffdfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x25U))))) 
                                                    << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffffbfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x26U))))) 
                                                    << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffff7fffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x27U))))) 
                                                    << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffeffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x28U))))) 
                                                    << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffdffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x29U))))) 
                                                    << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffbffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x2aU))))) 
                                                    << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffff7ffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x2bU))))) 
                                                    << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffefffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x2cU))))) 
                                                    << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffdfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x2dU))))) 
                                                    << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffffbfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x2eU))))) 
                                                    << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffff7fffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x2fU))))) 
                                                    << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffeffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x30U))))) 
                                                    << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffdffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x31U))))) 
                                                    << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffbffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x32U))))) 
                                                    << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfff7ffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x33U))))) 
                                                    << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffefffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x34U))))) 
                                                    << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffdfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x35U))))) 
                                                    << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xffbfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x36U))))) 
                                                    << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xff7fffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x37U))))) 
                                                    << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfeffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x38U))))) 
                                                    << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfdffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x39U))))) 
                                                    << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfbffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x3aU))))) 
                                                    << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xf7ffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x3bU))))) 
                                                    << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xefffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x3cU))))) 
                                                    << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xdfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x3dU))))) 
                                                    << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xbfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x3eU))))) 
                                                    << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num)))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num)))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num)))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num)))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num)))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__U_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__U_type))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->top__DOT____Vtogcov__U_type = vlSelf->top__DOT__U_type;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__mlgc_en))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->top__DOT____Vtogcov__mlgc_en = vlSelf->top__DOT__controlor_inst__DOT__mrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__wmlgc_en))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->top__DOT____Vtogcov__wmlgc_en = vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wrsop_en))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wrsop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__rsop_en))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__rsop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__rsop_en;
    }
    vlSelf->top__DOT__controlor_inst__DOT__R_type = 
        ((((IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en) 
           | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en)) 
          | (IData)(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en)) 
         | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en));
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmop_en))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wimmop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmsf_en))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmsf_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en;
    }
    vlSelf->top__DOT__wlgc_en = (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en)) 
                                 | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
    vlSelf->top__DOT__wlgc_op = ((((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en))) 
                                   & (0x10U | (7U & 
                                               (vlSelf->instr 
                                                >> 0xcU)))) 
                                  | ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en))) 
                                     & (0x10U | ((8U 
                                                  & (vlSelf->instr 
                                                     >> 0x1bU)) 
                                                 | (7U 
                                                    & (vlSelf->instr 
                                                       >> 0xcU)))))) 
                                 | ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en))) 
                                    & (0x10U | ((8U 
                                                 & (vlSelf->instr 
                                                    >> 0x1bU)) 
                                                | (7U 
                                                   & (vlSelf->instr 
                                                      >> 0xcU))))));
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immop_en))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__immop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immsf_en))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immsf_en 
            = vlSelf->top__DOT__controlor_inst__DOT__immsf_en;
    }
    vlSelf->top__DOT__wb_alu = ((((((((((0x17U == (0x7fU 
                                                   & vlSelf->instr)) 
                                        | (0x37U == 
                                           (0x7fU & vlSelf->instr))) 
                                       | (IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en)) 
                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                     | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                    | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en)) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en)) 
                                 | (IData)(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en)) 
                                | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en));
    vlSelf->top__DOT__lgc_op = (0xfU & ((((- (IData)(
                                                     (0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->instr)))) 
                                          | ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en))) 
                                             & ((8U 
                                                 & (vlSelf->instr 
                                                    >> 0x1bU)) 
                                                | (7U 
                                                   & (vlSelf->instr 
                                                      >> 0xcU))))) 
                                         | (7U & ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en))) 
                                                  & (vlSelf->instr 
                                                     >> 0xcU)))) 
                                        | ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en))) 
                                           & ((8U & 
                                               (vlSelf->instr 
                                                >> 0x1bU)) 
                                              | (7U 
                                                 & (vlSelf->instr 
                                                    >> 0xcU))))));
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__R_type))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__R_type 
            = vlSelf->top__DOT__controlor_inst__DOT__R_type;
    }
    vlSelf->top__DOT__rs2_en = ((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
                                | (0x63U == (0x7fU 
                                             & vlSelf->instr)));
    if (((IData)(vlSelf->top__DOT__wlgc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_en))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->top__DOT____Vtogcov__wlgc_en = vlSelf->top__DOT__wlgc_en;
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__wlgc_op)))) {
                        ++(vlSymsp->__Vcoverage[1873]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1871]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1873]);
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1869]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1873]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1873]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1873]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1873]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__wlgc_op)))) {
                        ++(vlSymsp->__Vcoverage[1873]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1870]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__wlgc_op)))) {
                        ++(vlSymsp->__Vcoverage[1872]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1873]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__wlgc_op)))) {
                        ++(vlSymsp->__Vcoverage[1868]);
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x1eU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x1dU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (2U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x1bU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (4U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x17U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (8U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__wlgc_op) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0xfU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if (((IData)(vlSelf->top__DOT__wb_alu) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_alu))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->top__DOT____Vtogcov__wb_alu = vlSelf->top__DOT__wb_alu;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1585]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1590]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1591]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1584]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1583]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1593]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1589]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1588]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1593]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1586]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1592]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1593]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1587]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                ++(vlSymsp->__Vcoverage[1593]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1582]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((0xeU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((0xdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((0xbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if (((IData)(vlSelf->top__DOT__rs2_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs2_en))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->top__DOT____Vtogcov__rs2_en = vlSelf->top__DOT__rs2_en;
    }
}
