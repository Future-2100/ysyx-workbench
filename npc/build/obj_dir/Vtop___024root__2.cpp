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
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or)))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and)))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
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
                & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl)) 
            | ((- (QData)((IData)((6U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
               & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or)) 
           | ((- (QData)((IData)((7U == (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode))))) 
              & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and));
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[0U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[1U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[2U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss[3U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[0U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[0U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[1U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[1U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[2U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu[3U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3535]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3536]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3537]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3538]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3539]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3541]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]))) {
        ++(vlSymsp->__Vcoverage[3542]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3543]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[0U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[0U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3544]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3545]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3546]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3547]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3548]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3549]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3550]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3551]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3553]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3554]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3555]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3556]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3557]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3558]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3559]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3560]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3561]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3562]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3563]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3564]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3565]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3566]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3567]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3568]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3569]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3570]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3571]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3572]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3573]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]))) {
        ++(vlSymsp->__Vcoverage[3574]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3575]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[1U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[1U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3576]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3577]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3578]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3579]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[2U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U]));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3636]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3637]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]))) {
        ++(vlSymsp->__Vcoverage[3638]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U] 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3639]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su[3U]) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U]));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
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
        ++(vlSymsp->__Vcoverage[4026]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4043]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4044]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4045]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4046]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4047]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4048]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4049]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4050]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4051]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4052]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4053]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4054]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4055]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[4056]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4057]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4243]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4244]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4245]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4246]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4247]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4248]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[4249]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4250]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result)))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result)))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3885]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3886]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3887]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3888]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3889]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3890]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3891]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3892]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3893]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3894]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3895]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3896]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__exu_inst__DOT__alu_result = (
                                                   ((((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_en))) 
                                                      & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result) 
                                                     | ((- (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_en))) 
                                                        & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result)) 
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
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
