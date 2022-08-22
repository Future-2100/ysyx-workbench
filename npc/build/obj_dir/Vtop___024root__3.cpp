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
    vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en 
        = ((((IData)(vlSelf->RVALID) & (0U == (IData)(vlSelf->RRESP))) 
            & (1U == (IData)(vlSelf->RID))) & (IData)(vlSelf->RLAST));
    vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en 
        = ((((IData)(vlSelf->RVALID) & (0U == (IData)(vlSelf->RRESP))) 
            & (0U == (IData)(vlSelf->RID))) & (IData)(vlSelf->RLAST));
    vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn 
        = ((IData)(vlSelf->rstn) & (~ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__delay_rstn)));
    vlSelf->top__DOT__mmu_inst__DOT__load_data = ((
                                                   ((((((- (QData)((IData)(
                                                                           (0U 
                                                                            == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                        & (((- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->RDATA 
                                                                                >> 7U)))))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->RDATA)))))) 
                                                       | ((- (QData)((IData)(
                                                                             (1U 
                                                                              == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                          & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->RDATA 
                                                                                >> 0xfU)))))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(vlSelf->RDATA))))))) 
                                                      | ((- (QData)((IData)(
                                                                            (2U 
                                                                             == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                         & (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->RDATA 
                                                                                >> 0x1fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->RDATA))))) 
                                                     | ((- (QData)((IData)(
                                                                           (3U 
                                                                            == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                        & vlSelf->RDATA)) 
                                                    | ((- (QData)((IData)(
                                                                          (4U 
                                                                           == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                       & (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->RDATA)))))) 
                                                   | ((- (QData)((IData)(
                                                                         (5U 
                                                                          == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                      & (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->RDATA)))))) 
                                                  | ((- (QData)((IData)(
                                                                        (6U 
                                                                         == (IData)(vlSelf->top__DOT__exu_funct3))))) 
                                                     & (QData)((IData)(vlSelf->RDATA))));
    if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__rdata_valid))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelf->top__DOT____Vtogcov__rdata_valid = vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en;
    }
    if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__instr_valid))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT____Vtogcov__instr_valid = vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en;
    }
    vlSelf->top__DOT__update = ((IData)(vlSelf->top__DOT__exu_load_en)
                                 ? (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en)
                                 : (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en));
    if (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn) 
         ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__posedge_rstn))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__posedge_rstn 
            = vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn;
    }
    vlSelf->top__DOT__axi_interface_inst__DOT__nstate 
        = ((8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
            ? ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                ? 0U : ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                         ? 0U : ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                                  ? 0U : ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en)
                                           ? (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_data_en) 
                                               & (IData)(vlSelf->top__DOT__exu_load_en))
                                               ? 4U
                                               : 1U)
                                           : 8U))))
            : ((4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                ? ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                    ? 0U : ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                             ? 0U : ((IData)(vlSelf->ARREADY)
                                      ? 8U : 4U))) : 
               ((2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                 ? ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                     ? 0U : ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en)
                              ? (((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__rresp_instr_en) 
                                  & (IData)(vlSelf->top__DOT__exu_load_en))
                                  ? 4U : 1U) : 2U))
                 : ((1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__cstate))
                     ? ((IData)(vlSelf->ARREADY) ? 2U
                         : 1U) : ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn)
                                   ? 1U : 0U)))));
    if ((1U & ((IData)(vlSelf->top__DOT__mmu_inst__DOT__load_data) 
               ^ (IData)(vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data)))) {
        ++(vlSymsp->__Vcoverage[3969]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mmu_inst__DOT__load_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3970]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3971]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3972]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3973]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3974]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3975]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3976]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3977]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3978]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3979]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3980]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3981]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3982]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3983]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3984]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3985]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3986]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3987]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3988]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3989]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3990]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3991]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3992]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3993]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3994]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3995]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3996]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3997]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3998]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3999]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4000]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4001]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4002]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4025]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4026]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mmu_inst__DOT____Vtogcov__load_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mmu_inst__DOT__load_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__update) ^ (IData)(vlSelf->top__DOT____Vtogcov__update))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT____Vtogcov__update = vlSelf->top__DOT__update;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)))) {
        ++(vlSymsp->__Vcoverage[4243]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate 
            = ((0xeU & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)) 
               | (1U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)))) {
        ++(vlSymsp->__Vcoverage[4244]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate 
            = ((0xdU & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)) 
               | (2U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)))) {
        ++(vlSymsp->__Vcoverage[4245]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate 
            = ((0xbU & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)) 
               | (4U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate) 
               ^ (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)))) {
        ++(vlSymsp->__Vcoverage[4246]);
        vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate 
            = ((7U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT____Vtogcov__nstate)) 
               | (8U & (IData)(vlSelf->top__DOT__axi_interface_inst__DOT__nstate)));
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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
    if (VL_UNLIKELY((vlSelf->RID & 0xf0U))) {
        Verilated::overWidthError("RID");}
    if (VL_UNLIKELY((vlSelf->RRESP & 0xfcU))) {
        Verilated::overWidthError("RRESP");}
    if (VL_UNLIKELY((vlSelf->RLAST & 0xfeU))) {
        Verilated::overWidthError("RLAST");}
    if (VL_UNLIKELY((vlSelf->RVALID & 0xfeU))) {
        Verilated::overWidthError("RVALID");}
}
#endif  // VL_DEBUG
