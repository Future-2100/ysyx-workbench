// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0;
    // Body
    __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0 = 0U;
    __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1 = 0U;
    ++(vlSymsp->__Vcoverage[1202]);
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1201]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[1198]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->top__DOT__regfile_inst__DOT__i = 0x20U;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__wb_en) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->instr 
                                                     >> 7U))))) {
            ++(vlSymsp->__Vcoverage[1199]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wb_en) 
                      & (0U != (0x1fU & (vlSelf->instr 
                                         >> 7U))))))) {
            ++(vlSymsp->__Vcoverage[1200]);
        }
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->top__DOT__wb_en) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->instr 
                                                     >> 7U))))) {
            __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0 
                = vlSelf->top__DOT__regfile_inst__DOT__wb_data;
            __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0 = 1U;
            __Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0 
                = (0x1fU & (vlSelf->instr >> 7U));
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__7\n"); );
    // Body
    vlSelf->top__DOT__ifu_inst__DOT__state_next = (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->ifu_RVALID) 
                                                       & (0U 
                                                          == (IData)(vlSelf->ifu_RRESP)))
                                                       ? 4U
                                                       : 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_now))
                                                      ? 
                                                     ((IData)(vlSelf->ifu_ARREADY)
                                                       ? 2U
                                                       : 1U)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__fetch_en)
                                                       ? 1U
                                                       : 0U))));
    vlSelf->top__DOT__wen = (((((IData)(vlSelf->top__DOT__sb) 
                                | (IData)(vlSelf->top__DOT__sh)) 
                               | (IData)(vlSelf->top__DOT__sw)) 
                              | (IData)(vlSelf->top__DOT__sd)) 
                             & (IData)(vlSelf->rstn));
    if ((1U & ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_next)))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_next 
            = ((6U & (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_next)))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_next 
            = ((5U & (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_next)))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_next 
            = ((3U & (IData)(vlSelf->top__DOT__ifu_inst__DOT____Vtogcov__state_next)) 
               | (4U & (IData)(vlSelf->top__DOT__ifu_inst__DOT__state_next)));
    }
    if (((IData)(vlSelf->top__DOT__wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wen))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->top__DOT____Vtogcov__wen = vlSelf->top__DOT__wen;
    }
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__8\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    // Body
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
    if ((1U & ((IData)(vlSelf->top__DOT__rd_data1) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__rd_data1)))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->top__DOT____Vtogcov__rd_data1 = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data1) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__rd_data1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[701]);
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
        ++(vlSymsp->__Vcoverage[702]);
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
        ++(vlSymsp->__Vcoverage[703]);
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
        ++(vlSymsp->__Vcoverage[704]);
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
        ++(vlSymsp->__Vcoverage[705]);
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
        ++(vlSymsp->__Vcoverage[706]);
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
        ++(vlSymsp->__Vcoverage[707]);
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
        ++(vlSymsp->__Vcoverage[708]);
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
        ++(vlSymsp->__Vcoverage[709]);
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
        ++(vlSymsp->__Vcoverage[710]);
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
        ++(vlSymsp->__Vcoverage[711]);
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
        ++(vlSymsp->__Vcoverage[712]);
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
        ++(vlSymsp->__Vcoverage[713]);
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
        ++(vlSymsp->__Vcoverage[714]);
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
        ++(vlSymsp->__Vcoverage[715]);
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
        ++(vlSymsp->__Vcoverage[716]);
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
        ++(vlSymsp->__Vcoverage[717]);
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
        ++(vlSymsp->__Vcoverage[718]);
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
        ++(vlSymsp->__Vcoverage[719]);
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
        ++(vlSymsp->__Vcoverage[720]);
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
        ++(vlSymsp->__Vcoverage[721]);
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
        ++(vlSymsp->__Vcoverage[722]);
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
        ++(vlSymsp->__Vcoverage[723]);
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
        ++(vlSymsp->__Vcoverage[724]);
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
        ++(vlSymsp->__Vcoverage[725]);
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
        ++(vlSymsp->__Vcoverage[726]);
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
        ++(vlSymsp->__Vcoverage[727]);
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
        ++(vlSymsp->__Vcoverage[728]);
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
        ++(vlSymsp->__Vcoverage[729]);
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
        ++(vlSymsp->__Vcoverage[730]);
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
        ++(vlSymsp->__Vcoverage[731]);
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
        ++(vlSymsp->__Vcoverage[732]);
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
        ++(vlSymsp->__Vcoverage[733]);
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
        ++(vlSymsp->__Vcoverage[734]);
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
        ++(vlSymsp->__Vcoverage[735]);
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
        ++(vlSymsp->__Vcoverage[736]);
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
        ++(vlSymsp->__Vcoverage[737]);
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
        ++(vlSymsp->__Vcoverage[738]);
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
        ++(vlSymsp->__Vcoverage[739]);
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
        ++(vlSymsp->__Vcoverage[740]);
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
        ++(vlSymsp->__Vcoverage[741]);
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
        ++(vlSymsp->__Vcoverage[742]);
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
        ++(vlSymsp->__Vcoverage[743]);
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
        ++(vlSymsp->__Vcoverage[744]);
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
        ++(vlSymsp->__Vcoverage[745]);
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
        ++(vlSymsp->__Vcoverage[746]);
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
        ++(vlSymsp->__Vcoverage[747]);
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
        ++(vlSymsp->__Vcoverage[748]);
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
        ++(vlSymsp->__Vcoverage[749]);
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
        ++(vlSymsp->__Vcoverage[750]);
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
        ++(vlSymsp->__Vcoverage[751]);
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
        ++(vlSymsp->__Vcoverage[752]);
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
        ++(vlSymsp->__Vcoverage[753]);
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
        ++(vlSymsp->__Vcoverage[754]);
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
        ++(vlSymsp->__Vcoverage[755]);
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
        ++(vlSymsp->__Vcoverage[756]);
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
        ++(vlSymsp->__Vcoverage[757]);
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
        ++(vlSymsp->__Vcoverage[758]);
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
        ++(vlSymsp->__Vcoverage[759]);
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
        ++(vlSymsp->__Vcoverage[760]);
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
        ++(vlSymsp->__Vcoverage[761]);
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
        ++(vlSymsp->__Vcoverage[762]);
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
        ++(vlSymsp->__Vcoverage[763]);
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
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__rd_data2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rd_data2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__rd_data2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[765]);
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
        ++(vlSymsp->__Vcoverage[766]);
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
        ++(vlSymsp->__Vcoverage[767]);
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
        ++(vlSymsp->__Vcoverage[768]);
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
        ++(vlSymsp->__Vcoverage[769]);
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
        ++(vlSymsp->__Vcoverage[770]);
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
        ++(vlSymsp->__Vcoverage[771]);
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
        ++(vlSymsp->__Vcoverage[772]);
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
        ++(vlSymsp->__Vcoverage[773]);
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
        ++(vlSymsp->__Vcoverage[774]);
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
        ++(vlSymsp->__Vcoverage[775]);
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
        ++(vlSymsp->__Vcoverage[776]);
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
        ++(vlSymsp->__Vcoverage[777]);
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
        ++(vlSymsp->__Vcoverage[778]);
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
        ++(vlSymsp->__Vcoverage[779]);
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
        ++(vlSymsp->__Vcoverage[780]);
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
        ++(vlSymsp->__Vcoverage[781]);
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
        ++(vlSymsp->__Vcoverage[782]);
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
        ++(vlSymsp->__Vcoverage[783]);
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
        ++(vlSymsp->__Vcoverage[784]);
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
        ++(vlSymsp->__Vcoverage[785]);
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
        ++(vlSymsp->__Vcoverage[786]);
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
        ++(vlSymsp->__Vcoverage[787]);
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
        ++(vlSymsp->__Vcoverage[788]);
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
        ++(vlSymsp->__Vcoverage[789]);
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
        ++(vlSymsp->__Vcoverage[790]);
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
        ++(vlSymsp->__Vcoverage[791]);
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
        ++(vlSymsp->__Vcoverage[792]);
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
        ++(vlSymsp->__Vcoverage[793]);
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
        ++(vlSymsp->__Vcoverage[794]);
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
        ++(vlSymsp->__Vcoverage[795]);
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
        ++(vlSymsp->__Vcoverage[796]);
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
        ++(vlSymsp->__Vcoverage[797]);
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
        ++(vlSymsp->__Vcoverage[798]);
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
        ++(vlSymsp->__Vcoverage[799]);
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
        ++(vlSymsp->__Vcoverage[800]);
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
        ++(vlSymsp->__Vcoverage[801]);
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
        ++(vlSymsp->__Vcoverage[802]);
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
        ++(vlSymsp->__Vcoverage[803]);
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
        ++(vlSymsp->__Vcoverage[804]);
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
        ++(vlSymsp->__Vcoverage[805]);
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
        ++(vlSymsp->__Vcoverage[806]);
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
        ++(vlSymsp->__Vcoverage[807]);
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
        ++(vlSymsp->__Vcoverage[808]);
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
        ++(vlSymsp->__Vcoverage[809]);
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
        ++(vlSymsp->__Vcoverage[810]);
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
        ++(vlSymsp->__Vcoverage[811]);
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
        ++(vlSymsp->__Vcoverage[812]);
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
        ++(vlSymsp->__Vcoverage[813]);
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
        ++(vlSymsp->__Vcoverage[814]);
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
        ++(vlSymsp->__Vcoverage[815]);
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
        ++(vlSymsp->__Vcoverage[816]);
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
        ++(vlSymsp->__Vcoverage[817]);
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
        ++(vlSymsp->__Vcoverage[818]);
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
        ++(vlSymsp->__Vcoverage[819]);
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
        ++(vlSymsp->__Vcoverage[820]);
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
        ++(vlSymsp->__Vcoverage[821]);
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
        ++(vlSymsp->__Vcoverage[822]);
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
        ++(vlSymsp->__Vcoverage[823]);
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
        ++(vlSymsp->__Vcoverage[824]);
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
        ++(vlSymsp->__Vcoverage[825]);
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
        ++(vlSymsp->__Vcoverage[826]);
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
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->top__DOT____Vtogcov__rd_data2 = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__rd_data2) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__rd_data2 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
    vlSelf->top__DOT__wdata = (((((- (QData)((IData)(vlSelf->top__DOT__sb))) 
                                  & (QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->top__DOT__rd_data2))))) 
                                 | ((- (QData)((IData)(vlSelf->top__DOT__sh))) 
                                    & (QData)((IData)(
                                                      (0xffffU 
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
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__wdata) ^ (IData)(vlSelf->top__DOT____Vtogcov__wdata)))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffeULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->top__DOT__wdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffdULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 1U))))) 
                                                 << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffbULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 2U))))) 
                                                 << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffff7ULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 3U))))) 
                                                 << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffefULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 4U))))) 
                                                 << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffdfULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 5U))))) 
                                                 << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffbfULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 6U))))) 
                                                 << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffff7fULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 7U))))) 
                                                 << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffeffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 8U))))) 
                                                 << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffdffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 9U))))) 
                                                 << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffbffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xaU))))) 
                                                 << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffff7ffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xbU))))) 
                                                 << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffefffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xcU))))) 
                                                 << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffdfffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xdU))))) 
                                                 << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffbfffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xeU))))) 
                                                 << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffff7fffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xfU))))) 
                                                 << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffeffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x10U))))) 
                                                 << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffdffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x11U))))) 
                                                 << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffbffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x12U))))) 
                                                 << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffff7ffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x13U))))) 
                                                 << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffefffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x14U))))) 
                                                 << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffdfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x15U))))) 
                                                 << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffbfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x16U))))) 
                                                 << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffff7fffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x17U))))) 
                                                 << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffeffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x18U))))) 
                                                 << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffdffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x19U))))) 
                                                 << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffbffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1aU))))) 
                                                 << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffff7ffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1bU))))) 
                                                 << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffefffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1cU))))) 
                                                 << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffdfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1dU))))) 
                                                 << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffbfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1eU))))) 
                                                 << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffff7fffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1fU))))) 
                                                 << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffeffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x20U))))) 
                                                 << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffdffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x21U))))) 
                                                 << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffbffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x22U))))) 
                                                 << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffff7ffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x23U))))) 
                                                 << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffefffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x24U))))) 
                                                 << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffdfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x25U))))) 
                                                 << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffbfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x26U))))) 
                                                 << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffff7fffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x27U))))) 
                                                 << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffeffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x28U))))) 
                                                 << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffdffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x29U))))) 
                                                 << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffbffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2aU))))) 
                                                 << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffff7ffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2bU))))) 
                                                 << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffefffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2cU))))) 
                                                 << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffdfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2dU))))) 
                                                 << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffbfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2eU))))) 
                                                 << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffff7fffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2fU))))) 
                                                 << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffeffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x30U))))) 
                                                 << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffdffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x31U))))) 
                                                 << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffbffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x32U))))) 
                                                 << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfff7ffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x33U))))) 
                                                 << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffefffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x34U))))) 
                                                 << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffdfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x35U))))) 
                                                 << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffbfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x36U))))) 
                                                 << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xff7fffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x37U))))) 
                                                 << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfeffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x38U))))) 
                                                 << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfdffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x39U))))) 
                                                 << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfbffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3aU))))) 
                                                 << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xf7ffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3bU))))) 
                                                 << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xefffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3cU))))) 
                                                 << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xdfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3dU))))) 
                                                 << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xbfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3eU))))) 
                                                 << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0x7fffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2) 
               ^ (IData)(vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2)))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__opdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__opdata2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((0x4000U & vlSelf->instr)) {
        vlSelf->top__DOT__alu_inst__DOT__br_result 
            = ((0x2000U & vlSelf->instr) ? ((0x1000U 
                                             & vlSelf->instr)
                                             ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                >= vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                             : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                < vlSelf->top__DOT__alu_inst__DOT__opdata2))
                : ((0x1000U & vlSelf->instr) ? VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                    : VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)));
        vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
            = ((0x2000U & vlSelf->instr) ? ((0x1000U 
                                             & vlSelf->instr)
                                             ? VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2))
                                             : VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                : ((0x1000U & vlSelf->instr) ? VL_DIV_III(32, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2))
                    : VL_DIVS_III(32, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2))));
    } else {
        vlSelf->top__DOT__alu_inst__DOT__br_result 
            = ((~ (vlSelf->instr >> 0xdU)) & ((0x1000U 
                                               & vlSelf->instr)
                                               ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                  != vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                               : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                  == vlSelf->top__DOT__alu_inst__DOT__opdata2)));
        vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
            = ((0x2000U & vlSelf->instr) ? 0U : ((0x1000U 
                                                  & vlSelf->instr)
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
                               ? VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1), 
                                                (0x1fU 
                                                 & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
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
                                  >> (0x1fU & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
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
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__alu_inst__DOT__opdata1, 
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
                                                       >> 
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
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__br_result 
            = vlSelf->top__DOT__alu_inst__DOT__br_result;
    }
    vlSelf->top__DOT__br_asrt = ((IData)(vlSelf->top__DOT__alu_inst__DOT__br_result) 
                                 & (0x63U == (0x7fU 
                                              & vlSelf->instr)));
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__wmlgc_result 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wmlgc_result) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__wmlgc_result));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__wlgc_result 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__wlgc_result) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__wlgc_result));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_inst__DOT__lgc_result) 
               ^ (IData)(vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result)))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__alu_inst__DOT__lgc_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__lgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__lgc_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__multu[0U] 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[0U]) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__multu[0U]));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__multu[1U] 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[1U]) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__multu[1U]));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1817]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1818]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1819]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1820]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1821]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]))) {
        ++(vlSymsp->__Vcoverage[1822]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__multu[2U] 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1823]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[2U]) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__multu[2U]));
    }
    if ((1U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1824]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (1U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((2U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1825]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (2U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((4U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1826]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (4U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((8U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
               ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (8U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x10U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x20U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x40U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                  ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x80U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x100U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x200U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x400U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                   ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x800U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x1000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x2000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x4000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                    ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x8000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x10000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x20000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x40000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                     ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x80000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x100000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x200000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x400000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                      ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x800000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x1000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x2000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x4000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                       ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x8000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x10000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x20000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
                        ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x40000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    if (((vlSelf->top__DOT__alu_inst__DOT__multu[3U] 
          ^ vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__multu[3U]) 
               | (0x80000000U & vlSelf->top__DOT__alu_inst__DOT__multu[3U]));
    }
    vlSelf->top__DOT__alu_inst__DOT__mlgc_result = 
        ((0x4000U & vlSelf->instr) ? ((0x2000U & vlSelf->instr)
                                       ? ((0x1000U 
                                           & vlSelf->instr)
                                           ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                           : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2))
                                       : ((0x1000U 
                                           & vlSelf->instr)
                                           ? VL_DIV_QQQ(64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                           : VL_DIVS_QQQ(64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)))
          : ((0x2000U & vlSelf->instr) ? ((0x1000U 
                                           & vlSelf->instr)
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
              : ((0x1000U & vlSelf->instr) ? (((QData)((IData)(
                                                               vlSelf->top__DOT__alu_inst__DOT__multu[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__alu_inst__DOT__multu[0U])))
                  : VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2))));
    if (((IData)(vlSelf->top__DOT__br_asrt) ^ (IData)(vlSelf->top__DOT____Vtogcov__br_asrt))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->top__DOT____Vtogcov__br_asrt = vlSelf->top__DOT__br_asrt;
    }
    vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en = (
                                                   ((0x67U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->instr)) 
                                                    & (0x6fU 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->instr))) 
                                                   & (~ (IData)(vlSelf->top__DOT__br_asrt)));
    if ((1U & ((IData)(vlSelf->top__DOT__alu_inst__DOT__mlgc_result) 
               ^ (IData)(vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__alu_inst__DOT__mlgc_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_inst__DOT__mlgc_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__alu_inst__DOT____Vtogcov__mlgc_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1919]);
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
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__snxt_en 
            = vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en;
    }
    if (((0ULL == vlSelf->top__DOT__result) ^ (IData)(vlSelf->top__DOT____Vtogcov__zero))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->top__DOT____Vtogcov__zero = (0ULL == vlSelf->top__DOT__result);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__result) ^ (IData)(vlSelf->top__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffffeULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | (IData)((IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->top__DOT__result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffffdULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 1U))))) 
                                                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffffbULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 2U))))) 
                                                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffff7ULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 3U))))) 
                                                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffffefULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 4U))))) 
                                                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffffdfULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 5U))))) 
                                                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffffbfULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 6U))))) 
                                                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffff7fULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 7U))))) 
                                                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffeffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 8U))))) 
                                                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffdffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 9U))))) 
                                                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffffbffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0xaU))))) 
                                                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffff7ffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0xbU))))) 
                                                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffefffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0xcU))))) 
                                                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffdfffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0xdU))))) 
                                                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffffbfffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0xeU))))) 
                                                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffff7fffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0xfU))))) 
                                                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffeffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x10U))))) 
                                                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffdffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x11U))))) 
                                                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffffbffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x12U))))) 
                                                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffff7ffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x13U))))) 
                                                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffefffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x14U))))) 
                                                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffdfffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x15U))))) 
                                                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffffbfffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x16U))))) 
                                                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffff7fffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x17U))))) 
                                                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffeffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x18U))))) 
                                                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffdffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x19U))))) 
                                                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffffbffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x1aU))))) 
                                                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffff7ffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x1bU))))) 
                                                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffefffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x1cU))))) 
                                                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffdfffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x1dU))))) 
                                                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffffbfffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x1eU))))) 
                                                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffff7fffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x1fU))))) 
                                                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffeffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x20U))))) 
                                                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffdffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x21U))))) 
                                                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffffbffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x22U))))) 
                                                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffff7ffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x23U))))) 
                                                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffefffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x24U))))) 
                                                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffdfffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x25U))))) 
                                                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffffbfffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x26U))))) 
                                                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffff7fffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x27U))))) 
                                                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffeffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x28U))))) 
                                                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffdffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x29U))))) 
                                                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffffbffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x2aU))))) 
                                                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffff7ffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x2bU))))) 
                                                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffefffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x2cU))))) 
                                                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffdfffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x2dU))))) 
                                                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffffbfffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x2eU))))) 
                                                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffff7fffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x2fU))))) 
                                                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffeffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x30U))))) 
                                                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffdffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x31U))))) 
                                                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfffbffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x32U))))) 
                                                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfff7ffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x33U))))) 
                                                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffefffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x34U))))) 
                                                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffdfffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x35U))))) 
                                                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xffbfffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x36U))))) 
                                                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xff7fffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x37U))))) 
                                                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfeffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x38U))))) 
                                                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfdffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x39U))))) 
                                                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xfbffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x3aU))))) 
                                                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xf7ffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x3bU))))) 
                                                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xefffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x3cU))))) 
                                                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xdfffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x3dU))))) 
                                                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->top__DOT____Vtogcov__addr = ((0xbfffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__result 
                                                                            >> 0x3eU))))) 
                                                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__addr 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->top__DOT____Vtogcov__addr = ((0x7fffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__addr) 
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
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 2U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 3U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 4U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 5U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 6U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 7U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 8U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 9U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__result >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__jalr_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
        = ((((0xfffffffffffffffeULL & ((- (QData)((IData)(
                                                          (0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->instr))))) 
                                       & vlSelf->top__DOT__result)) 
             | ((- (QData)((IData)((0x6fU == (0x7fU 
                                              & vlSelf->instr))))) 
                & vlSelf->top__DOT__result)) | ((- (QData)((IData)(vlSelf->top__DOT__br_asrt))) 
                                                & vlSelf->top__DOT__pc_gen_inst__DOT__br_pc)) 
           | ((- (QData)((IData)(vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en))) 
              & vlSelf->snxt_pc));
    if ((1U & ((IData)(vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg) 
               ^ (IData)(vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg)))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__pc_gen_inst__DOT____Vtogcov__dnxt_pc_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__pc_gen_inst__DOT__dnxt_pc_reg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
