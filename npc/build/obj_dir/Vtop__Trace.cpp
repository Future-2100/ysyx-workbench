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
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__wb_en));
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__wb_pc));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__wb_alu));
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__load_data),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__rd_data1),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__rd_data2),64);
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__I_type));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__U_type));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__rs1_en));
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__pc_en));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__rs2_en));
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__imm_en));
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__lgc_en));
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__lgc_op),4);
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__wlgc_en));
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__wlgc_op),5);
            tracep->chgBit(oldp+24,((0ULL == vlSelf->top__DOT__result)));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__lb));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__lh));
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__lw));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__ld));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__lbu));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__lhu));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__lwu));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__sb));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__sh));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__sw));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__sd));
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__pc_gen_inst__DOT__br_pc),64);
            tracep->chgQData(oldp+38,((0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__result)),64);
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en));
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__regfile_inst__DOT__wb_data),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
            tracep->chgIData(oldp+57,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
            tracep->chgIData(oldp+58,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__alu_inst__DOT__lgc_result),64);
            tracep->chgIData(oldp+61,(vlSelf->top__DOT__alu_inst__DOT__wlgc_result),32);
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__alu_inst__DOT__br_result));
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__memory_inst__DOT__lb_data),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__memory_inst__DOT__lh_data),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__memory_inst__DOT__lw_data),64);
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__controlor_inst__DOT__immop_en));
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__controlor_inst__DOT__immsf_en));
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__controlor_inst__DOT__R_type));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__regfile_inst__DOT__gpr[31]),64);
            tracep->chgIData(oldp+138,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        }
        tracep->chgBit(oldp+139,(vlSelf->clk));
        tracep->chgBit(oldp+140,(vlSelf->rstn));
        tracep->chgQData(oldp+141,(vlSelf->a),64);
        tracep->chgBit(oldp+143,(vlSelf->ebreak));
        tracep->chgQData(oldp+144,(vlSelf->dnxt_pc),64);
        tracep->chgQData(oldp+146,(vlSelf->pc),64);
        tracep->chgIData(oldp+148,(vlSelf->inst),32);
        tracep->chgQData(oldp+149,(vlSelf->wdata),64);
        tracep->chgCData(oldp+151,(vlSelf->wlen),3);
        tracep->chgBit(oldp+152,(vlSelf->wen));
        tracep->chgBit(oldp+153,(vlSelf->ren));
        tracep->chgQData(oldp+154,(vlSelf->addr),64);
        tracep->chgQData(oldp+156,(vlSelf->rdata),64);
        tracep->chgBit(oldp+158,((0x19U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgBit(oldp+159,((0x1bU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgQData(oldp+160,((4ULL + vlSelf->pc)),64);
        tracep->chgBit(oldp+162,((0U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+163,((8U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+164,((0x18U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgCData(oldp+165,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+166,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+167,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+168,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
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
