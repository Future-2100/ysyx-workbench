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
    // Body
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl)))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra)))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or)))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3535]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3536]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3537]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3538]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3539]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3541]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3542]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3543]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3544]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3545]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3546]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3547]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3548]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3549]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3550]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3551]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3553]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3554]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3555]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3556]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3557]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3558]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3559]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3560]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and)))) {
        ++(vlSymsp->__Vcoverage[3561]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3562]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3563]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3564]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3565]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3566]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3567]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3568]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3569]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3570]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3571]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3572]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3573]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3574]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3575]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3576]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3577]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3578]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3579]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
        = ((((((((((- (QData)((IData)((0U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                   & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub) 
                  | ((- (QData)((IData)((1U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                     & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll)) 
                 | ((- (QData)((IData)((2U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                    & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt)) 
                | ((- (QData)((IData)((3U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                   & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu)) 
               | ((- (QData)((IData)((4U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
                  & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor)) 
              | ((- (QData)((IData)(((5U == (IData)(vlSelf->top__DOT__idu_funct3)) 
                                     & (~ ((IData)(vlSelf->top__DOT__idu_funct7) 
                                           >> 5U)))))) 
                 & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl)) 
             | ((- (QData)((IData)(((5U == (IData)(vlSelf->top__DOT__idu_funct3)) 
                                    & ((IData)(vlSelf->top__DOT__idu_funct7) 
                                       >> 5U))))) & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra)) 
            | ((- (QData)((IData)((6U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
               & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or)) 
           | ((- (QData)((IData)((7U == (IData)(vlSelf->top__DOT__idu_funct3))))) 
              & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and));
    if (((IData)(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs2) 
         ^ (IData)(vlSelf->top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs2))) {
        ++(vlSymsp->__Vcoverage[4155]);
        vlSelf->top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs2 
            = vlSelf->top__DOT__hazard_inst__DOT__hazard_rs2;
    }
    if (((IData)(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs1) 
         ^ (IData)(vlSelf->top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs1))) {
        ++(vlSymsp->__Vcoverage[4154]);
        vlSelf->top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs1 
            = vlSelf->top__DOT__hazard_inst__DOT__hazard_rs1;
    }
    vlSelf->top__DOT__hazard_nop = ((IData)(vlSelf->top__DOT__idu_load_en) 
                                    & ((IData)(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs1) 
                                       | (IData)(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs2)));
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result)))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3636]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3637]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3638]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3639]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3640]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3641]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3642]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3643]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3644]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3645]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3646]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3647]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3648]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3649]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3650]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3651]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3652]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3653]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3654]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3655]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3656]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3657]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3658]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3659]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3660]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3661]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3662]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3663]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3664]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3665]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3666]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3667]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3668]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3669]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3670]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3671]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3672]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3673]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3674]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3675]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3676]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3677]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3678]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3679]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3680]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3681]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3682]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3685]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3686]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3687]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3688]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_result = (
                                                   (((((- (QData)((IData)(vlSelf->top__DOT__idu_addop_en))) 
                                                       & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum) 
                                                      | ((- (QData)((IData)(vlSelf->top__DOT__idu_mop_en))) 
                                                         & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result)) 
                                                     | ((- (QData)((IData)(
                                                                           ((IData)(vlSelf->top__DOT__idu_iop_en) 
                                                                            | (IData)(vlSelf->top__DOT__idu_rop_en))))) 
                                                        & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result)) 
                                                    | ((- (QData)((IData)(vlSelf->top__DOT__idu_mwop_en))) 
                                                       & (((QData)((IData)(
                                                                           (- (IData)(
                                                                                (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result 
                                                                                >> 0x1fU))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result))))) 
                                                   | ((- (QData)((IData)(
                                                                         ((IData)(vlSelf->top__DOT__idu_iwop_en) 
                                                                          | (IData)(vlSelf->top__DOT__idu_rwop_en))))) 
                                                      & (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result)))));
    if (((IData)(vlSelf->top__DOT__hazard_nop) ^ (IData)(vlSelf->top__DOT____Vtogcov__hazard_stop))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT____Vtogcov__hazard_stop = vlSelf->top__DOT__hazard_nop;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result)))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__9\n"); );
    // Body
    vlSelf->dnxt_pc = ((IData)(vlSelf->top__DOT__jump_en)
                        ? vlSelf->top__DOT__exu_alu_result
                        : ((1U & ((IData)(vlSelf->top__DOT__hazard_nop) 
                                  | (~ (IData)(vlSelf->instr_valid))))
                            ? vlSelf->pc : vlSelf->snxt_pc));
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
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->instr_valid & 0xfeU))) {
        Verilated::overWidthError("instr_valid");}
}
#endif  // VL_DEBUG
