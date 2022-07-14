// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    // Body
    VL_WRITEF("[%0t] Tracing to build/logs/top.vcd...\n\n",
              64,VL_TIME_UNITED_Q(1),-12);
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x2f746f70U;
    __Vtemp1[2U] = 0x6c6f6773U;
    __Vtemp1[3U] = 0x696c642fU;
    __Vtemp1[4U] = 0x6275U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->ebreak = (IData)(((0x100070U == (0x1f0007cU 
                                             & vlSelf->inst)) 
                              & (0U == (vlSelf->inst 
                                        >> 0x19U))));
    vlSelf->top__DOT__wrglr_op = ((((6U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))) 
                                    | (0xeU == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)))) 
                                   << 4U) | ((8U & 
                                              (vlSelf->inst 
                                               >> 0x1bU)) 
                                             | (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU))));
    vlSelf->top__DOT__sb = (IData)((0x20U == (0x707cU 
                                              & vlSelf->inst)));
    vlSelf->top__DOT__sh = (IData)((0x1020U == (0x707cU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__sw = (IData)((0x2020U == (0x707cU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__sd = (IData)((0x3020U == (0x707cU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__immop_en 
        = ((4U == (0x1fU & (vlSelf->inst >> 2U))) & 
           (1U != (3U & (vlSelf->inst >> 0xcU))));
    vlSelf->gpr1 = vlSelf->top__DOT__regfile_inst__DOT__gpr
        [1U];
    vlSelf->top__DOT__memory_inst__DOT__rdata = (((QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata4)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata3) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata2) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata1))))));
    vlSelf->top__DOT__alu_inst__DOT__opdata1 = ((5U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 2U)))
                                                 ? vlSelf->pc
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU)))
                                                  ? 0ULL
                                                  : 
                                                 vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                 [(0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))]));
    vlSelf->top__DOT__rdata2 = ((0U == (0x1fU & (vlSelf->inst 
                                                 >> 0x14U)))
                                 ? 0ULL : vlSelf->top__DOT__regfile_inst__DOT__gpr
                                [(0x1fU & (vlSelf->inst 
                                           >> 0x14U))]);
    vlSelf->top__DOT__memory_inst__DOT__wr_en = (((
                                                   ((IData)(vlSelf->top__DOT__sb) 
                                                    | (IData)(vlSelf->top__DOT__sh)) 
                                                   | (IData)(vlSelf->top__DOT__sw)) 
                                                  | (IData)(vlSelf->top__DOT__sd)) 
                                                 & (IData)(vlSelf->rstn));
    vlSelf->top__DOT__rglr_op = (0xfU & ((((- (IData)(
                                                      (0xdU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->inst 
                                                           >> 2U))))) 
                                           | ((- (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->inst 
                                                              >> 2U))))) 
                                              & ((8U 
                                                  & (vlSelf->inst 
                                                     >> 0x1bU)) 
                                                 | (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU))))) 
                                          | (7U & (
                                                   (- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en))) 
                                                   & (vlSelf->inst 
                                                      >> 0xcU)))) 
                                         | ((- (IData)((IData)(
                                                               (0x1010U 
                                                                == 
                                                                (0x307cU 
                                                                 & vlSelf->inst))))) 
                                            & ((8U 
                                                & (vlSelf->inst 
                                                   >> 0x1bU)) 
                                               | (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))))));
    vlSelf->top__DOT__imm = ((((((- (QData)((IData)(
                                                    ((((0x19U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->inst 
                                                            >> 2U))) 
                                                       | (0U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->inst 
                                                              >> 2U)))) 
                                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                                     | (6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->inst 
                                                            >> 2U))))))) 
                                 & (((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)))))) 
                                | ((- (QData)((IData)(
                                                      (8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->inst 
                                                           >> 2U)))))) 
                                   & (((- (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU)))) 
                                       << 0xbU) | (QData)((IData)(
                                                                  ((0x7e0U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->inst 
                                                                         >> 7U)))))))) 
                               | ((- (QData)((IData)(
                                                     (0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 2U)))))) 
                                  & (((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & (vlSelf->inst 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->inst 
                                                                           >> 7U))))))))) 
                              | ((- (QData)((IData)(
                                                    ((0xdU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 2U))) 
                                                     | (5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->inst 
                                                            >> 2U))))))) 
                                 & (((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x1fU) | (QData)((IData)(
                                                                 (0x7ffff000U 
                                                                  & vlSelf->inst)))))) 
                             | ((- (QData)((IData)(
                                                   (0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 2U)))))) 
                                & (((- (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU)))) 
                                    << 0x14U) | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->inst) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->inst 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U)))))))));
    vlSelf->top__DOT__alu_inst__DOT__opdata2 = ((((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en) 
                                                  | (6U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->inst 
                                                         >> 2U)))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 2U))))
                                                 ? vlSelf->top__DOT__imm
                                                 : vlSelf->top__DOT__rdata2);
    vlSelf->top__DOT__pc_gen_inst__DOT__jalbr_en = 
        ((0x1bU == (0x1fU & (vlSelf->inst >> 2U))) 
         | (((0x4000U & vlSelf->inst) ? ((0x2000U & vlSelf->inst)
                                          ? ((0x1000U 
                                              & vlSelf->inst)
                                              ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 >= vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                              : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 < vlSelf->top__DOT__alu_inst__DOT__opdata2))
                                          : ((0x1000U 
                                              & vlSelf->inst)
                                              ? VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                              : VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)))
              : ((~ (vlSelf->inst >> 0xdU)) & ((0x1000U 
                                                & vlSelf->inst)
                                                ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                   != vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                                : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                   == vlSelf->top__DOT__alu_inst__DOT__opdata2)))) 
            & (0x18U == (0x1fU & (vlSelf->inst >> 2U)))));
    vlSelf->top__DOT__alu_inst__DOT__rglr_rslt = ((8U 
                                                   & (IData)(vlSelf->top__DOT__rglr_op))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__rglr_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__rglr_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__rglr_op))
                                                      ? vlSelf->top__DOT__alu_inst__DOT__opdata1
                                                      : 0ULL)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__rglr_op))
                                                      ? 
                                                     (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                      >> 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                      : 0ULL))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__rglr_op))
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__rglr_op))
                                                      ? 0ULL
                                                      : 
                                                     (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                      - vlSelf->top__DOT__alu_inst__DOT__opdata2))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__rglr_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__rglr_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__rglr_op))
                                                      ? 
                                                     (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                      & vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                                      : 
                                                     (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                      | vlSelf->top__DOT__alu_inst__DOT__opdata2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__rglr_op))
                                                      ? 
                                                     (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                      << 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                      : 
                                                     (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                      ^ vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__rglr_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__rglr_op))
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
                                                      & (IData)(vlSelf->top__DOT__rglr_op))
                                                      ? 
                                                     (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                      << 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                      : 
                                                     (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                      + vlSelf->top__DOT__alu_inst__DOT__opdata2)))));
    vlSelf->top__DOT__alu_inst__DOT__wrglr_rslt = (
                                                   (0x10U 
                                                    & (IData)(vlSelf->top__DOT__wrglr_op))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__wrglr_op))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__wrglr_op))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__wrglr_op))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__wrglr_op))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                                        >> 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__wrglr_op))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__wrglr_op))
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                                        - (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__wrglr_op))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__wrglr_op))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__wrglr_op))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                                        << 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__wrglr_op))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__wrglr_op))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                                        << 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1) 
                                                        + (IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2))))))
                                                    : 0U);
    vlSelf->top__DOT__result = (((- (QData)((IData)(
                                                    ((((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en) 
                                                       | (0xcU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->inst 
                                                              >> 2U)))) 
                                                      | (5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 2U)))) 
                                                     | (0xdU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->inst 
                                                            >> 2U))))))) 
                                 & vlSelf->top__DOT__alu_inst__DOT__rglr_rslt) 
                                | ((- (QData)((IData)(
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->inst 
                                                            >> 2U))) 
                                                       | (0xeU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->inst 
                                                              >> 2U))))))) 
                                   & (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->top__DOT__alu_inst__DOT__wrglr_rslt 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu_inst__DOT__wrglr_rslt)))));
    vlSelf->top__DOT__regfile_inst__DOT__wdata = ((
                                                   ((- (QData)((IData)(
                                                                       (0U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->inst 
                                                                            >> 2U)))))) 
                                                    & ((((((((- (QData)((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x707cU 
                                                                                & vlSelf->inst))))) 
                                                             & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                                >> 7U)))))) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))) 
                                                            | ((- (QData)((IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x707cU 
                                                                                & vlSelf->inst))))) 
                                                               & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                                   << 0x10U) 
                                                                  | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))))) 
                                                           | ((- (QData)((IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x707cU 
                                                                                & vlSelf->inst))))) 
                                                              & (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))) 
                                                          | ((- (QData)((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x707cU 
                                                                                & vlSelf->inst))))) 
                                                             & vlSelf->top__DOT__memory_inst__DOT__rdata)) 
                                                         | ((- (QData)((IData)(
                                                                               (0x4000U 
                                                                                == 
                                                                                (0x707cU 
                                                                                & vlSelf->inst))))) 
                                                            & (QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))) 
                                                        | ((- (QData)((IData)(
                                                                              (0x5000U 
                                                                               == 
                                                                               (0x707cU 
                                                                                & vlSelf->inst))))) 
                                                           & (QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))) 
                                                       | ((- (QData)((IData)(
                                                                             (0x6000U 
                                                                              == 
                                                                              (0x707cU 
                                                                               & vlSelf->inst))))) 
                                                          & (QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))) 
                                                   | ((- (QData)((IData)(
                                                                         ((0x1bU 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->inst 
                                                                               >> 2U))) 
                                                                          | (0x19U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->inst 
                                                                                >> 2U))))))) 
                                                      & (4ULL 
                                                         + vlSelf->pc))) 
                                                  | ((- (QData)((IData)(
                                                                        ((0U 
                                                                          != 
                                                                          (0x1fU 
                                                                           & (vlSelf->inst 
                                                                              >> 2U))) 
                                                                         & (~ 
                                                                            ((0x1bU 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelf->inst 
                                                                                >> 2U))) 
                                                                             | (0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 2U))))))))) 
                                                     & vlSelf->top__DOT__result));
    vlSelf->dnxt_pc = (((0xfffffffffffffffeULL & ((- (QData)((IData)(
                                                                     (0x19U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->inst 
                                                                          >> 2U)))))) 
                                                  & vlSelf->top__DOT__result)) 
                        | ((- (QData)((IData)(vlSelf->top__DOT__pc_gen_inst__DOT__jalbr_en))) 
                           & (vlSelf->pc + vlSelf->top__DOT__imm))) 
                       | ((- (QData)((IData)(((~ (IData)(vlSelf->top__DOT__pc_gen_inst__DOT__jalbr_en)) 
                                              & (0x19U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 2U))))))) 
                          & (4ULL + vlSelf->pc)));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rstn = 0;
    vlSelf->ebreak = 0;
    vlSelf->dnxt_pc = 0;
    vlSelf->pc = 0;
    vlSelf->gpr1 = 0;
    vlSelf->inst = 0;
    vlSelf->top__DOT__imm = 0;
    vlSelf->top__DOT__result = 0;
    vlSelf->top__DOT__rdata2 = 0;
    vlSelf->top__DOT__rglr_op = 0;
    vlSelf->top__DOT__wrglr_op = 0;
    vlSelf->top__DOT__sb = 0;
    vlSelf->top__DOT__sh = 0;
    vlSelf->top__DOT__sw = 0;
    vlSelf->top__DOT__sd = 0;
    vlSelf->top__DOT__pc_gen_inst__DOT__jalbr_en = 0;
    vlSelf->top__DOT__regfile_inst__DOT__wdata = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regfile_inst__DOT__gpr[__Vi0] = 0;
    }
    vlSelf->top__DOT__regfile_inst__DOT__i = 0;
    vlSelf->top__DOT__alu_inst__DOT__opdata1 = 0;
    vlSelf->top__DOT__alu_inst__DOT__opdata2 = 0;
    vlSelf->top__DOT__alu_inst__DOT__rglr_rslt = 0;
    vlSelf->top__DOT__alu_inst__DOT__wrglr_rslt = 0;
    vlSelf->top__DOT__memory_inst__DOT__wr_en = 0;
    vlSelf->top__DOT__memory_inst__DOT__rdata = 0;
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__ram1[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__ram2[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__ram3[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__ram4[__Vi0] = 0;
    }
    vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata1 = 0;
    vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata2 = 0;
    vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata3 = 0;
    vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata4 = 0;
    vlSelf->top__DOT__controlor_inst__DOT__immop_en = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
