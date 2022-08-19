// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__9\n"); );
    // Body
    vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn 
        = ((IData)(vlSelf->rstn) & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__delay_rstn)));
    if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) 
         ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__posedge_rstn))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__posedge_rstn 
            = vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn;
    }
    vlSelf->top__DOT__axi_interface_inst__DOT__nstate 
        = ((0U == (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
            ? ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn)
                ? 1U : 0U) : ((1U == (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                               ? (((IData)(vlSelf->ARREADY) 
                                   & (~ (IData)(vlSelf->RVALID)))
                                   ? 2U : 1U) : ((2U 
                                                  == (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                                                  ? 
                                                 (((IData)(vlSelf->RVALID) 
                                                   & (0U 
                                                      == (IData)(vlSelf->RRESP)))
                                                   ? 1U
                                                   : 2U)
                                                  : 0U)));
    if ((1U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate 
            = ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)) 
               | (1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate 
            = ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)) 
               | (2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate)));
    }
}

void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__5(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__7(vlSelf);
        Vtop___024root___sequent__TOP__8(vlSelf);
    }
    Vtop___024root___combo__TOP__9(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->ARREADY & 0xfeU))) {
        Verilated::overWidthError("ARREADY");}
    if (VL_UNLIKELY((vlSelf->RRESP & 0xfcU))) {
        Verilated::overWidthError("RRESP");}
    if (VL_UNLIKELY((vlSelf->RVALID & 0xfeU))) {
        Verilated::overWidthError("RVALID");}
}
#endif  // VL_DEBUG
