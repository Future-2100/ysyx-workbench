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
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__br_asrt));
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__rd_data2),64);
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__I_type));
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__U_type));
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__lgc_op),4);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__wlgc_op),5);
            tracep->chgBit(oldp+11,((0ULL == vlSelf->top__DOT__result)));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__lb));
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__lh));
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__lw));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__ld));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__lbu));
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__lhu));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__lwu));
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__sb));
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__sh));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__sw));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__sd));
            tracep->chgQData(oldp+23,((0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__result)),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__regfile_inst__DOT__wb_data),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
            tracep->chgIData(oldp+31,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
            tracep->chgIData(oldp+32,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__alu_inst__DOT__lgc_result),64);
            tracep->chgIData(oldp+35,(vlSelf->top__DOT__alu_inst__DOT__wlgc_result),32);
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__controlor_inst__DOT__immop_en));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__controlor_inst__DOT__immsf_en));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__controlor_inst__DOT__R_type));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__regfile_inst__DOT__gpr[31]),64);
            tracep->chgIData(oldp+105,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        }
        tracep->chgBit(oldp+106,(vlSelf->clk));
        tracep->chgBit(oldp+107,(vlSelf->rstn));
        tracep->chgQData(oldp+108,(vlSelf->a),64);
        tracep->chgBit(oldp+110,(vlSelf->ebreak));
        tracep->chgQData(oldp+111,(vlSelf->dnxt_pc),64);
        tracep->chgQData(oldp+113,(vlSelf->pc),64);
        tracep->chgIData(oldp+115,(vlSelf->inst),32);
        tracep->chgQData(oldp+116,(vlSelf->wdata),64);
        tracep->chgCData(oldp+118,(vlSelf->wlen),3);
        tracep->chgBit(oldp+119,(vlSelf->wen));
        tracep->chgBit(oldp+120,(vlSelf->ren));
        tracep->chgQData(oldp+121,(vlSelf->addr),64);
        tracep->chgQData(oldp+123,(vlSelf->rdata),64);
        tracep->chgBit(oldp+125,((0x19U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgBit(oldp+126,((0x1bU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgQData(oldp+127,((4ULL + vlSelf->pc)),64);
        tracep->chgBit(oldp+129,((((((((((((0xdU == 
                                            (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))) 
                                           | (5U == 
                                              (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U)))) 
                                          | (0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)))) 
                                         | (0x19U == 
                                            (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                        | (0U == (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 2U)))) 
                                       | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                     | (0xcU == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)))) 
                                    | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en)) 
                                  | (0xeU == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))))));
        tracep->chgBit(oldp+130,((0U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+131,(((0x1bU == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))) 
                                  | (0x19U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+132,(((((((((5U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U))) 
                                        | (0xdU == 
                                           (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))) 
                                       | (0xcU == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 2U)))) 
                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                     | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                    | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en)) 
                                  | (0xeU == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))))));
        tracep->chgQData(oldp+133,(((((((((- (QData)((IData)(vlSelf->top__DOT__lb))) 
                                          & (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->rdata)))))) 
                                         | ((- (QData)((IData)(vlSelf->top__DOT__lh))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->rdata 
                                                                               >> 0xfU)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata))))))) 
                                        | ((- (QData)((IData)(vlSelf->top__DOT__lw))) 
                                           & (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->rdata 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->rdata))))) 
                                       | ((- (QData)((IData)(vlSelf->top__DOT__ld))) 
                                          & vlSelf->rdata)) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__lbu))) 
                                         & (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->rdata)))))) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__lhu))) 
                                        & (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->rdata)))))) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__lwu))) 
                                       & (QData)((IData)(vlSelf->rdata))))),64);
        tracep->chgQData(oldp+135,(((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->top__DOT__regfile_inst__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))])),64);
        tracep->chgBit(oldp+137,((8U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+138,((0x18U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgBit(oldp+139,(((((IData)(vlSelf->top__DOT__I_type) 
                                    | (IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type)) 
                                   | (8U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (0x18U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+140,(((5U == (0x1fU & (vlSelf->inst 
                                                   >> 2U))) 
                                  | (0x1bU == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+141,((((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
                                   | (8U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (0x18U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+142,(((((IData)(vlSelf->top__DOT__I_type) 
                                    | (8U == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U)))) 
                                   | (IData)(vlSelf->top__DOT__U_type)) 
                                  | (0x1bU == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+143,((((((((((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en) 
                                         | (0xcU == 
                                            (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                        | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                       | (5U == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)))) 
                                      | (0xdU == (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 2U)))) 
                                     | (0x19U == (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 2U)))) 
                                    | (0x1bU == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)))) 
                                   | (0U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (8U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))))));
        tracep->chgBit(oldp+144,((((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en) 
                                   | (0xeU == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U)))) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en))));
        tracep->chgCData(oldp+145,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgQData(oldp+146,((vlSelf->pc + vlSelf->top__DOT__imm)),64);
        tracep->chgBit(oldp+148,((((0x19U != (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))) 
                                   & (0x1bU != (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)))) 
                                  & (~ (IData)(vlSelf->top__DOT__br_asrt)))));
        tracep->chgCData(oldp+149,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+150,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+151,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgQData(oldp+152,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)))))),64);
        tracep->chgQData(oldp+154,((((QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x19U))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 7U)))))),64);
        tracep->chgQData(oldp+156,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+158,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x1fU) | (QData)((IData)(
                                                                 (0x7ffff000U 
                                                                  & vlSelf->inst))))),64);
        tracep->chgQData(oldp+160,((((- (QData)((IData)(
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
        tracep->chgBit(oldp+162,(((0x4000U & vlSelf->inst)
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
        tracep->chgQData(oldp+163,((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->rdata 
                                                                    >> 7U)))))) 
                                     << 8U) | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->rdata)))))),64);
        tracep->chgQData(oldp+165,((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->rdata 
                                                                    >> 0xfU)))))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))))),64);
        tracep->chgQData(oldp+167,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->rdata 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->rdata)))),64);
        tracep->chgQData(oldp+169,((QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(vlSelf->rdata))))),64);
        tracep->chgQData(oldp+171,((QData)((IData)(
                                                   (0xffffU 
                                                    & (IData)(vlSelf->rdata))))),64);
        tracep->chgQData(oldp+173,((QData)((IData)(vlSelf->rdata))),64);
        tracep->chgCData(oldp+175,((0x1fU & (vlSelf->inst 
                                             >> 2U))),5);
        tracep->chgCData(oldp+176,((vlSelf->inst >> 0x19U)),7);
        tracep->chgBit(oldp+177,((0xdU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
        tracep->chgBit(oldp+178,((5U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+179,((0xcU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
        tracep->chgBit(oldp+180,((0xeU == (0x1fU & 
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
    }
}
