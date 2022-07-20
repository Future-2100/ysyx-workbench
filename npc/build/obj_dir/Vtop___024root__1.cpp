// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0;
    // Body
    ++(vlSymsp->__Vcoverage[987]);
    ++(vlSymsp->__Vcoverage[1056]);
    if (vlSelf->rstn) {
        ++(vlSymsp->__Vcoverage[986]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[985]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1055]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1052]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->top__DOT__regfile_inst__DOT__i = 0x20U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__wb_en) {
            ++(vlSymsp->__Vcoverage[1053]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__wb_en)))) {
            ++(vlSymsp->__Vcoverage[1054]);
        }
    }
    __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0 = 0U;
    __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rstn) ? vlSelf->dnxt_pc
                   : 0x80000000ULL);
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__wb_en) {
            __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0 
                = vlSelf->top__DOT__regfile_inst__DOT__wb_data;
            __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0 = 1U;
            __Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0 
                = (0x1fU & (vlSelf->inst >> 7U));
        }
    } else {
        __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1 = 1U;
    }
    if (__Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0) {
        vlSelf->top__DOT__regfile_inst__DOT__gpr[__Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0] 
            = __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0;
    }
    if (__Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1) {
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[1U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[2U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[3U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[4U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[5U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[6U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[7U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[8U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[9U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xaU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xbU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xcU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xdU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xeU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xfU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x10U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x11U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x12U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x13U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x14U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x15U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x16U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x17U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x18U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x19U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1aU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1bU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1cU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1dU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1eU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1fU] = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffeULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (IData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->pc)))));
    }
    if ((1U & ((IData)((vlSelf->pc >> 1U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 1U))))) {
        ++(vlSymsp->__Vcoverage[196]);
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
        ++(vlSymsp->__Vcoverage[197]);
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
        ++(vlSymsp->__Vcoverage[198]);
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
        ++(vlSymsp->__Vcoverage[199]);
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
        ++(vlSymsp->__Vcoverage[200]);
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
        ++(vlSymsp->__Vcoverage[201]);
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
        ++(vlSymsp->__Vcoverage[202]);
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
        ++(vlSymsp->__Vcoverage[203]);
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
        ++(vlSymsp->__Vcoverage[204]);
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
        ++(vlSymsp->__Vcoverage[205]);
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
        ++(vlSymsp->__Vcoverage[206]);
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
        ++(vlSymsp->__Vcoverage[207]);
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
        ++(vlSymsp->__Vcoverage[208]);
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
        ++(vlSymsp->__Vcoverage[209]);
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
        ++(vlSymsp->__Vcoverage[210]);
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
        ++(vlSymsp->__Vcoverage[211]);
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
        ++(vlSymsp->__Vcoverage[212]);
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
        ++(vlSymsp->__Vcoverage[213]);
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
        ++(vlSymsp->__Vcoverage[214]);
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
        ++(vlSymsp->__Vcoverage[215]);
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
        ++(vlSymsp->__Vcoverage[216]);
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
        ++(vlSymsp->__Vcoverage[217]);
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
        ++(vlSymsp->__Vcoverage[218]);
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
        ++(vlSymsp->__Vcoverage[219]);
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
        ++(vlSymsp->__Vcoverage[220]);
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
        ++(vlSymsp->__Vcoverage[221]);
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
        ++(vlSymsp->__Vcoverage[222]);
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
        ++(vlSymsp->__Vcoverage[223]);
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
        ++(vlSymsp->__Vcoverage[224]);
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
        ++(vlSymsp->__Vcoverage[225]);
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
        ++(vlSymsp->__Vcoverage[226]);
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
        ++(vlSymsp->__Vcoverage[227]);
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
        ++(vlSymsp->__Vcoverage[228]);
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
        ++(vlSymsp->__Vcoverage[229]);
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
        ++(vlSymsp->__Vcoverage[230]);
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
        ++(vlSymsp->__Vcoverage[231]);
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
        ++(vlSymsp->__Vcoverage[232]);
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
        ++(vlSymsp->__Vcoverage[233]);
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
        ++(vlSymsp->__Vcoverage[234]);
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
        ++(vlSymsp->__Vcoverage[235]);
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
        ++(vlSymsp->__Vcoverage[236]);
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
        ++(vlSymsp->__Vcoverage[237]);
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
        ++(vlSymsp->__Vcoverage[238]);
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
        ++(vlSymsp->__Vcoverage[239]);
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
        ++(vlSymsp->__Vcoverage[240]);
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
        ++(vlSymsp->__Vcoverage[241]);
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
        ++(vlSymsp->__Vcoverage[242]);
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
        ++(vlSymsp->__Vcoverage[243]);
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
        ++(vlSymsp->__Vcoverage[244]);
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
        ++(vlSymsp->__Vcoverage[245]);
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
        ++(vlSymsp->__Vcoverage[246]);
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
        ++(vlSymsp->__Vcoverage[247]);
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
        ++(vlSymsp->__Vcoverage[248]);
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
        ++(vlSymsp->__Vcoverage[249]);
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
        ++(vlSymsp->__Vcoverage[250]);
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
        ++(vlSymsp->__Vcoverage[251]);
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
        ++(vlSymsp->__Vcoverage[252]);
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
        ++(vlSymsp->__Vcoverage[253]);
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
        ++(vlSymsp->__Vcoverage[254]);
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
        ++(vlSymsp->__Vcoverage[255]);
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
        ++(vlSymsp->__Vcoverage[256]);
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
        ++(vlSymsp->__Vcoverage[257]);
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
        ++(vlSymsp->__Vcoverage[258]);
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
    vlSelf->a = vlSelf->top__DOT__regfile_inst__DOT__gpr
        [0xaU];
    if ((1U & ((IData)(vlSelf->snxt_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__snxt_pc)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->snxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[132]);
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
        ++(vlSymsp->__Vcoverage[133]);
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
        ++(vlSymsp->__Vcoverage[134]);
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
        ++(vlSymsp->__Vcoverage[135]);
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
        ++(vlSymsp->__Vcoverage[136]);
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
        ++(vlSymsp->__Vcoverage[137]);
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
        ++(vlSymsp->__Vcoverage[138]);
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
        ++(vlSymsp->__Vcoverage[139]);
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
        ++(vlSymsp->__Vcoverage[140]);
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
        ++(vlSymsp->__Vcoverage[141]);
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
        ++(vlSymsp->__Vcoverage[142]);
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
        ++(vlSymsp->__Vcoverage[143]);
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
        ++(vlSymsp->__Vcoverage[144]);
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
        ++(vlSymsp->__Vcoverage[145]);
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
        ++(vlSymsp->__Vcoverage[146]);
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
        ++(vlSymsp->__Vcoverage[147]);
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
        ++(vlSymsp->__Vcoverage[148]);
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
        ++(vlSymsp->__Vcoverage[149]);
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
        ++(vlSymsp->__Vcoverage[150]);
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
        ++(vlSymsp->__Vcoverage[151]);
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
        ++(vlSymsp->__Vcoverage[152]);
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
        ++(vlSymsp->__Vcoverage[153]);
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
        ++(vlSymsp->__Vcoverage[154]);
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
        ++(vlSymsp->__Vcoverage[155]);
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
        ++(vlSymsp->__Vcoverage[156]);
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
        ++(vlSymsp->__Vcoverage[157]);
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
        ++(vlSymsp->__Vcoverage[158]);
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
        ++(vlSymsp->__Vcoverage[159]);
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
        ++(vlSymsp->__Vcoverage[160]);
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
        ++(vlSymsp->__Vcoverage[161]);
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
        ++(vlSymsp->__Vcoverage[162]);
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
        ++(vlSymsp->__Vcoverage[163]);
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
        ++(vlSymsp->__Vcoverage[164]);
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
        ++(vlSymsp->__Vcoverage[165]);
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
        ++(vlSymsp->__Vcoverage[166]);
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
        ++(vlSymsp->__Vcoverage[167]);
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
        ++(vlSymsp->__Vcoverage[168]);
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
        ++(vlSymsp->__Vcoverage[169]);
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
        ++(vlSymsp->__Vcoverage[170]);
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
        ++(vlSymsp->__Vcoverage[171]);
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
        ++(vlSymsp->__Vcoverage[172]);
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
        ++(vlSymsp->__Vcoverage[173]);
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
        ++(vlSymsp->__Vcoverage[174]);
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
        ++(vlSymsp->__Vcoverage[175]);
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
        ++(vlSymsp->__Vcoverage[176]);
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
        ++(vlSymsp->__Vcoverage[177]);
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
        ++(vlSymsp->__Vcoverage[178]);
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
        ++(vlSymsp->__Vcoverage[179]);
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
        ++(vlSymsp->__Vcoverage[180]);
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
        ++(vlSymsp->__Vcoverage[181]);
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
        ++(vlSymsp->__Vcoverage[182]);
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
        ++(vlSymsp->__Vcoverage[183]);
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
        ++(vlSymsp->__Vcoverage[184]);
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
        ++(vlSymsp->__Vcoverage[185]);
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
        ++(vlSymsp->__Vcoverage[186]);
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
        ++(vlSymsp->__Vcoverage[187]);
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
        ++(vlSymsp->__Vcoverage[188]);
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
        ++(vlSymsp->__Vcoverage[189]);
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
        ++(vlSymsp->__Vcoverage[190]);
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
        ++(vlSymsp->__Vcoverage[191]);
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
        ++(vlSymsp->__Vcoverage[192]);
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
        ++(vlSymsp->__Vcoverage[193]);
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
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffffeULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (IData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->a)))));
    }
    if ((1U & ((IData)((vlSelf->a >> 1U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffffdULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 1U))))) 
                                             << 1U));
    }
    if ((1U & ((IData)((vlSelf->a >> 2U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffffbULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 2U))))) 
                                             << 2U));
    }
    if ((1U & ((IData)((vlSelf->a >> 3U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffff7ULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 3U))))) 
                                             << 3U));
    }
    if ((1U & ((IData)((vlSelf->a >> 4U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffffefULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 4U))))) 
                                             << 4U));
    }
    if ((1U & ((IData)((vlSelf->a >> 5U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffffdfULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 5U))))) 
                                             << 5U));
    }
    if ((1U & ((IData)((vlSelf->a >> 6U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffffbfULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 6U))))) 
                                             << 6U));
    }
    if ((1U & ((IData)((vlSelf->a >> 7U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 7U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffff7fULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 7U))))) 
                                             << 7U));
    }
    if ((1U & ((IData)((vlSelf->a >> 8U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 8U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffeffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 8U))))) 
                                             << 8U));
    }
    if ((1U & ((IData)((vlSelf->a >> 9U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffdffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 9U))))) 
                                             << 9U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xaU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffbffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xaU))))) 
                                             << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xbU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffff7ffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xbU))))) 
                                             << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xcU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffefffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xcU))))) 
                                             << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xdU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffdfffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xdU))))) 
                                             << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xeU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffbfffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xeU))))) 
                                             << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xfU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffff7fffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xfU))))) 
                                             << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x10U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffeffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x10U))))) 
                                             << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x11U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffdffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x11U))))) 
                                             << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x12U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffbffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x12U))))) 
                                             << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x13U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffff7ffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x13U))))) 
                                             << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x14U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffefffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x14U))))) 
                                             << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x15U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffdfffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x15U))))) 
                                             << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x16U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffbfffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x16U))))) 
                                             << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x17U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffff7fffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x17U))))) 
                                             << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x18U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffeffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x18U))))) 
                                             << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x19U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffdffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x19U))))) 
                                             << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1aU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffbffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1aU))))) 
                                             << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1bU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffff7ffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1bU))))) 
                                             << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1cU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffefffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1cU))))) 
                                             << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1dU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffdfffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1dU))))) 
                                             << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1eU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffbfffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1eU))))) 
                                             << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1fU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffff7fffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1fU))))) 
                                             << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x20U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffeffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x20U))))) 
                                             << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x21U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffdffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x21U))))) 
                                             << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x22U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffbffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x22U))))) 
                                             << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x23U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffff7ffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x23U))))) 
                                             << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x24U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffefffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x24U))))) 
                                             << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x25U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffdfffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x25U))))) 
                                             << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x26U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffbfffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x26U))))) 
                                             << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x27U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffff7fffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x27U))))) 
                                             << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x28U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffeffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x28U))))) 
                                             << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x29U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffdffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x29U))))) 
                                             << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2aU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffbffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2aU))))) 
                                             << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2bU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffff7ffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2bU))))) 
                                             << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2cU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffefffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2cU))))) 
                                             << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2dU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffdfffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2dU))))) 
                                             << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2eU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffbfffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2eU))))) 
                                             << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2fU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffff7fffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2fU))))) 
                                             << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x30U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffeffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x30U))))) 
                                             << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x31U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffdffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x31U))))) 
                                             << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x32U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffbffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x32U))))) 
                                             << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x33U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfff7ffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x33U))))) 
                                             << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x34U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffefffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x34U))))) 
                                             << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x35U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffdfffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x35U))))) 
                                             << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x36U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffbfffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x36U))))) 
                                             << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x37U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__a = ((0xff7fffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x37U))))) 
                                             << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x38U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfeffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x38U))))) 
                                             << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x39U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfdffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x39U))))) 
                                             << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3aU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfbffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3aU))))) 
                                             << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3bU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__a = ((0xf7ffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3bU))))) 
                                             << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3cU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__a = ((0xefffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3cU))))) 
                                             << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3dU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__a = ((0xdfffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3dU))))) 
                                             << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3eU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__a = ((0xbfffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3eU))))) 
                                             << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3fU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__a = ((0x7fffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__6\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    // Body
    vlSelf->top__DOT__wb_en = (((0U == (0x1fU & (vlSelf->inst 
                                                 >> 2U))) 
                                | (IData)(vlSelf->top__DOT__wb_pc)) 
                               | (IData)(vlSelf->top__DOT__wb_alu));
    vlSelf->top__DOT__pc_gen_inst__DOT__br_pc = (vlSelf->pc 
                                                 + vlSelf->top__DOT__imm);
    vlSelf->top__DOT__rd_data1 = ((0U == (0x1fU & (vlSelf->inst 
                                                   >> 0xfU)))
                                   ? 0ULL : vlSelf->top__DOT__regfile_inst__DOT__gpr
                                  [(0x1fU & (vlSelf->inst 
                                             >> 0xfU))]);
    vlSelf->top__DOT__rd_data2 = ((0U == (0x1fU & (vlSelf->inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->top__DOT__regfile_inst__DOT__gpr
                                  [(0x1fU & (vlSelf->inst 
                                             >> 0x14U))]);
    if (((IData)(vlSelf->top__DOT__wb_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_en))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->top__DOT____Vtogcov__wb_en = vlSelf->top__DOT__wb_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__pc_gen_inst__DOT__br_pc) 
               ^ (IData)(vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc)))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__pc_gen_inst__DOT__br_pc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__br_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__br_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__rd_data1) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rd_data1)))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__rd_data1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[689]);
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
        ++(vlSymsp->__Vcoverage[690]);
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
        ++(vlSymsp->__Vcoverage[691]);
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
        ++(vlSymsp->__Vcoverage[692]);
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
        ++(vlSymsp->__Vcoverage[693]);
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
        ++(vlSymsp->__Vcoverage[694]);
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
        ++(vlSymsp->__Vcoverage[695]);
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
        ++(vlSymsp->__Vcoverage[696]);
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
        ++(vlSymsp->__Vcoverage[697]);
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
        ++(vlSymsp->__Vcoverage[698]);
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
        ++(vlSymsp->__Vcoverage[699]);
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
        ++(vlSymsp->__Vcoverage[700]);
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
        ++(vlSymsp->__Vcoverage[701]);
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
        ++(vlSymsp->__Vcoverage[702]);
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
        ++(vlSymsp->__Vcoverage[703]);
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
        ++(vlSymsp->__Vcoverage[704]);
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
        ++(vlSymsp->__Vcoverage[705]);
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
        ++(vlSymsp->__Vcoverage[706]);
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
        ++(vlSymsp->__Vcoverage[707]);
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
        ++(vlSymsp->__Vcoverage[708]);
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
        ++(vlSymsp->__Vcoverage[709]);
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
        ++(vlSymsp->__Vcoverage[710]);
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
        ++(vlSymsp->__Vcoverage[711]);
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
        ++(vlSymsp->__Vcoverage[712]);
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
        ++(vlSymsp->__Vcoverage[713]);
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
        ++(vlSymsp->__Vcoverage[714]);
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
        ++(vlSymsp->__Vcoverage[715]);
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
        ++(vlSymsp->__Vcoverage[716]);
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
        ++(vlSymsp->__Vcoverage[717]);
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
        ++(vlSymsp->__Vcoverage[718]);
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
        ++(vlSymsp->__Vcoverage[719]);
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
        ++(vlSymsp->__Vcoverage[720]);
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
        ++(vlSymsp->__Vcoverage[721]);
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
        ++(vlSymsp->__Vcoverage[722]);
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
        ++(vlSymsp->__Vcoverage[723]);
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
        ++(vlSymsp->__Vcoverage[724]);
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
        ++(vlSymsp->__Vcoverage[725]);
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
        ++(vlSymsp->__Vcoverage[726]);
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
        ++(vlSymsp->__Vcoverage[727]);
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
        ++(vlSymsp->__Vcoverage[728]);
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
        ++(vlSymsp->__Vcoverage[729]);
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
        ++(vlSymsp->__Vcoverage[730]);
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
        ++(vlSymsp->__Vcoverage[731]);
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
        ++(vlSymsp->__Vcoverage[732]);
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
        ++(vlSymsp->__Vcoverage[733]);
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
        ++(vlSymsp->__Vcoverage[734]);
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
        ++(vlSymsp->__Vcoverage[735]);
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
        ++(vlSymsp->__Vcoverage[736]);
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
        ++(vlSymsp->__Vcoverage[737]);
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
        ++(vlSymsp->__Vcoverage[738]);
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
        ++(vlSymsp->__Vcoverage[739]);
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
        ++(vlSymsp->__Vcoverage[740]);
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
        ++(vlSymsp->__Vcoverage[741]);
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
        ++(vlSymsp->__Vcoverage[742]);
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
        ++(vlSymsp->__Vcoverage[743]);
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
        ++(vlSymsp->__Vcoverage[744]);
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
        ++(vlSymsp->__Vcoverage[745]);
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
        ++(vlSymsp->__Vcoverage[746]);
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
        ++(vlSymsp->__Vcoverage[747]);
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
        ++(vlSymsp->__Vcoverage[748]);
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
        ++(vlSymsp->__Vcoverage[749]);
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
        ++(vlSymsp->__Vcoverage[750]);
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
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data1 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
    vlSelf->top__DOT__alu_inst__DOT__opdata1 = (((- (QData)((IData)(vlSelf->top__DOT__rs1_en))) 
                                                 & vlSelf->top__DOT__rd_data1) 
                                                | ((- (QData)((IData)(vlSelf->top__DOT__pc_en))) 
                                                   & vlSelf->pc));
    if ((1U & ((IData)(vlSelf->top__DOT__rd_data2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rd_data2)))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__rd_data2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[753]);
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
        ++(vlSymsp->__Vcoverage[754]);
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
        ++(vlSymsp->__Vcoverage[755]);
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
        ++(vlSymsp->__Vcoverage[756]);
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
        ++(vlSymsp->__Vcoverage[757]);
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
        ++(vlSymsp->__Vcoverage[758]);
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
        ++(vlSymsp->__Vcoverage[759]);
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
        ++(vlSymsp->__Vcoverage[760]);
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
        ++(vlSymsp->__Vcoverage[761]);
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
        ++(vlSymsp->__Vcoverage[762]);
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
        ++(vlSymsp->__Vcoverage[763]);
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
        ++(vlSymsp->__Vcoverage[764]);
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
        ++(vlSymsp->__Vcoverage[765]);
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
        ++(vlSymsp->__Vcoverage[766]);
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
        ++(vlSymsp->__Vcoverage[767]);
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
        ++(vlSymsp->__Vcoverage[768]);
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
        ++(vlSymsp->__Vcoverage[769]);
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
        ++(vlSymsp->__Vcoverage[770]);
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
        ++(vlSymsp->__Vcoverage[771]);
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
        ++(vlSymsp->__Vcoverage[772]);
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
        ++(vlSymsp->__Vcoverage[773]);
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
        ++(vlSymsp->__Vcoverage[774]);
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
        ++(vlSymsp->__Vcoverage[775]);
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
        ++(vlSymsp->__Vcoverage[776]);
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
        ++(vlSymsp->__Vcoverage[777]);
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
        ++(vlSymsp->__Vcoverage[778]);
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
        ++(vlSymsp->__Vcoverage[779]);
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
        ++(vlSymsp->__Vcoverage[780]);
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
        ++(vlSymsp->__Vcoverage[781]);
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
        ++(vlSymsp->__Vcoverage[782]);
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
        ++(vlSymsp->__Vcoverage[783]);
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
        ++(vlSymsp->__Vcoverage[784]);
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
        ++(vlSymsp->__Vcoverage[785]);
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
        ++(vlSymsp->__Vcoverage[786]);
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
        ++(vlSymsp->__Vcoverage[787]);
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
        ++(vlSymsp->__Vcoverage[788]);
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
        ++(vlSymsp->__Vcoverage[789]);
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
        ++(vlSymsp->__Vcoverage[790]);
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
        ++(vlSymsp->__Vcoverage[791]);
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
        ++(vlSymsp->__Vcoverage[792]);
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
        ++(vlSymsp->__Vcoverage[793]);
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
        ++(vlSymsp->__Vcoverage[794]);
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
        ++(vlSymsp->__Vcoverage[795]);
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
        ++(vlSymsp->__Vcoverage[796]);
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
        ++(vlSymsp->__Vcoverage[797]);
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
        ++(vlSymsp->__Vcoverage[798]);
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
        ++(vlSymsp->__Vcoverage[799]);
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
        ++(vlSymsp->__Vcoverage[800]);
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
        ++(vlSymsp->__Vcoverage[801]);
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
        ++(vlSymsp->__Vcoverage[802]);
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
        ++(vlSymsp->__Vcoverage[803]);
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
        ++(vlSymsp->__Vcoverage[804]);
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
        ++(vlSymsp->__Vcoverage[805]);
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
        ++(vlSymsp->__Vcoverage[806]);
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
        ++(vlSymsp->__Vcoverage[807]);
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
        ++(vlSymsp->__Vcoverage[808]);
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
        ++(vlSymsp->__Vcoverage[809]);
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
        ++(vlSymsp->__Vcoverage[810]);
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
        ++(vlSymsp->__Vcoverage[811]);
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
        ++(vlSymsp->__Vcoverage[812]);
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
        ++(vlSymsp->__Vcoverage[813]);
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
        ++(vlSymsp->__Vcoverage[814]);
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
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
    vlSelf->wdata = (((((- (QData)((IData)(vlSelf->top__DOT__sb))) 
                        & (QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rd_data2))))) 
                       | ((- (QData)((IData)(vlSelf->top__DOT__sh))) 
                          & (QData)((IData)((0xffffU 
                                             & (IData)(vlSelf->top__DOT__rd_data2)))))) 
                      | ((- (QData)((IData)(vlSelf->top__DOT__sw))) 
                         & (QData)((IData)(vlSelf->top__DOT__rd_data2)))) 
                     | ((- (QData)((IData)(vlSelf->top__DOT__sd))) 
                        & vlSelf->top__DOT__rd_data2));
    vlSelf->top__DOT__alu_inst__DOT__opdata2 = (((- (QData)((IData)(vlSelf->top__DOT__rs2_en))) 
                                                 & vlSelf->top__DOT__rd_data2) 
                                                | ((- (QData)((IData)(vlSelf->top__DOT__imm_en))) 
                                                   & vlSelf->top__DOT__imm));
    if ((1U & ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
               ^ (IData)(vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1)))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1432]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->wdata) ^ (IData)(vlSelf->top__DOT____Vtogcov__wdata)))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffeULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->wdata)))));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 1U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__wdata 
                                                         >> 1U))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffdULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 1U))))) 
                                                 << 1U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 2U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__wdata 
                                                         >> 2U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffbULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 2U))))) 
                                                 << 2U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 3U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__wdata 
                                                         >> 3U))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffff7ULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 3U))))) 
                                                 << 3U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 4U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__wdata 
                                                         >> 4U))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffefULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 4U))))) 
                                                 << 4U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 5U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__wdata 
                                                         >> 5U))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffdfULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 5U))))) 
                                                 << 5U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 6U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__wdata 
                                                         >> 6U))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffbfULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 6U))))) 
                                                 << 6U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 7U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__wdata 
                                                         >> 7U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffff7fULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 7U))))) 
                                                 << 7U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 8U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__wdata 
                                                         >> 8U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffeffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 8U))))) 
                                                 << 8U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 9U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__wdata 
                                                         >> 9U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffdffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 9U))))) 
                                                 << 9U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0xaU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__wdata 
                                                           >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffbffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0xaU))))) 
                                                 << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0xbU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__wdata 
                                                           >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffff7ffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0xbU))))) 
                                                 << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0xcU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__wdata 
                                                           >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffefffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0xcU))))) 
                                                 << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0xdU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__wdata 
                                                           >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffdfffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0xdU))))) 
                                                 << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0xeU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__wdata 
                                                           >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffbfffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0xeU))))) 
                                                 << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0xfU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__wdata 
                                                           >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffff7fffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0xfU))))) 
                                                 << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x10U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffeffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x10U))))) 
                                                 << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x11U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffdffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x11U))))) 
                                                 << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x12U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffbffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x12U))))) 
                                                 << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x13U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffff7ffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x13U))))) 
                                                 << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x14U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffefffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x14U))))) 
                                                 << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x15U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffdfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x15U))))) 
                                                 << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x16U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffbfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x16U))))) 
                                                 << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x17U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffff7fffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x17U))))) 
                                                 << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x18U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffeffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x18U))))) 
                                                 << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x19U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffdffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x19U))))) 
                                                 << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x1aU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffbffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x1aU))))) 
                                                 << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x1bU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffff7ffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x1bU))))) 
                                                 << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x1cU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffefffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x1cU))))) 
                                                 << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x1dU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffdfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x1dU))))) 
                                                 << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x1eU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffbfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x1eU))))) 
                                                 << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x1fU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffff7fffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x1fU))))) 
                                                 << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x20U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffeffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x20U))))) 
                                                 << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x21U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffdffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x21U))))) 
                                                 << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x22U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffbffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x22U))))) 
                                                 << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x23U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffff7ffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x23U))))) 
                                                 << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x24U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffefffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x24U))))) 
                                                 << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x25U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffdfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x25U))))) 
                                                 << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x26U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffbfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x26U))))) 
                                                 << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x27U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffff7fffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x27U))))) 
                                                 << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x28U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffeffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x28U))))) 
                                                 << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x29U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffdffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x29U))))) 
                                                 << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x2aU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffbffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x2aU))))) 
                                                 << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x2bU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffff7ffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x2bU))))) 
                                                 << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x2cU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffefffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x2cU))))) 
                                                 << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x2dU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffdfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x2dU))))) 
                                                 << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x2eU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffbfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x2eU))))) 
                                                 << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x2fU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffff7fffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x2fU))))) 
                                                 << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x30U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffeffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x30U))))) 
                                                 << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x31U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffdffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x31U))))) 
                                                 << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x32U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffbffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x32U))))) 
                                                 << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x33U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfff7ffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x33U))))) 
                                                 << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x34U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffefffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x34U))))) 
                                                 << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x35U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffdfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x35U))))) 
                                                 << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x36U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffbfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x36U))))) 
                                                 << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x37U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xff7fffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x37U))))) 
                                                 << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x38U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfeffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x38U))))) 
                                                 << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x39U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfdffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x39U))))) 
                                                 << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x3aU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfbffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x3aU))))) 
                                                 << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x3bU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xf7ffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x3bU))))) 
                                                 << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x3cU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xefffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x3cU))))) 
                                                 << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x3dU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xdfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x3dU))))) 
                                                 << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x3eU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xbfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x3eU))))) 
                                                 << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->wdata >> 0x3fU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__wdata 
                                                            >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0x7fffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->wdata 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2) 
               ^ (IData)(vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2)))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((0x4000U & vlSelf->inst)) {
        vlSelf->top__DOT__alu_inst__DOT__br_result 
            = ((0x2000U & vlSelf->inst) ? ((0x1000U 
                                            & vlSelf->inst)
                                            ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                               >= vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                            : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                               < vlSelf->top__DOT__alu_inst__DOT__opdata2))
                : ((0x1000U & vlSelf->inst) ? VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                    : VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)));
        vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
            = ((0x2000U & vlSelf->inst) ? ((0x1000U 
                                            & vlSelf->inst)
                                            ? VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2))
                                            : VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                : ((0x1000U & vlSelf->inst) ? VL_DIV_III(32, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2))
                    : VL_DIVS_III(32, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2))));
    } else {
        vlSelf->top__DOT__alu_inst__DOT__br_result 
            = ((~ (vlSelf->inst >> 0xdU)) & ((0x1000U 
                                              & vlSelf->inst)
                                              ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 != vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                              : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 == vlSelf->top__DOT__alu_inst__DOT__opdata2)));
        vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
            = ((0x2000U & vlSelf->inst) ? 0U : ((0x1000U 
                                                 & vlSelf->inst)
                                                 ? 0U
                                                 : 
                                                VL_MULS_III(32,32,32, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2))));
    }
    vlSelf->top__DOT__alu_inst__DOT__wlgc_result = 
        ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))
          ? ((8U & (IData)(vlSelf->top__DOT__wlgc_op))
              ? ((4U & (IData)(vlSelf->top__DOT__wlgc_op))
                  ? ((2U & (IData)(vlSelf->top__DOT__wlgc_op))
                      ? 0U : ((1U & (IData)(vlSelf->top__DOT__wlgc_op))
                               ? ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                  >> (0x1fU & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                               : 0U)) : ((2U & (IData)(vlSelf->top__DOT__wlgc_op))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                                   - (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))))
              : ((4U & (IData)(vlSelf->top__DOT__wlgc_op))
                  ? ((2U & (IData)(vlSelf->top__DOT__wlgc_op))
                      ? 0U : ((1U & (IData)(vlSelf->top__DOT__wlgc_op))
                               ? ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                  << (0x1fU & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                               : 0U)) : ((2U & (IData)(vlSelf->top__DOT__wlgc_op))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                                   << 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                                   + (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2))))))
          : 0U);
    vlSelf->top__DOT__alu_inst__DOT__lgc_result = (
                                                   (8U 
                                                    & (IData)(vlSelf->top__DOT__lgc_op))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__lgc_op))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__lgc_op))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__lgc_op))
                                                       ? vlSelf->top__DOT__alu_inst__DOT__opdata2
                                                       : 0ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__lgc_op))
                                                       ? 
                                                      (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                       >> 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                       : 0ULL))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__lgc_op))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__lgc_op))
                                                       ? 0ULL
                                                       : 
                                                      (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                       - vlSelf->top__DOT__alu_inst__DOT__opdata2))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__lgc_op))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__lgc_op))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__lgc_op))
                                                       ? 
                                                      (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                       & vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                                       : 
                                                      (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                       | vlSelf->top__DOT__alu_inst__DOT__opdata2))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__lgc_op))
                                                       ? 
                                                      (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                       << 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                       : 
                                                      (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                       ^ vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__lgc_op))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__lgc_op))
                                                       ? 
                                                      ((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                        < vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                                        ? 1ULL
                                                        : 0ULL)
                                                       : 
                                                      (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                                        ? 1ULL
                                                        : 0ULL))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__lgc_op))
                                                       ? 
                                                      (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                       << 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                       : 
                                                      (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                       + vlSelf->top__DOT__alu_inst__DOT__opdata2)))));
    VL_EXTEND_WQ(128,64, __Vtemp5, vlSelf->top__DOT__alu_inst__DOT__opdata1);
    VL_EXTEND_WQ(128,64, __Vtemp6, vlSelf->top__DOT__alu_inst__DOT__opdata2);
    VL_MUL_W(4, __Vtemp7, __Vtemp5, __Vtemp6);
    vlSelf->top__DOT__alu_inst__DOT__multu[0U] = __Vtemp7[0U];
    vlSelf->top__DOT__alu_inst__DOT__multu[1U] = __Vtemp7[1U];
    vlSelf->top__DOT__alu_inst__DOT__multu[2U] = __Vtemp7[2U];
    vlSelf->top__DOT__alu_inst__DOT__multu[3U] = __Vtemp7[3U];
    if (((IData)(vlSelf->top__DOT__alu_inst__DOT__br_result) 
         ^ (IData)(vlSelf->top__DOT__alu_inst__DOT____Vtogcov__br_result))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__br_result 
            = vlSelf->top__DOT__alu_inst__DOT__br_result;
    }
    vlSelf->top__DOT__br_asrt = ((IData)(vlSelf->top__DOT__alu_inst__DOT__br_result) 
                                 & (0x18U == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))));
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1823]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1824]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1825]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1826]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_inst__DOT__lgc_result) 
               ^ (IData)(vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result)))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__alu_inst__DOT__lgc_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    vlSelf->top__DOT__alu_inst__DOT__mlgc_result = 
        ((0x4000U & vlSelf->inst) ? ((0x2000U & vlSelf->inst)
                                      ? ((0x1000U & vlSelf->inst)
                                          ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                          : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2))
                                      : ((0x1000U & vlSelf->inst)
                                          ? VL_DIV_QQQ(64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                          : VL_DIVS_QQQ(64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)))
          : ((0x2000U & vlSelf->inst) ? ((0x1000U & vlSelf->inst)
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__alu_inst__DOT__multu[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__alu_inst__DOT__multu[2U])))
                                          : (((QData)((IData)(
                                                              vlSelf->top__DOT__alu_inst__DOT__multu[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__alu_inst__DOT__multu[2U]))))
              : ((0x1000U & vlSelf->inst) ? (((QData)((IData)(
                                                              vlSelf->top__DOT__alu_inst__DOT__multu[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__alu_inst__DOT__multu[0U])))
                  : VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2))));
    if (((IData)(vlSelf->top__DOT__br_asrt) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_asrt))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->top__DOT____Vtogcov__br_asrt = vlSelf->top__DOT__br_asrt;
    }
    vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en = (
                                                   ((0x19U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->inst 
                                                         >> 2U))) 
                                                    & (0x1bU 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->inst 
                                                           >> 2U)))) 
                                                   & (~ (IData)(vlSelf->top__DOT__br_asrt)));
    if ((1U & ((IData)(vlSelf->top__DOT__alu_inst__DOT__mlgc_result) 
               ^ (IData)(vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result)))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__alu_inst__DOT__mlgc_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__result = (((((- (QData)((IData)(vlSelf->top__DOT__lgc_en))) 
                                   & vlSelf->top__DOT__alu_inst__DOT__lgc_result) 
                                  | ((- (QData)((IData)(vlSelf->top__DOT__wlgc_en))) 
                                     & (((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__alu_inst__DOT__wlgc_result))))) 
                                 | ((- (QData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en))) 
                                    & vlSelf->top__DOT__alu_inst__DOT__mlgc_result)) 
                                | ((- (QData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en))) 
                                   & (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu_inst__DOT__wmlgc_result)))));
    if (((IData)(vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en) 
         ^ (IData)(vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__snxt_en))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__snxt_en 
            = vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en;
    }
    if (((0ULL == vlSelf->top__DOT__result) ^ (IData)(vlSelf->top__DOT____Vtogcov__zero))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->top__DOT____Vtogcov__zero = (0ULL == vlSelf->top__DOT__result);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__result) ^ (IData)(vlSelf->top__DOT____Vtogcov__result)))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffffffeULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->top__DOT__result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffffffdULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 1U))))) 
                                                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffffffbULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 2U))))) 
                                                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffffff7ULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 3U))))) 
                                                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffffffefULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 4U))))) 
                                                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffffffdfULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 5U))))) 
                                                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffffffbfULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 6U))))) 
                                                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffffff7fULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 7U))))) 
                                                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffffeffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 8U))))) 
                                                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffffdffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 9U))))) 
                                                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffffbffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffff7ffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffffefffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffffdfffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffffbfffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffff7fffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffeffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffdffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffffbffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffff7ffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffefffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffdfffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffffbfffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffff7fffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffeffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffdffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffffbffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffff7ffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffefffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffdfffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffffbfffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffff7fffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffeffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffdffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffbffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffff7ffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffefffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffdfffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x25U))))) 
                                                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffbfffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x26U))))) 
                                                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffff7fffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x27U))))) 
                                                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffeffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x28U))))) 
                                                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffdffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x29U))))) 
                                                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffbffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x2aU))))) 
                                                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffff7ffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x2bU))))) 
                                                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffefffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x2cU))))) 
                                                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffdfffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x2dU))))) 
                                                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffbfffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x2eU))))) 
                                                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffff7fffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x2fU))))) 
                                                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffeffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x30U))))) 
                                                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffdffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x31U))))) 
                                                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffbffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x32U))))) 
                                                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfff7ffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x33U))))) 
                                                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffefffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x34U))))) 
                                                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffdfffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x35U))))) 
                                                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->top__DOT____Vtogcov__result = ((0xffbfffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x36U))))) 
                                                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->top__DOT____Vtogcov__result = ((0xff7fffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x37U))))) 
                                                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfeffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x38U))))) 
                                                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfdffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x39U))))) 
                                                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->top__DOT____Vtogcov__result = ((0xfbffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x3aU))))) 
                                                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->top__DOT____Vtogcov__result = ((0xf7ffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x3bU))))) 
                                                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->top__DOT____Vtogcov__result = ((0xefffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x3cU))))) 
                                                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->top__DOT____Vtogcov__result = ((0xdfffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x3dU))))) 
                                                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->top__DOT____Vtogcov__result = ((0xbfffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x3eU))))) 
                                                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__result 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->top__DOT____Vtogcov__result = ((0x7fffffffffffffffULL 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__result 
                                                                              >> 0x3fU))))) 
                                                  << 0x3fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 1U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 2U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 3U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 4U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 5U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 6U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 7U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 8U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 9U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->addr = vlSelf->top__DOT__result;
    vlSelf->dnxt_pc = ((((0xfffffffffffffffeULL & (
                                                   (- (QData)((IData)(
                                                                      (0x19U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->inst 
                                                                           >> 2U)))))) 
                                                   & vlSelf->top__DOT__result)) 
                         | ((- (QData)((IData)((0x1bU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)))))) 
                            & vlSelf->top__DOT__result)) 
                        | ((- (QData)((IData)(vlSelf->top__DOT__br_asrt))) 
                           & vlSelf->top__DOT__pc_gen_inst__DOT__br_pc)) 
                       | ((- (QData)((IData)(vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en))) 
                          & vlSelf->snxt_pc));
    vlSelf->top__DOT__regfile_inst__DOT__wb_data = 
        ((((- (QData)((IData)((0U == (0x1fU & (vlSelf->inst 
                                               >> 2U)))))) 
           & vlSelf->top__DOT__load_data) | ((- (QData)((IData)(vlSelf->top__DOT__wb_pc))) 
                                             & vlSelf->snxt_pc)) 
         | ((- (QData)((IData)(vlSelf->top__DOT__wb_alu))) 
            & vlSelf->top__DOT__result));
    if ((1U & ((IData)(vlSelf->addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffffeULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | (IData)((IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->addr)))));
    }
    if ((1U & ((IData)((vlSelf->addr >> 1U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__addr 
                                                        >> 1U))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffffdULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 1U))))) 
                                                << 1U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 2U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__addr 
                                                        >> 2U))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffffbULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 2U))))) 
                                                << 2U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 3U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__addr 
                                                        >> 3U))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffff7ULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 3U))))) 
                                                << 3U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 4U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__addr 
                                                        >> 4U))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffffefULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 4U))))) 
                                                << 4U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 5U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__addr 
                                                        >> 5U))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffffdfULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 5U))))) 
                                                << 5U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 6U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__addr 
                                                        >> 6U))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffffbfULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 6U))))) 
                                                << 6U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 7U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__addr 
                                                        >> 7U))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffff7fULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 7U))))) 
                                                << 7U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 8U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__addr 
                                                        >> 8U))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffeffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 8U))))) 
                                                << 8U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 9U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__addr 
                                                        >> 9U))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffdffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 9U))))) 
                                                << 9U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0xaU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__addr 
                                                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffbffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0xaU))))) 
                                                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0xbU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__addr 
                                                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffff7ffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0xbU))))) 
                                                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0xcU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__addr 
                                                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffefffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0xcU))))) 
                                                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0xdU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__addr 
                                                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffdfffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0xdU))))) 
                                                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0xeU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__addr 
                                                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffbfffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0xeU))))) 
                                                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0xfU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__addr 
                                                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffff7fffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0xfU))))) 
                                                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x10U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffeffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x10U))))) 
                                                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x11U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffdffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x11U))))) 
                                                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x12U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffbffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x12U))))) 
                                                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x13U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffff7ffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x13U))))) 
                                                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x14U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffefffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x14U))))) 
                                                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x15U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffdfffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x15U))))) 
                                                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x16U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffbfffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x16U))))) 
                                                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x17U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffff7fffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x17U))))) 
                                                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x18U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffeffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x18U))))) 
                                                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x19U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffdffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x19U))))) 
                                                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x1aU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffbffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x1aU))))) 
                                                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x1bU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffff7ffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x1bU))))) 
                                                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x1cU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffefffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x1cU))))) 
                                                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x1dU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffdfffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x1dU))))) 
                                                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x1eU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffbfffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x1eU))))) 
                                                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x1fU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffff7fffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x1fU))))) 
                                                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x20U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffeffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x20U))))) 
                                                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x21U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffdffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x21U))))) 
                                                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x22U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffbffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x22U))))) 
                                                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x23U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffff7ffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x23U))))) 
                                                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x24U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffefffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x24U))))) 
                                                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x25U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffdfffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x25U))))) 
                                                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x26U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffbfffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x26U))))) 
                                                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x27U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffff7fffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x27U))))) 
                                                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x28U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffeffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x28U))))) 
                                                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x29U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffdffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x29U))))) 
                                                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x2aU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffbffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x2aU))))) 
                                                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x2bU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffff7ffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x2bU))))) 
                                                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x2cU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffefffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x2cU))))) 
                                                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x2dU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffdfffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x2dU))))) 
                                                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x2eU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffbfffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x2eU))))) 
                                                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x2fU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffff7fffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x2fU))))) 
                                                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x30U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffeffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x30U))))) 
                                                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x31U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffdffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x31U))))) 
                                                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x32U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffbffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x32U))))) 
                                                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x33U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfff7ffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x33U))))) 
                                                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x34U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffefffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x34U))))) 
                                                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x35U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffdfffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x35U))))) 
                                                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x36U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffbfffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x36U))))) 
                                                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x37U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xff7fffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x37U))))) 
                                                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x38U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfeffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x38U))))) 
                                                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x39U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfdffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x39U))))) 
                                                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x3aU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfbffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x3aU))))) 
                                                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x3bU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xf7ffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x3bU))))) 
                                                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x3cU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xefffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x3cU))))) 
                                                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x3dU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xdfffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x3dU))))) 
                                                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x3eU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xbfffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x3eU))))) 
                                                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->addr >> 0x3fU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__addr 
                                                           >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT____Vtogcov__addr = ((0x7fffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->addr 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->dnxt_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__dnxt_pc)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->dnxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffffdULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 2U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffffbULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 3U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffff7ULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 4U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffffefULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 5U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffffdfULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 6U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffffbfULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 7U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffff7fULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 8U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffeffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 9U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffdffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xaU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffbffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xbU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffff7ffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xcU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffefffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xdU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffdfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xeU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffffbfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0xfU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffff7fffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffeffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffdffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffbffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffff7ffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffefffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffdfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffffbfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffff7fffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffeffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffdffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffbffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffff7ffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffefffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffdfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffffbfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffff7fffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffeffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffdffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffbffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffff7ffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffefffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffdfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffffbfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x26U))))) 
                                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffff7fffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x27U))))) 
                                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffeffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x28U))))) 
                                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffdffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x29U))))) 
                                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffbffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2aU))))) 
                                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffff7ffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2bU))))) 
                                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffefffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2cU))))) 
                                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffdfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2dU))))) 
                                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffffbfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2eU))))) 
                                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffff7fffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x2fU))))) 
                                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffeffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x30U))))) 
                                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffdffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x31U))))) 
                                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffbffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x32U))))) 
                                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfff7ffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x33U))))) 
                                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffefffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x34U))))) 
                                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffdfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x35U))))) 
                                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xffbfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x36U))))) 
                                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xff7fffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x37U))))) 
                                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfeffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x38U))))) 
                                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfdffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x39U))))) 
                                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfbffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3aU))))) 
                                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xf7ffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3bU))))) 
                                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xefffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3cU))))) 
                                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xdfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3dU))))) 
                                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xbfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3eU))))) 
                                                   << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__dnxt_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__regfile_inst__DOT__wb_data) 
               ^ (IData)(vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data)))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__regfile_inst__DOT__wb_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
