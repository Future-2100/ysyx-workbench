// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP\n"); );
    // Variables
    // Body
    VL_FINISH_MT("/home/grand/ysyx-workbench/npc/vsrc/top.v", 90, "");
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->ebreak = (IData)((0x100073U == (0x10007fU 
                                            & vlSelf->inst)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0;
    // Body
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->top__DOT__regfile_inst__DOT__i = 0x20U;
    }
    __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0 = 0U;
    __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rstn) ? (4ULL + vlSelf->pc)
                   : 0x80000000ULL);
    if (vlSelf->rstn) {
        if (((0x13U == (vlSelf->inst >> 0x19U)) & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 7U))))) {
            vlSelf->top__DOT__regfile_inst__DOT____Vlvbound1 
                = ((- (QData)((IData)((0U == (7U & 
                                              ((- (IData)(
                                                          (0x13U 
                                                           == 
                                                           (vlSelf->inst 
                                                            >> 0x19U)))) 
                                               & vlSelf->inst)))))) 
                   & (vlSelf->top__DOT__rdata1 + vlSelf->top__DOT__alu_inst__DOT__opdata2));
            if ((0x1eU >= (0x1fU & ((vlSelf->inst >> 7U) 
                                    - (IData)(1U))))) {
                __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0 
                    = vlSelf->top__DOT__regfile_inst__DOT____Vlvbound1;
                __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0 = 1U;
                __Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0 
                    = (0x1fU & ((vlSelf->inst >> 7U) 
                                - (IData)(1U)));
            }
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
    }
    vlSelf->gpr1 = vlSelf->top__DOT__regfile_inst__DOT__gpr
        [0U];
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Body
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
                                                 (vlSelf->inst 
                                                  >> 0x19U))
                                                 ? 
                                                ((- (QData)((IData)(
                                                                    (0x13U 
                                                                     == 
                                                                     (vlSelf->inst 
                                                                      >> 0x19U))))) 
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rstn)) & (IData)(vlSelf->__Vclklast__TOP__rstn)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
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
