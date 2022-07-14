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
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__pc_gen_inst__DOT__jalbr_en));
            tracep->chgQData(oldp+14,((0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__result)),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__regfile_inst__DOT__wdata),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
            tracep->chgIData(oldp+22,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
            tracep->chgIData(oldp+23,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__alu_inst__DOT__rglr_rslt),64);
            tracep->chgIData(oldp+26,(vlSelf->top__DOT__alu_inst__DOT__wrglr_rslt),32);
            tracep->chgBit(oldp+27,(((((IData)(vlSelf->top__DOT__sb) 
                                       | (IData)(vlSelf->top__DOT__sh)) 
                                      | (IData)(vlSelf->top__DOT__sw)) 
                                     | (IData)(vlSelf->top__DOT__sd))));
            tracep->chgBit(oldp+28,((((IData)(vlSelf->top__DOT__sh) 
                                      | (IData)(vlSelf->top__DOT__sw)) 
                                     | (IData)(vlSelf->top__DOT__sd))));
            tracep->chgBit(oldp+29,(((IData)(vlSelf->top__DOT__sw) 
                                     | (IData)(vlSelf->top__DOT__sd))));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__memory_inst__DOT__wr_en));
            tracep->chgSData(oldp+31,((0x1fffU & (IData)(
                                                         (vlSelf->top__DOT__result 
                                                          >> 3U)))),13);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__memory_inst__DOT__rdata),64);
            tracep->chgQData(oldp+34,((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                       >> 7U)))))) 
                                        << 8U) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))),64);
            tracep->chgQData(oldp+36,((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                       >> 0xfU)))))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))),64);
            tracep->chgQData(oldp+38,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))),64);
            tracep->chgQData(oldp+40,((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
            tracep->chgQData(oldp+42,((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
            tracep->chgQData(oldp+44,((QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))),64);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata1),8);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata2),8);
            tracep->chgSData(oldp+48,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata3),16);
            tracep->chgIData(oldp+49,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata4),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__regfile_inst__DOT__gpr[31]),64);
            tracep->chgIData(oldp+114,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        }
        tracep->chgBit(oldp+115,(vlSelf->clk));
        tracep->chgBit(oldp+116,(vlSelf->rstn));
        tracep->chgBit(oldp+117,(vlSelf->ebreak));
        tracep->chgQData(oldp+118,(vlSelf->dnxt_pc),64);
        tracep->chgQData(oldp+120,(vlSelf->pc),64);
        tracep->chgQData(oldp+122,(vlSelf->gpr1),64);
        tracep->chgIData(oldp+124,(vlSelf->inst),32);
        tracep->chgBit(oldp+125,((((0x4000U & vlSelf->inst)
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
        tracep->chgBit(oldp+126,((0x19U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgBit(oldp+127,((0x1bU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgQData(oldp+128,((4ULL + vlSelf->pc)),64);
        tracep->chgBit(oldp+130,((((((((((0xdU == (0x1fU 
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
        tracep->chgBit(oldp+131,((0U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgQData(oldp+132,(((((((((- (QData)((IData)(
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
        tracep->chgQData(oldp+134,(((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->top__DOT__regfile_inst__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))])),64);
        tracep->chgBit(oldp+136,(((((0x19U == (0x1fU 
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
        tracep->chgBit(oldp+137,((8U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+138,((0x18U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgBit(oldp+139,(((0xdU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))) 
                                  | (5U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))))));
        tracep->chgBit(oldp+140,((((4U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U))) 
                                   | (6U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (5U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))))));
        tracep->chgBit(oldp+141,((5U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgCData(oldp+142,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgBit(oldp+143,(((6U == (0x1fU & (vlSelf->inst 
                                                   >> 2U))) 
                                  | (0xeU == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))))));
        tracep->chgBit(oldp+144,(((((4U == (0x1fU & 
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
        tracep->chgBit(oldp+145,((IData)((0U == (0x707cU 
                                                 & vlSelf->inst)))));
        tracep->chgBit(oldp+146,((IData)((0x1000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+147,((IData)((0x2000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+148,((IData)((0x3000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+149,((IData)((0x4000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+150,((IData)((0x5000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+151,((IData)((0x6000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgQData(oldp+152,((vlSelf->pc + vlSelf->top__DOT__imm)),64);
        tracep->chgBit(oldp+154,(((~ (IData)(vlSelf->top__DOT__pc_gen_inst__DOT__jalbr_en)) 
                                  & (0x19U != (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgCData(oldp+155,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+156,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+157,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+158,(((0U != (0x1fU & (vlSelf->inst 
                                                   >> 2U))) 
                                  & (~ ((0x1bU == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 2U))) 
                                        | (0x19U == 
                                           (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))))))));
        tracep->chgBit(oldp+159,(((((((((((0xdU == 
                                           (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))) 
                                          | (5U == 
                                             (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U)))) 
                                         | (0x1bU == 
                                            (0x1fU 
                                             & (vlSelf->inst 
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
                                                  >> 2U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->inst 
                                             >> 7U))))));
        tracep->chgQData(oldp+160,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)))))),64);
        tracep->chgQData(oldp+162,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                ((0x7e0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+164,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+166,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x1fU) | (QData)((IData)(
                                                                 (0x7ffff000U 
                                                                  & vlSelf->inst))))),64);
        tracep->chgQData(oldp+168,((((- (QData)((IData)(
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
        tracep->chgBit(oldp+170,(((0x4000U & vlSelf->inst)
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
        tracep->chgCData(oldp+171,((0x1fU & (vlSelf->inst 
                                             >> 2U))),5);
        tracep->chgCData(oldp+172,((vlSelf->inst >> 0x19U)),7);
        tracep->chgBit(oldp+173,((0xdU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
        tracep->chgBit(oldp+174,((4U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+175,((0xcU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
        tracep->chgBit(oldp+176,((6U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+177,((0xeU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
        tracep->chgBit(oldp+178,(((5U != (0x1fU & (vlSelf->inst 
                                                   >> 2U))) 
                                  & (0xdU != (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))))));
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
    }
}
