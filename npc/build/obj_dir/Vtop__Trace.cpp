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
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__result),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__rdata2),64);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__rglr_op),4);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__wrglr_op),5);
            tracep->chgBit(oldp+8,((0ULL == vlSelf->top__DOT__result)));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__sb));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__sh));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__sw));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__sd));
            tracep->chgQData(oldp+13,((0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__result)),64);
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
            tracep->chgIData(oldp+19,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
            tracep->chgIData(oldp+20,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__alu_inst__DOT__rglr_rslt),64);
            tracep->chgIData(oldp+23,(vlSelf->top__DOT__alu_inst__DOT__wrglr_rslt),32);
            tracep->chgBit(oldp+24,(((((IData)(vlSelf->top__DOT__sb) 
                                       | (IData)(vlSelf->top__DOT__sh)) 
                                      | (IData)(vlSelf->top__DOT__sw)) 
                                     | (IData)(vlSelf->top__DOT__sd))));
            tracep->chgBit(oldp+25,((((IData)(vlSelf->top__DOT__sh) 
                                      | (IData)(vlSelf->top__DOT__sw)) 
                                     | (IData)(vlSelf->top__DOT__sd))));
            tracep->chgBit(oldp+26,(((IData)(vlSelf->top__DOT__sw) 
                                     | (IData)(vlSelf->top__DOT__sd))));
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__memory_inst__DOT__wr_en));
            tracep->chgSData(oldp+28,((0x1fffU & (IData)(
                                                         (vlSelf->top__DOT__result 
                                                          >> 3U)))),13);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata1),8);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata2),8);
            tracep->chgSData(oldp+31,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata3),16);
            tracep->chgIData(oldp+32,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata4),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgIData(oldp+95,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__memory_inst__DOT__rdata),64);
            tracep->chgQData(oldp+98,((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                       >> 7U)))))) 
                                        << 8U) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))),64);
            tracep->chgQData(oldp+100,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                        >> 0xfU)))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))),64);
            tracep->chgQData(oldp+102,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))),64);
            tracep->chgQData(oldp+104,((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
            tracep->chgQData(oldp+106,((QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
            tracep->chgQData(oldp+108,((QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))),64);
        }
        tracep->chgBit(oldp+110,(vlSelf->clk));
        tracep->chgBit(oldp+111,(vlSelf->rstn));
        tracep->chgBit(oldp+112,(vlSelf->ebreak));
        tracep->chgQData(oldp+113,(vlSelf->pc),64);
        tracep->chgQData(oldp+115,(vlSelf->gpr1),64);
        tracep->chgIData(oldp+117,(vlSelf->inst),32);
        tracep->chgBit(oldp+118,((((0x4000U & vlSelf->inst)
                                    ? ((0x2000U & vlSelf->inst)
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
                                    : ((~ (vlSelf->inst 
                                           >> 0xdU)) 
                                       & ((0x1000U 
                                           & vlSelf->inst)
                                           ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                              != vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                           : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                              == vlSelf->top__DOT__alu_inst__DOT__opdata2)))) 
                                  & (0x18U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+119,((0x19U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgBit(oldp+120,((0x1bU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgQData(oldp+121,((4ULL + vlSelf->pc)),64);
        tracep->chgBit(oldp+123,((((((((((0xdU == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 2U))) 
                                         | (5U == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 2U)))) 
                                        | (0x1bU == 
                                           (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))) 
                                       | (0x19U == 
                                          (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))) 
                                      | (0U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)))) 
                                     | (4U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U)))) 
                                    | (0xcU == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)))) 
                                   | (6U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (0xeU == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))))));
        tracep->chgBit(oldp+124,((0U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgQData(oldp+125,(((((((((- (QData)((IData)(
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
                                       & (QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
        tracep->chgQData(oldp+127,(((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0xfU)))
                                     ? 0ULL : ((0x1eU 
                                                >= 
                                                (0x1fU 
                                                 & ((vlSelf->inst 
                                                     >> 0xfU) 
                                                    - (IData)(1U))))
                                                ? vlSelf->top__DOT__regfile_inst__DOT__gpr
                                               [(0x1fU 
                                                 & ((vlSelf->inst 
                                                     >> 0xfU) 
                                                    - (IData)(1U)))]
                                                : 0ULL))),64);
        tracep->chgBit(oldp+129,(((((0x19U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))) 
                                    | (0U == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U)))) 
                                   | (4U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (6U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))))));
        tracep->chgBit(oldp+130,((8U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+131,((0x18U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgBit(oldp+132,(((0xdU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))) 
                                  | (5U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))))));
        tracep->chgBit(oldp+133,((((4U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U))) 
                                   | (6U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (5U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))))));
        tracep->chgBit(oldp+134,((5U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgCData(oldp+135,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgBit(oldp+136,(((6U == (0x1fU & (vlSelf->inst 
                                                   >> 2U))) 
                                  | (0xeU == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))))));
        tracep->chgBit(oldp+137,(((((4U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))) 
                                    | (0xcU == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)))) 
                                   | (5U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (0xdU == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))))));
        tracep->chgBit(oldp+138,((IData)((0U == (0x707cU 
                                                 & vlSelf->inst)))));
        tracep->chgBit(oldp+139,((IData)((0x1000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+140,((IData)((0x2000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+141,((IData)((0x3000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+142,((IData)((0x4000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+143,((IData)((0x5000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+144,((IData)((0x6000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+145,(((0x1bU == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))) 
                                  | (((0x4000U & vlSelf->inst)
                                       ? ((0x2000U 
                                           & vlSelf->inst)
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
                                       : ((~ (vlSelf->inst 
                                              >> 0xdU)) 
                                          & ((0x1000U 
                                              & vlSelf->inst)
                                              ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 != vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                              : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                 == vlSelf->top__DOT__alu_inst__DOT__opdata2)))) 
                                     & (0x18U == (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 2U)))))));
        tracep->chgQData(oldp+146,((vlSelf->pc + vlSelf->top__DOT__imm)),64);
        tracep->chgQData(oldp+148,((((0xfffffffffffffffeULL 
                                      & ((- (QData)((IData)(
                                                            (0x19U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 2U)))))) 
                                         & vlSelf->top__DOT__result)) 
                                     | ((- (QData)((IData)(
                                                           ((0x1bU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 2U))) 
                                                            | (((0x4000U 
                                                                 & vlSelf->inst)
                                                                 ? 
                                                                ((0x2000U 
                                                                  & vlSelf->inst)
                                                                  ? 
                                                                 ((0x1000U 
                                                                   & vlSelf->inst)
                                                                   ? 
                                                                  (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                                   >= vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                                                   : 
                                                                  (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                                   < vlSelf->top__DOT__alu_inst__DOT__opdata2))
                                                                  : 
                                                                 ((0x1000U 
                                                                   & vlSelf->inst)
                                                                   ? 
                                                                  VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                                                   : 
                                                                  VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                                                 : 
                                                                ((~ 
                                                                  (vlSelf->inst 
                                                                   >> 0xdU)) 
                                                                 & ((0x1000U 
                                                                     & vlSelf->inst)
                                                                     ? 
                                                                    (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                                     != vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                                                     : 
                                                                    (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                                                     == vlSelf->top__DOT__alu_inst__DOT__opdata2)))) 
                                                               & (0x18U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 2U)))))))) 
                                        & (vlSelf->pc 
                                           + vlSelf->top__DOT__imm))) 
                                    | (4ULL + vlSelf->pc))),64);
        tracep->chgCData(oldp+150,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+151,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+152,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgQData(oldp+153,(((((- (QData)((IData)(
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
                                        & (4ULL + vlSelf->pc))) 
                                    | vlSelf->top__DOT__result)),64);
        tracep->chgQData(oldp+155,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)))))),64);
        tracep->chgQData(oldp+157,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                ((0x7e0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+159,((((- (QData)((IData)(
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
                                                                          >> 7U)))))))),64);
        tracep->chgQData(oldp+161,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x1fU) | (QData)((IData)(
                                                                 (0x7ffff000U 
                                                                  & vlSelf->inst))))),64);
        tracep->chgQData(oldp+163,((((- (QData)((IData)(
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
                                                                           >> 0x14U)))))))),64);
        tracep->chgBit(oldp+165,(((0x4000U & vlSelf->inst)
                                   ? ((0x2000U & vlSelf->inst)
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
                                   : ((~ (vlSelf->inst 
                                          >> 0xdU)) 
                                      & ((0x1000U & vlSelf->inst)
                                          ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                             != vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                          : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                             == vlSelf->top__DOT__alu_inst__DOT__opdata2))))));
        tracep->chgCData(oldp+166,((0x1fU & (vlSelf->inst 
                                             >> 2U))),5);
        tracep->chgCData(oldp+167,((vlSelf->inst >> 0x19U)),7);
        tracep->chgBit(oldp+168,((0xdU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
        tracep->chgBit(oldp+169,((4U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+170,((0xcU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
        tracep->chgBit(oldp+171,((6U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+172,((0xeU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    }
}
