// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__8\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    // Body
    __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0 = 0U;
    __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1 = 0U;
    ++(vlSymsp->__Vcoverage[1665]);
    ++(vlSymsp->__Vcoverage[1896]);
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1664]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1895]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1892]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__i = 0x20U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__ld_hz_nop) {
            ++(vlSymsp->__Vcoverage[1662]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__ld_hz_nop)))) {
            ++(vlSymsp->__Vcoverage[1663]);
        }
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__mmu_wb_en) & 
             (0U != (IData)(vlSelf->top__DOT__mmu_index_rd)))) {
            ++(vlSymsp->__Vcoverage[1893]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mmu_wb_en) 
                      & (0U != (IData)(vlSelf->top__DOT__mmu_index_rd)))))) {
            ++(vlSymsp->__Vcoverage[1894]);
        }
    }
    vlSelf->pc = ((IData)(vlSelf->rstn) ? ((IData)(vlSelf->top__DOT__ld_hz_nop)
                                            ? vlSelf->pc
                                            : vlSelf->dnxt_pc)
                   : 0x80000000ULL);
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__mmu_wb_en) & 
             (0U != (IData)(vlSelf->top__DOT__mmu_index_rd)))) {
            __Vdlyvval__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0 
                = vlSelf->top__DOT__mmu_wb_data;
            __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0 = 1U;
            __Vdlyvdim0__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0 
                = vlSelf->top__DOT__mmu_index_rd;
        }
    } else {
        __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1 = 1U;
    }
    if (__Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0) {
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[__Vdlyvdim0__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0] 
            = __Vdlyvval__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    }
    if (__Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1) {
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[1U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[2U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[3U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[4U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[5U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[6U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[7U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[8U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[9U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xaU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xbU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xcU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xdU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xeU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0xfU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x10U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x11U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x12U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x13U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x14U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x15U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x16U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x17U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x18U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x19U] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1aU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1bU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1cU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1dU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1eU] = 0ULL;
        vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0x1fU] = 0ULL;
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
    if ((1U & ((IData)(vlSelf->snxt_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__snxt_pc)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->snxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[100]);
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
        ++(vlSymsp->__Vcoverage[101]);
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
        ++(vlSymsp->__Vcoverage[102]);
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
        ++(vlSymsp->__Vcoverage[103]);
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
        ++(vlSymsp->__Vcoverage[104]);
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
        ++(vlSymsp->__Vcoverage[105]);
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
        ++(vlSymsp->__Vcoverage[106]);
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
        ++(vlSymsp->__Vcoverage[107]);
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
        ++(vlSymsp->__Vcoverage[108]);
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
        ++(vlSymsp->__Vcoverage[109]);
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
        ++(vlSymsp->__Vcoverage[110]);
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
        ++(vlSymsp->__Vcoverage[111]);
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
        ++(vlSymsp->__Vcoverage[112]);
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
        ++(vlSymsp->__Vcoverage[113]);
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
        ++(vlSymsp->__Vcoverage[114]);
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
        ++(vlSymsp->__Vcoverage[115]);
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
        ++(vlSymsp->__Vcoverage[116]);
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
        ++(vlSymsp->__Vcoverage[117]);
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
        ++(vlSymsp->__Vcoverage[118]);
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
        ++(vlSymsp->__Vcoverage[119]);
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
        ++(vlSymsp->__Vcoverage[120]);
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
        ++(vlSymsp->__Vcoverage[121]);
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
        ++(vlSymsp->__Vcoverage[122]);
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
        ++(vlSymsp->__Vcoverage[123]);
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
        ++(vlSymsp->__Vcoverage[124]);
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
        ++(vlSymsp->__Vcoverage[125]);
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
        ++(vlSymsp->__Vcoverage[126]);
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
        ++(vlSymsp->__Vcoverage[127]);
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
        ++(vlSymsp->__Vcoverage[128]);
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
        ++(vlSymsp->__Vcoverage[129]);
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
        ++(vlSymsp->__Vcoverage[130]);
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
        ++(vlSymsp->__Vcoverage[131]);
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
        ++(vlSymsp->__Vcoverage[132]);
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
        ++(vlSymsp->__Vcoverage[133]);
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
        ++(vlSymsp->__Vcoverage[134]);
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
        ++(vlSymsp->__Vcoverage[135]);
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
        ++(vlSymsp->__Vcoverage[136]);
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
        ++(vlSymsp->__Vcoverage[137]);
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
        ++(vlSymsp->__Vcoverage[138]);
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
        ++(vlSymsp->__Vcoverage[139]);
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
        ++(vlSymsp->__Vcoverage[140]);
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
        ++(vlSymsp->__Vcoverage[141]);
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
        ++(vlSymsp->__Vcoverage[142]);
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
        ++(vlSymsp->__Vcoverage[143]);
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
        ++(vlSymsp->__Vcoverage[144]);
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
        ++(vlSymsp->__Vcoverage[145]);
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
        ++(vlSymsp->__Vcoverage[146]);
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
        ++(vlSymsp->__Vcoverage[147]);
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
        ++(vlSymsp->__Vcoverage[148]);
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
        ++(vlSymsp->__Vcoverage[149]);
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
        ++(vlSymsp->__Vcoverage[150]);
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
        ++(vlSymsp->__Vcoverage[151]);
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
        ++(vlSymsp->__Vcoverage[152]);
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
        ++(vlSymsp->__Vcoverage[153]);
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
        ++(vlSymsp->__Vcoverage[154]);
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
        ++(vlSymsp->__Vcoverage[155]);
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
        ++(vlSymsp->__Vcoverage[156]);
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
        ++(vlSymsp->__Vcoverage[157]);
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
        ++(vlSymsp->__Vcoverage[158]);
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
        ++(vlSymsp->__Vcoverage[159]);
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
        ++(vlSymsp->__Vcoverage[160]);
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
        ++(vlSymsp->__Vcoverage[161]);
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
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__9\n"); );
    // Body
    vlSelf->top__DOT__idu_inst__DOT__gpr_data1 = vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr
        [(0x1fU & (vlSelf->top__DOT__ifu_instr >> 0xfU))];
    vlSelf->top__DOT__idu_inst__DOT__gpr_data2 = vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr
        [(0x1fU & (vlSelf->top__DOT__ifu_instr >> 0x14U))];
    vlSelf->dnxt_pc = (((IData)(vlSelf->top__DOT__exu_jump_en) 
                        | (IData)(vlSelf->top__DOT__mmu_inst__DOT__branch_en))
                        ? vlSelf->top__DOT__mmu_dnpc
                        : vlSelf->snxt_pc);
    if ((1U & ((IData)(vlSelf->top__DOT__idu_inst__DOT__gpr_data1) 
               ^ (IData)(vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1)))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__idu_inst__DOT__gpr_data1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__idu_inst__DOT__gpr_data2) 
               ^ (IData)(vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2)))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__idu_inst__DOT__gpr_data2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__idu_inst__DOT____Vtogcov__gpr_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__idu_inst__DOT__gpr_data2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->dnxt_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__dnxt_pc)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->dnxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->dnxt_pc >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnxt_pc 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[164]);
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
        ++(vlSymsp->__Vcoverage[165]);
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
        ++(vlSymsp->__Vcoverage[166]);
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
        ++(vlSymsp->__Vcoverage[167]);
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
        ++(vlSymsp->__Vcoverage[168]);
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
        ++(vlSymsp->__Vcoverage[169]);
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
        ++(vlSymsp->__Vcoverage[170]);
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
        ++(vlSymsp->__Vcoverage[171]);
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
        ++(vlSymsp->__Vcoverage[172]);
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
        ++(vlSymsp->__Vcoverage[173]);
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
        ++(vlSymsp->__Vcoverage[174]);
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
        ++(vlSymsp->__Vcoverage[175]);
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
        ++(vlSymsp->__Vcoverage[176]);
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
        ++(vlSymsp->__Vcoverage[177]);
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
        ++(vlSymsp->__Vcoverage[178]);
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
        ++(vlSymsp->__Vcoverage[179]);
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
        ++(vlSymsp->__Vcoverage[180]);
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
        ++(vlSymsp->__Vcoverage[181]);
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
        ++(vlSymsp->__Vcoverage[182]);
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
        ++(vlSymsp->__Vcoverage[183]);
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
        ++(vlSymsp->__Vcoverage[184]);
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
        ++(vlSymsp->__Vcoverage[185]);
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
        ++(vlSymsp->__Vcoverage[186]);
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
        ++(vlSymsp->__Vcoverage[187]);
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
        ++(vlSymsp->__Vcoverage[188]);
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
        ++(vlSymsp->__Vcoverage[189]);
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
        ++(vlSymsp->__Vcoverage[190]);
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
        ++(vlSymsp->__Vcoverage[191]);
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
        ++(vlSymsp->__Vcoverage[192]);
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
        ++(vlSymsp->__Vcoverage[193]);
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
        ++(vlSymsp->__Vcoverage[194]);
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
        ++(vlSymsp->__Vcoverage[195]);
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
        ++(vlSymsp->__Vcoverage[196]);
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
        ++(vlSymsp->__Vcoverage[197]);
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
        ++(vlSymsp->__Vcoverage[198]);
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
        ++(vlSymsp->__Vcoverage[199]);
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
        ++(vlSymsp->__Vcoverage[200]);
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
        ++(vlSymsp->__Vcoverage[201]);
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
        ++(vlSymsp->__Vcoverage[202]);
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
        ++(vlSymsp->__Vcoverage[203]);
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
        ++(vlSymsp->__Vcoverage[204]);
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
        ++(vlSymsp->__Vcoverage[205]);
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
        ++(vlSymsp->__Vcoverage[206]);
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
        ++(vlSymsp->__Vcoverage[207]);
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
        ++(vlSymsp->__Vcoverage[208]);
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
        ++(vlSymsp->__Vcoverage[209]);
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
        ++(vlSymsp->__Vcoverage[210]);
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
        ++(vlSymsp->__Vcoverage[211]);
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
        ++(vlSymsp->__Vcoverage[212]);
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
        ++(vlSymsp->__Vcoverage[213]);
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
        ++(vlSymsp->__Vcoverage[214]);
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
        ++(vlSymsp->__Vcoverage[215]);
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
        ++(vlSymsp->__Vcoverage[216]);
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
        ++(vlSymsp->__Vcoverage[217]);
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
        ++(vlSymsp->__Vcoverage[218]);
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
        ++(vlSymsp->__Vcoverage[219]);
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
        ++(vlSymsp->__Vcoverage[220]);
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
        ++(vlSymsp->__Vcoverage[221]);
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
        ++(vlSymsp->__Vcoverage[222]);
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
        ++(vlSymsp->__Vcoverage[223]);
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
        ++(vlSymsp->__Vcoverage[224]);
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
        ++(vlSymsp->__Vcoverage[225]);
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
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__dnxt_pc = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__dnxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->dnxt_pc 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
}

void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__5(vlSelf);
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__7(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___multiclk__TOP__9(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
