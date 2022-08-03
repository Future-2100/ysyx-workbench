// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void vmem_read(long long raddr, long long* rdata, char ren);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__vmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ ren) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__vmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char ren__Vcvt;
    for (size_t ren__Vidx = 0; ren__Vidx < 1; ++ren__Vidx) ren__Vcvt = ren;
    vmem_read(raddr__Vcvt, &rdata__Vcvt, ren__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void vmem_write(long long waddr, long long wdata, char wlen, char wen);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__vmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen, CData/*7:0*/ wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__vmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wlen__Vcvt;
    for (size_t wlen__Vidx = 0; wlen__Vidx < 1; ++wlen__Vidx) wlen__Vcvt = wlen;
    char wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    vmem_write(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt, wen__Vcvt);
}

void Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP\n"); );
    // Variables
    // Body
    VL_FINISH_MT("/home/grand/ysyx-workbench/npc/vsrc/top.v", 309, "");
    ++(vlSymsp->__Vcoverage[932]);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[1065]);
    ++(vlSymsp->__Vcoverage[2336]);
    ++(vlSymsp->__Vcoverage[2345]);
    ++(vlSymsp->__Vcoverage[2355]);
    ++(vlSymsp->__Vcoverage[2373]);
    ++(vlSymsp->__Vcoverage[2383]);
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1064]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2335]);
    }
    if (vlSelf->rstn) {
        ++(vlSymsp->__Vcoverage[2344]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2343]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2354]);
    }
    if (vlSelf->rstn) {
        ++(vlSymsp->__Vcoverage[2372]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2371]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[2382]);
    }
    if (vlSelf->rstn) {
        if ((4U == (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next))) {
            ++(vlSymsp->__Vcoverage[2380]);
        }
    }
    if (vlSelf->rstn) {
        if ((4U != (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next))) {
            ++(vlSymsp->__Vcoverage[2381]);
        }
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__instr_en) {
            ++(vlSymsp->__Vcoverage[2333]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__instr_en)))) {
            ++(vlSymsp->__Vcoverage[2334]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
            ++(vlSymsp->__Vcoverage[2352]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U != (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
            ++(vlSymsp->__Vcoverage[2353]);
        }
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__pc_ld) {
            ++(vlSymsp->__Vcoverage[1062]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__pc_ld)))) {
            ++(vlSymsp->__Vcoverage[1063]);
        }
    }
    vlSelf->top__DOT__ifu_inst__DOT__state_now = ((IData)(vlSelf->rstn)
                                                   ? (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next)
                                                   : 0U);
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__pc_ld) {
            vlSelf->pc = vlSelf->dnxt_pc;
        }
    } else {
        vlSelf->pc = 0x7ffffffcULL;
    }
    vlSelf->instr = ((IData)(vlSelf->rstn) ? ((IData)(vlSelf->top__DOT__instr_en)
                                               ? vlSelf->top__DOT__instr_in
                                               : 0U)
                      : 0U);
    if ((4U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
        if ((2U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
            ++(vlSymsp->__Vcoverage[2378]);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now)))) {
                ++(vlSymsp->__Vcoverage[2374]);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now)))) {
                ++(vlSymsp->__Vcoverage[2377]);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
                ++(vlSymsp->__Vcoverage[2378]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
            if ((1U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
                ++(vlSymsp->__Vcoverage[2378]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now)))) {
                ++(vlSymsp->__Vcoverage[2376]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
                ++(vlSymsp->__Vcoverage[2375]);
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
               ^ (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_now)))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_now 
            = ((6U & (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_now)) 
               | (1U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
               ^ (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_now)))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_now 
            = ((5U & (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_now)) 
               | (2U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
               ^ (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_now)))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_now 
            = ((3U & (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_now)) 
               | (4U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now)));
    }
    vlSelf->ifu_RREADY = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now)))) {
                vlSelf->ifu_RREADY = 1U;
            }
        }
    }
    vlSelf->ifu_ARVALID = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
                vlSelf->ifu_ARVALID = 1U;
            }
        }
    }
    vlSelf->ifu_ARPORT = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))) {
                vlSelf->ifu_ARPORT = 4U;
            }
        }
    }
    vlSelf->top__DOT__pc_ld = ((IData)(vlSelf->rstn) 
                               & (1U == (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now)));
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
    vlSelf->top__DOT__instr_en = ((IData)(vlSelf->rstn) 
                                  & (4U == (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next)));
    vlSelf->top__DOT__instr_in = ((IData)(vlSelf->rstn)
                                   ? ((4U == (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next))
                                       ? (IData)(vlSelf->ifu_RDATA)
                                       : 0U) : 0U);
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((0x2000U & vlSelf->instr)) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1855]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((0x2000U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1854]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1858]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1859]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1856]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1857]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1853]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1852]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((0x2000U & vlSelf->instr)) {
            ++(vlSymsp->__Vcoverage[1899]);
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1898]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1895]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1896]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1897]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1899]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1894]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((0x2000U & vlSelf->instr)) {
            ++(vlSymsp->__Vcoverage[1947]);
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1942]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1945]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1946]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1943]);
            }
        }
    }
    if ((0x4000U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((0x1000U & vlSelf->instr)) {
                ++(vlSymsp->__Vcoverage[1944]);
            }
        }
    }
    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
        if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
            if ((1U & (~ (vlSelf->instr >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1941]);
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
    if (((3U == (0x7fU & vlSelf->instr)) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_load))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->top__DOT____Vtogcov__wb_load = (3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->instr));
    }
    if (((0x23U == (0x7fU & vlSelf->instr)) ^ (IData)(vlSelf->top__DOT____Vtogcov__S_type))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->top__DOT____Vtogcov__S_type = (0x23U 
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
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__lui_en 
            = (0x37U == (0x7fU & vlSelf->instr));
    }
    if (((0x17U == (0x7fU & vlSelf->instr)) ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__auipc_en))) {
        ++(vlSymsp->__Vcoverage[2357]);
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
    vlSelf->top__DOT__lb = (IData)((3U == (0x707fU 
                                           & vlSelf->instr)));
    vlSelf->top__DOT__lh = (IData)((0x1003U == (0x707fU 
                                                & vlSelf->instr)));
    vlSelf->top__DOT__lw = (IData)((0x2003U == (0x707fU 
                                                & vlSelf->instr)));
    vlSelf->top__DOT__ld = (IData)((0x3003U == (0x707fU 
                                                & vlSelf->instr)));
    vlSelf->top__DOT__lbu = (IData)((0x4003U == (0x707fU 
                                                 & vlSelf->instr)));
    vlSelf->top__DOT__lhu = (IData)((0x5003U == (0x707fU 
                                                 & vlSelf->instr)));
    vlSelf->top__DOT__lwu = (IData)((0x6003U == (0x707fU 
                                                 & vlSelf->instr)));
    vlSelf->top__DOT__sb = (IData)((0x23U == (0x707fU 
                                              & vlSelf->instr)));
    vlSelf->top__DOT__sh = (IData)((0x1023U == (0x707fU 
                                                & vlSelf->instr)));
    vlSelf->top__DOT__sw = (IData)((0x2023U == (0x707fU 
                                                & vlSelf->instr)));
    vlSelf->top__DOT__sd = (IData)((0x3023U == (0x707fU 
                                                & vlSelf->instr)));
    vlSelf->top__DOT__pc_en = ((0x17U == (0x7fU & vlSelf->instr)) 
                               | (0x6fU == (0x7fU & vlSelf->instr)));
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
    if (((IData)(vlSelf->ifu_RREADY) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_RREADY))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT____Vtogcov__ifu_RREADY = vlSelf->ifu_RREADY;
    }
    if (((IData)(vlSelf->ifu_ARVALID) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_ARVALID))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__ifu_ARVALID = vlSelf->ifu_ARVALID;
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
    if (((IData)(vlSelf->ebreak) ^ (IData)(vlSelf->top__DOT____Vtogcov__ebreak))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT____Vtogcov__ebreak = vlSelf->ebreak;
    }
    if (((IData)(vlSelf->top__DOT__wb_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_pc))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->top__DOT____Vtogcov__wb_pc = vlSelf->top__DOT__wb_pc;
    }
    if (((IData)(vlSelf->top__DOT__lb) ^ (IData)(vlSelf->top__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->top__DOT____Vtogcov__lb = vlSelf->top__DOT__lb;
    }
    if (((IData)(vlSelf->top__DOT__lh) ^ (IData)(vlSelf->top__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->top__DOT____Vtogcov__lh = vlSelf->top__DOT__lh;
    }
    if (((IData)(vlSelf->top__DOT__lw) ^ (IData)(vlSelf->top__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->top__DOT____Vtogcov__lw = vlSelf->top__DOT__lw;
    }
    if (((IData)(vlSelf->top__DOT__ld) ^ (IData)(vlSelf->top__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->top__DOT____Vtogcov__ld = vlSelf->top__DOT__ld;
    }
    if (((IData)(vlSelf->top__DOT__lbu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->top__DOT____Vtogcov__lbu = vlSelf->top__DOT__lbu;
    }
    if (((IData)(vlSelf->top__DOT__lhu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->top__DOT____Vtogcov__lhu = vlSelf->top__DOT__lhu;
    }
    if (((IData)(vlSelf->top__DOT__lwu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->top__DOT____Vtogcov__lwu = vlSelf->top__DOT__lwu;
    }
    vlSelf->top__DOT__ren = (((((((IData)(vlSelf->top__DOT__lb) 
                                  | (IData)(vlSelf->top__DOT__lh)) 
                                 | (IData)(vlSelf->top__DOT__lw)) 
                                | (IData)(vlSelf->top__DOT__ld)) 
                               | (IData)(vlSelf->top__DOT__lbu)) 
                              | (IData)(vlSelf->top__DOT__lhu)) 
                             | (IData)(vlSelf->top__DOT__lwu));
    if (((IData)(vlSelf->top__DOT__sb) ^ (IData)(vlSelf->top__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->top__DOT____Vtogcov__sb = vlSelf->top__DOT__sb;
    }
    if (((IData)(vlSelf->top__DOT__sh) ^ (IData)(vlSelf->top__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->top__DOT____Vtogcov__sh = vlSelf->top__DOT__sh;
    }
    if (((IData)(vlSelf->top__DOT__sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->top__DOT____Vtogcov__sw = vlSelf->top__DOT__sw;
    }
    if (((IData)(vlSelf->top__DOT__sd) ^ (IData)(vlSelf->top__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->top__DOT____Vtogcov__sd = vlSelf->top__DOT__sd;
    }
    vlSelf->top__DOT__wlen = ((((1U & (- (IData)((IData)(vlSelf->top__DOT__sb)))) 
                                | (2U & (- (IData)((IData)(vlSelf->top__DOT__sh))))) 
                               | (4U & (- (IData)((IData)(vlSelf->top__DOT__sw))))) 
                              | (8U & (- (IData)((IData)(vlSelf->top__DOT__sd)))));
    if (((IData)(vlSelf->top__DOT__pc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_en))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT____Vtogcov__pc_en = vlSelf->top__DOT__pc_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num)))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num)))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num)))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num)))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1432]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1454]);
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
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wrsop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__rsop_en))) {
        ++(vlSymsp->__Vcoverage[2362]);
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
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wimmop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmsf_en))) {
        ++(vlSymsp->__Vcoverage[2361]);
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
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__immop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immsf_en))) {
        ++(vlSymsp->__Vcoverage[2359]);
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
    vlSelf->top__DOT__lgc_en = (((((((((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en) 
                                       | (IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en)) 
                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->instr))) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->instr))) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->instr))) 
                                 | (3U == (0x7fU & vlSelf->instr))) 
                                | (0x23U == (0x7fU 
                                             & vlSelf->instr)));
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
    vlSelf->top__DOT__I_type = ((((((0x67U == (0x7fU 
                                               & vlSelf->instr)) 
                                    | (3U == (0x7fU 
                                              & vlSelf->instr))) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                 | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
    if (((IData)(vlSelf->top__DOT__pc_ld) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_ld))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT____Vtogcov__pc_ld = vlSelf->top__DOT__pc_ld;
    }
    vlSelf->top__DOT__controlor_inst__DOT__state_now 
        = ((IData)(vlSelf->rstn) ? (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_next)
            : 0U);
    if (((IData)(vlSelf->top__DOT__instr_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__instr_en))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->top__DOT____Vtogcov__instr_en = vlSelf->top__DOT__instr_en;
    }
    if ((1U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffffffeU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (1U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((2U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffffffdU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (2U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((4U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffffffbU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (4U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((8U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffffff7U 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (8U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x10U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffffffefU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x10U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x20U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffffffdfU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x20U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x40U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffffffbfU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x40U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x80U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffffff7fU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x80U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x100U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffffeffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x100U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x200U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffffdffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x200U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x400U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffffbffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x400U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x800U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffff7ffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x800U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x1000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffffefffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x1000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x2000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffffdfffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x2000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x4000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffffbfffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x4000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x8000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffff7fffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x8000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x10000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffeffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x10000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x20000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffdffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x20000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x40000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfffbffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x40000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x80000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfff7ffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x80000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x100000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffefffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x100000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x200000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffdfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x200000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x400000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xffbfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x400000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x800000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xff7fffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x800000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x1000000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfeffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x1000000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x2000000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfdffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x2000000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x4000000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xfbffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x4000000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x8000000U & (vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xf7ffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x8000000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x10000000U & (vlSelf->top__DOT__instr_in 
                        ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xefffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x10000000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x20000000U & (vlSelf->top__DOT__instr_in 
                        ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xdfffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x20000000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if ((0x40000000U & (vlSelf->top__DOT__instr_in 
                        ^ vlSelf->top__DOT____Vtogcov__instr_in))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0xbfffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x40000000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if (((vlSelf->top__DOT__instr_in ^ vlSelf->top__DOT____Vtogcov__instr_in) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->top__DOT____Vtogcov__instr_in = ((0x7fffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__instr_in) 
                                                 | (0x80000000U 
                                                    & vlSelf->top__DOT__instr_in));
    }
    if (((IData)(vlSelf->top__DOT__ren) ^ (IData)(vlSelf->top__DOT____Vtogcov__ren))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->top__DOT____Vtogcov__ren = vlSelf->top__DOT__ren;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (1U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (2U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (4U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->top__DOT____Vtogcov__wlen = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (8U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__R_type))) {
        ++(vlSymsp->__Vcoverage[2364]);
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
                        ++(vlSymsp->__Vcoverage[1938]);
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
                        ++(vlSymsp->__Vcoverage[1936]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1938]);
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1934]);
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
                        ++(vlSymsp->__Vcoverage[1938]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1938]);
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
                    ++(vlSymsp->__Vcoverage[1938]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1938]);
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
                        ++(vlSymsp->__Vcoverage[1938]);
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
                        ++(vlSymsp->__Vcoverage[1935]);
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
                        ++(vlSymsp->__Vcoverage[1937]);
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
                    ++(vlSymsp->__Vcoverage[1938]);
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
                        ++(vlSymsp->__Vcoverage[1933]);
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
    vlSelf->top__DOT__wb_en = (((3U == (0x7fU & vlSelf->instr)) 
                                | (IData)(vlSelf->top__DOT__wb_pc)) 
                               | (IData)(vlSelf->top__DOT__wb_alu));
    if (((IData)(vlSelf->top__DOT__lgc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_en))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->top__DOT____Vtogcov__lgc_en = vlSelf->top__DOT__lgc_en;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1650]);
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
                    ++(vlSymsp->__Vcoverage[1655]);
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
                    ++(vlSymsp->__Vcoverage[1656]);
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
                    ++(vlSymsp->__Vcoverage[1649]);
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
                    ++(vlSymsp->__Vcoverage[1648]);
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
                    ++(vlSymsp->__Vcoverage[1658]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1654]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1653]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1658]);
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
                    ++(vlSymsp->__Vcoverage[1651]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1657]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1658]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1652]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                ++(vlSymsp->__Vcoverage[1658]);
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
                    ++(vlSymsp->__Vcoverage[1647]);
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
    if (((IData)(vlSelf->top__DOT__I_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__I_type))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->top__DOT____Vtogcov__I_type = vlSelf->top__DOT__I_type;
    }
    vlSelf->top__DOT__rs1_en = ((((IData)(vlSelf->top__DOT__I_type) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type)) 
                                 | (0x23U == (0x7fU 
                                              & vlSelf->instr))) 
                                | (0x63U == (0x7fU 
                                             & vlSelf->instr)));
    vlSelf->top__DOT__imm_en = ((((IData)(vlSelf->top__DOT__I_type) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->instr))) 
                                 | (IData)(vlSelf->top__DOT__U_type)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->instr)));
    vlSelf->top__DOT__imm = ((((((- (QData)((IData)(vlSelf->top__DOT__I_type))) 
                                 & vlSelf->top__DOT__imm_gen_inst__DOT__immI_num) 
                                | ((- (QData)((IData)(
                                                      (0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->instr))))) 
                                   & vlSelf->top__DOT__imm_gen_inst__DOT__immS_num)) 
                               | ((- (QData)((IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->instr))))) 
                                  & vlSelf->top__DOT__imm_gen_inst__DOT__immB_num)) 
                              | ((- (QData)((IData)(vlSelf->top__DOT__U_type))) 
                                 & vlSelf->top__DOT__imm_gen_inst__DOT__immU_num)) 
                             | ((- (QData)((IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->instr))))) 
                                & vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num));
    if (((IData)(vlSelf->top__DOT__rs2_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs2_en))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->top__DOT____Vtogcov__rs2_en = vlSelf->top__DOT__rs2_en;
    }
    if (((IData)(vlSelf->top__DOT__wb_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_en))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->top__DOT____Vtogcov__wb_en = vlSelf->top__DOT__wb_en;
    }
    if (((IData)(vlSelf->top__DOT__rs1_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs1_en))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->top__DOT____Vtogcov__rs1_en = vlSelf->top__DOT__rs1_en;
    }
    if (((IData)(vlSelf->top__DOT__imm_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_en))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->top__DOT____Vtogcov__imm_en = vlSelf->top__DOT__imm_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffffeULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (IData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->top__DOT__imm)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffffdULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 1U))))) 
                                               << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffffbULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 2U))))) 
                                               << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffff7ULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 3U))))) 
                                               << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffffefULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 4U))))) 
                                               << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffffdfULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 5U))))) 
                                               << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffffbfULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 6U))))) 
                                               << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffff7fULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 7U))))) 
                                               << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffeffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 8U))))) 
                                               << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffdffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 9U))))) 
                                               << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffbffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xaU))))) 
                                               << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffff7ffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xbU))))) 
                                               << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffefffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xcU))))) 
                                               << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffdfffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xdU))))) 
                                               << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffbfffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xeU))))) 
                                               << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffff7fffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xfU))))) 
                                               << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffeffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x10U))))) 
                                               << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffdffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x11U))))) 
                                               << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffbffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x12U))))) 
                                               << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffff7ffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x13U))))) 
                                               << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffefffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x14U))))) 
                                               << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffdfffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x15U))))) 
                                               << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffbfffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x16U))))) 
                                               << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffff7fffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x17U))))) 
                                               << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffeffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x18U))))) 
                                               << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffdffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x19U))))) 
                                               << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffbffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1aU))))) 
                                               << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffff7ffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1bU))))) 
                                               << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffefffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1cU))))) 
                                               << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffdfffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1dU))))) 
                                               << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffbfffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1eU))))) 
                                               << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffff7fffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1fU))))) 
                                               << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffeffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x20U))))) 
                                               << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffdffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x21U))))) 
                                               << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffbffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x22U))))) 
                                               << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffff7ffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x23U))))) 
                                               << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffefffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x24U))))) 
                                               << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffdfffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x25U))))) 
                                               << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffbfffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x26U))))) 
                                               << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffff7fffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x27U))))) 
                                               << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffeffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x28U))))) 
                                               << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffdffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x29U))))) 
                                               << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffbffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2aU))))) 
                                               << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffff7ffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2bU))))) 
                                               << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffefffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2cU))))) 
                                               << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffdfffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2dU))))) 
                                               << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffbfffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2eU))))) 
                                               << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffff7fffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2fU))))) 
                                               << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffeffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x30U))))) 
                                               << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffdffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x31U))))) 
                                               << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffbffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x32U))))) 
                                               << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfff7ffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x33U))))) 
                                               << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffefffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x34U))))) 
                                               << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffdfffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x35U))))) 
                                               << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffbfffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x36U))))) 
                                               << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xff7fffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x37U))))) 
                                               << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfeffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x38U))))) 
                                               << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfdffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x39U))))) 
                                               << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfbffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3aU))))) 
                                               << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xf7ffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3bU))))) 
                                               << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xefffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3cU))))) 
                                               << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xdfffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3dU))))) 
                                               << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xbfffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3eU))))) 
                                               << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->top__DOT____Vtogcov__imm = ((0x7fffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3fU))))) 
                                               << 0x3fU));
    }
    vlSelf->top__DOT__pc_gen_inst__DOT__br_pc = (vlSelf->pc 
                                                 + vlSelf->top__DOT__imm);
    if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now)))) {
                ++(vlSymsp->__Vcoverage[2348]);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
                ++(vlSymsp->__Vcoverage[2350]);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
        if ((2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
            ++(vlSymsp->__Vcoverage[2350]);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
            if ((1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
                ++(vlSymsp->__Vcoverage[2350]);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now)))) {
                ++(vlSymsp->__Vcoverage[2349]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
                ++(vlSymsp->__Vcoverage[2347]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now)))) {
                ++(vlSymsp->__Vcoverage[2346]);
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_now)))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_now 
            = ((6U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_now)) 
               | (1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_now)))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_now 
            = ((5U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_now)) 
               | (2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_now)))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_now 
            = ((3U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_now)) 
               | (4U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now)));
    }
    vlSelf->top__DOT__controlor_inst__DOT__state_next 
        = ((4U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))
            ? ((2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))
                ? 0U : ((1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))
                         ? 0U : 1U)) : ((2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))
                                         ? ((1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))
                                             ? 0U : 
                                            ((IData)(vlSelf->top__DOT__instr_en)
                                              ? 4U : 2U))
                                         : ((1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))
                                             ? 2U : 1U)));
    vlSelf->top__DOT__fetch_en = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_now))) {
                vlSelf->top__DOT__fetch_en = 1U;
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__pc_gen_inst__DOT__br_pc) 
               ^ (IData)(vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc)))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__pc_gen_inst__DOT__br_pc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_next)))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_next 
            = ((6U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_next)))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_next 
            = ((5U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_next)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__controlor_inst__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_next)))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_next 
            = ((3U & (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__state_next)) 
               | (4U & (IData)(vlSelf->top__DOT__controlor_inst__DOT__state_next)));
    }
    if (((IData)(vlSelf->top__DOT__fetch_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__fetch_en))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->top__DOT____Vtogcov__fetch_en = vlSelf->top__DOT__fetch_en;
    }
}
