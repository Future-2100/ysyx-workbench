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

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    // Body
    VL_WRITEF("[%0t] Tracing to build/logs/top.vcd...\n\n",
              64,VL_TIME_UNITED_Q(1),-12);
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x2f746f70U;
    __Vtemp1[2U] = 0x6c6f6773U;
    __Vtemp1[3U] = 0x696c642fU;
    __Vtemp1[4U] = 0x6275U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->ebreak = (IData)((0x100073U == (0x10007fU 
                                            & vlSelf->inst)));
    vlSelf->gpr1 = vlSelf->top__DOT__regfile_inst__DOT__gpr
        [0U];
    vlSelf->top__DOT__rdata1 = ((0U == (0x1fU & (vlSelf->inst 
                                                 >> 0xfU)))
                                 ? 0ULL : ((0x1eU >= 
                                            (0x1fU 
                                             & ((vlSelf->inst 
                                                 >> 0xfU) 
                                                - (IData)(1U))))
                                            ? vlSelf->top__DOT__regfile_inst__DOT__gpr
                                           [(0x1fU 
                                             & ((vlSelf->inst 
                                                 >> 0xfU) 
                                                - (IData)(1U)))]
                                            : 0ULL));
    vlSelf->top__DOT__alu_inst__DOT__opdata2 = ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst))
                                                 ? 
                                                ((- (QData)((IData)(
                                                                    (0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->inst))))) 
                                                 & (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))) 
                                                                        << 0xbU) 
                                                                       | (0x7ffU 
                                                                          & (vlSelf->inst 
                                                                             >> 0x14U)))))))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))
                                                  ? 0ULL
                                                  : 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((vlSelf->inst 
                                                        >> 0x14U) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                  [
                                                  (0x1fU 
                                                   & ((vlSelf->inst 
                                                       >> 0x14U) 
                                                      - (IData)(1U)))]
                                                   : 0ULL)));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rstn = 0;
    vlSelf->pc = 0;
    vlSelf->inst = 0;
    vlSelf->gpr1 = 0;
    vlSelf->ebreak = 0;
    vlSelf->top__DOT__rdata1 = 0;
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->top__DOT__regfile_inst__DOT__gpr[__Vi0] = 0;
    }
    vlSelf->top__DOT__regfile_inst__DOT__i = 0;
    vlSelf->top__DOT__regfile_inst__DOT____Vlvbound1 = 0;
    vlSelf->top__DOT__alu_inst__DOT__opdata2 = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
