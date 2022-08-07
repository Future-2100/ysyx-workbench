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
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result)))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3470]);
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
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__9\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0;
    // Body
    __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v0 = 0U;
    __Vdlyvset__top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr__v1 = 0U;
    ++(vlSymsp->__Vcoverage[1896]);
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
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__10\n"); );
    // Body
    vlSelf->top__DOT__idu_inst__DOT__gpr_data1 = vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr
        [(0x1fU & (vlSelf->top__DOT__ifu_instr >> 0xfU))];
    vlSelf->top__DOT__idu_inst__DOT__gpr_data2 = vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr
        [(0x1fU & (vlSelf->top__DOT__ifu_instr >> 0x14U))];
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
        Vtop___024root___sequent__TOP__8(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___multiclk__TOP__10(vlSelf);
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
