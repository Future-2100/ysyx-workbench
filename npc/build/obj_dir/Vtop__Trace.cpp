// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgIData(oldp+62,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        }
        tracep->chgBit(oldp+63,(vlSelf->clk));
        tracep->chgBit(oldp+64,(vlSelf->rstn));
        tracep->chgQData(oldp+65,(vlSelf->pc),64);
        tracep->chgIData(oldp+67,(vlSelf->inst),32);
        tracep->chgQData(oldp+68,(vlSelf->gpr1),64);
        tracep->chgBit(oldp+70,(vlSelf->ebreak));
        tracep->chgQData(oldp+71,(((0U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 0xfU)))
                                    ? 0ULL : ((0x1eU 
                                               >= (0x1fU 
                                                   & ((vlSelf->inst 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                               ? vlSelf->top__DOT__regfile_inst__DOT__gpr
                                              [(0x1fU 
                                                & ((vlSelf->inst 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                               : 0ULL))),64);
        tracep->chgQData(oldp+73,(((0U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 0x14U)))
                                    ? 0ULL : ((0x1eU 
                                               >= (0x1fU 
                                                   & ((vlSelf->inst 
                                                       >> 0x14U) 
                                                      - (IData)(1U))))
                                               ? vlSelf->top__DOT__regfile_inst__DOT__gpr
                                              [(0x1fU 
                                                & ((vlSelf->inst 
                                                    >> 0x14U) 
                                                   - (IData)(1U)))]
                                               : 0ULL))),64);
        tracep->chgBit(oldp+75,((0x13U == (vlSelf->inst 
                                           >> 0x19U))));
        tracep->chgQData(oldp+76,(((- (QData)((IData)(
                                                      (0U 
                                                       == 
                                                       (7U 
                                                        & ((- (IData)(
                                                                      (0x13U 
                                                                       == 
                                                                       (vlSelf->inst 
                                                                        >> 0x19U)))) 
                                                           & vlSelf->inst)))))) 
                                   & (((0U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU)))
                                        ? 0ULL : ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((vlSelf->inst 
                                                        >> 0xfU) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                  [
                                                  (0x1fU 
                                                   & ((vlSelf->inst 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                   : 0ULL)) 
                                      + ((0x13U == 
                                          (vlSelf->inst 
                                           >> 0x19U))
                                          ? ((- (QData)((IData)(
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
                                          : ((0U == 
                                              (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0x14U)))
                                              ? 0ULL
                                              : ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->inst 
                                                       >> 0x14U) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                 [(0x1fU 
                                                   & ((vlSelf->inst 
                                                       >> 0x14U) 
                                                      - (IData)(1U)))]
                                                  : 0ULL)))))),64);
        tracep->chgQData(oldp+78,(((- (QData)((IData)(
                                                      (0x13U 
                                                       == 
                                                       (vlSelf->inst 
                                                        >> 0x19U))))) 
                                   & (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))) 
                                                                     << 0xbU) 
                                                                    | (0x7ffU 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U)))))))),64);
        tracep->chgCData(oldp+80,((7U & ((- (IData)(
                                                    (0x13U 
                                                     == 
                                                     (vlSelf->inst 
                                                      >> 0x19U)))) 
                                         & vlSelf->inst))),4);
        tracep->chgBit(oldp+81,((0ULL == ((- (QData)((IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & ((- (IData)(
                                                                             (0x13U 
                                                                              == 
                                                                              (vlSelf->inst 
                                                                               >> 0x19U)))) 
                                                                  & vlSelf->inst)))))) 
                                          & (((0U == 
                                               (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 0xfU)))
                                               ? 0ULL
                                               : ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((vlSelf->inst 
                                                        >> 0xfU) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                  [
                                                  (0x1fU 
                                                   & ((vlSelf->inst 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                   : 0ULL)) 
                                             + ((0x13U 
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
                                                   : 0ULL))))))));
        tracep->chgCData(oldp+82,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+83,((0x1fU & (vlSelf->inst 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+84,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgQData(oldp+85,((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((- (IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x1fU))) 
                                                                  << 0xbU) 
                                                                 | (0x7ffU 
                                                                    & (vlSelf->inst 
                                                                       >> 0x14U))))))),64);
        tracep->chgQData(oldp+87,(((0x13U == (vlSelf->inst 
                                              >> 0x19U))
                                    ? ((- (QData)((IData)(
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
                                    : ((0U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0x14U)))
                                        ? 0ULL : ((0x1eU 
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
                                                   : 0ULL)))),64);
        tracep->chgCData(oldp+89,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+90,((7U & vlSelf->inst)),3);
        tracep->chgCData(oldp+91,((vlSelf->inst >> 0x19U)),7);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
