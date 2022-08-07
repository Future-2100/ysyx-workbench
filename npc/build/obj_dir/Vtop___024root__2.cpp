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
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3535]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result));
    }
    if ((1U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3697]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffeU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (1U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((2U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3698]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffdU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (2U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((4U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3699]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffffbU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (4U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((8U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
               ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3700]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffff7U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (8U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3701]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffefU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3702]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffdfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3703]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffffbfU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x80U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                  ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3704]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffff7fU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x100U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffeffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x100U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x200U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3706]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffdffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x200U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x400U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffffbffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x400U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x800U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                   ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3708]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x800U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffefffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x1000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3710]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffdfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x2000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3711]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffffbfffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x4000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                    ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3712]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffff7fffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x8000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3713]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffeffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3714]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffdffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3715]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfffbffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                     ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffefffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x100000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffdfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x200000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xffbfffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x400000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                      ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xff7fffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x800000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfeffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x1000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfdffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x2000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xfbffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x4000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                       ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x8000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xefffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x10000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xdfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x20000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
                        ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0xbfffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x40000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if (((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result 
          ^ vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result 
            = ((0x7fffffffU & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result) 
               | (0x80000000U & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result)))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result) 
               ^ (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result)))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3374]);
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
        ++(vlSymsp->__Vcoverage[1826]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu_inst__DOT__alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu_inst__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exu_inst__DOT__alu_result 
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
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__7(vlSelf);
        Vtop___024root___sequent__TOP__8(vlSelf);
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
