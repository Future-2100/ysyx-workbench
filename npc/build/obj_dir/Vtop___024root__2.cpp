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
    QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result;
    QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result;
    // Body
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl)))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra)))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or)))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and)))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
        = (((((((((((- (QData)((IData)((0U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                    & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sum) 
                   | ((- (QData)((IData)((8U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                      & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_dif)) 
                  | ((- (QData)((IData)((1U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                     & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sll)) 
                 | ((- (QData)((IData)((2U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                    & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_slt)) 
                | ((- (QData)((IData)((3U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                   & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sltu)) 
               | ((- (QData)((IData)((4U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                  & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor)) 
              | ((- (QData)((IData)((5U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                 & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl)) 
             | ((- (QData)((IData)((0xdU == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra)) 
            | ((- (QData)((IData)((6U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
               & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or)) 
           | ((- (QData)((IData)((7U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
              & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and));
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3535]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3536]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3537]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3538]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3539]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3541]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3542]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3543]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3544]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3545]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3546]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3547]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3548]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3549]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3550]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3551]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3553]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3554]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3555]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3556]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3557]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3558]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3559]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3560]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3561]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3562]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3563]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3564]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3565]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3566]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3567]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3568]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3569]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3570]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3571]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3572]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3573]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3574]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3575]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3576]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3577]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3578]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3579]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3636]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3637]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3638]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3639]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3640]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3641]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3642]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3643]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3644]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3645]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3646]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3647]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3648]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3649]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3650]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3651]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3652]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3653]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3654]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3655]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3656]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3657]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3658]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3659]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3660]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3661]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3662]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3663]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3664]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3665]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3666]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3667]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3668]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3669]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3670]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3671]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3672]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3673]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3674]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3675]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3676]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3677]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3678]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3679]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3680]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3681]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3682]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3685]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3686]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3687]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3688]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3689]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3690]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3691]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3692]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3693]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3694]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3695]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3696]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3697]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3698]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3699]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3700]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3701]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3702]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3703]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3704]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3706]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3708]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3710]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3711]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3712]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3713]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3714]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3715]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3744]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3745]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3746]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3747]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3748]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3749]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
        = (((((((((- (QData)((IData)((0U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                  & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U])))) 
                 | ((- (QData)((IData)((1U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                    & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]))))) 
                | ((- (QData)((IData)((2U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                   & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]))))) 
               | ((- (QData)((IData)((3U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                  & (((QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]))))) 
              | ((- (QData)((IData)((4U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                 & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_div)) 
             | ((- (QData)((IData)((5U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
                & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_divu)) 
            | ((- (QData)((IData)((6U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
               & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_rem)) 
           | ((- (QData)((IData)((7U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
              & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_divu));
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4196]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4197]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4198]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4379]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4380]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4381]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4382]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4383]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4384]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4385]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4386]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4387]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4388]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4389]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4390]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4391]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4392]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4393]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4394]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4395]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4396]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4397]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4398]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4399]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4400]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4401]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4402]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4403]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4404]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4405]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4406]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4407]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4408]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4409]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4410]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((1U & ((IData)(top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result)))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | (IData)((IData)((1U & (IData)(top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result)))));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result)))) {
        ++(vlSymsp->__Vcoverage[3961]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | (IData)((IData)((1U & (IData)(top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result)))));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3962]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3963]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3964]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3965]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3966]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3967]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3968]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3969]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3970]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3971]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3972]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3973]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3974]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3975]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3976]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3977]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3978]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3979]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3980]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3981]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3982]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3983]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3984]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3985]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3986]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3987]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3988]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3989]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3990]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3991]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3992]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3993]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3994]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3995]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3996]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3997]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3998]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3999]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4000]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4001]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4002]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_result = (
                                                   ((((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_en))) 
                                                      & top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result) 
                                                     | ((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_en))) 
                                                        & top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result)) 
                                                    | ((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_en))) 
                                                       & (((QData)((IData)(
                                                                           (- (IData)(
                                                                                (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                                                                                >> 0x1fU))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result))))) 
                                                   | ((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_en))) 
                                                      & (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result)))));
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result)))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
