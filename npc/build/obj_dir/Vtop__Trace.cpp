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
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__pc_ld));
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__pc_en));
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__result),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__wdata),64);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__wlen),4);
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__wen));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__ren));
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__imm),64);
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__br_asrt));
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__wb_en));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__wb_pc));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__wb_alu));
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__load_data),64);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__rd_data1),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__rd_data2),64);
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__I_type));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__controlor_inst__DOT__store_en));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__U_type));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__rs1_en));
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__rs2_en));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__imm_en));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__lgc_en));
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__lgc_op),4);
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__wlgc_en));
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__wlgc_op),5);
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en));
            tracep->chgBit(oldp+35,((0ULL == vlSelf->top__DOT__result)));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__lb));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__lh));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__lw));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__ld));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__lbu));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__lhu));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__lwu));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__sb));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__sh));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__sw));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__sd));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__instr_en));
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__pc_gen_inst__DOT__br_pc),64);
            tracep->chgQData(oldp+50,((0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__result)),64);
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en));
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__regfile_inst__DOT__wb_data),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
            tracep->chgIData(oldp+69,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
            tracep->chgIData(oldp+70,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__alu_inst__DOT__lgc_result),64);
            tracep->chgWData(oldp+73,(vlSelf->top__DOT__alu_inst__DOT__multu),128);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__alu_inst__DOT__mlgc_result),64);
            tracep->chgIData(oldp+79,(vlSelf->top__DOT__alu_inst__DOT__wmlgc_result),32);
            tracep->chgIData(oldp+80,(vlSelf->top__DOT__alu_inst__DOT__wlgc_result),32);
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__alu_inst__DOT__br_result));
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__memory_inst__DOT__lb_data),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__memory_inst__DOT__lh_data),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__memory_inst__DOT__lw_data),64);
            tracep->chgQData(oldp+88,((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->top__DOT__rdata))))),64);
            tracep->chgQData(oldp+90,((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->top__DOT__rdata))))),64);
            tracep->chgQData(oldp+92,((QData)((IData)(vlSelf->top__DOT__rdata))),64);
            tracep->chgCData(oldp+94,(vlSelf->top__DOT__controlor_inst__DOT__cpu_nstate),2);
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__controlor_inst__DOT__immop_en));
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__controlor_inst__DOT__immsf_en));
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__controlor_inst__DOT__rsop_en));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__controlor_inst__DOT__R_type));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__regfile_inst__DOT__gpr[31]),64);
            tracep->chgIData(oldp+166,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        }
        tracep->chgBit(oldp+167,(vlSelf->clk));
        tracep->chgBit(oldp+168,(vlSelf->rstn));
        tracep->chgQData(oldp+169,(vlSelf->pc),64);
        tracep->chgQData(oldp+171,(vlSelf->snxt_pc),64);
        tracep->chgQData(oldp+173,(vlSelf->dnxt_pc),64);
        tracep->chgIData(oldp+175,(vlSelf->instr),32);
        tracep->chgBit(oldp+176,(vlSelf->ifu_ARVALID));
        tracep->chgBit(oldp+177,(vlSelf->ifu_ARREADY));
        tracep->chgQData(oldp+178,(vlSelf->ifu_ARADDR),64);
        tracep->chgCData(oldp+180,(vlSelf->ifu_ARPORT),3);
        tracep->chgBit(oldp+181,(vlSelf->ifu_RVALID));
        tracep->chgBit(oldp+182,(vlSelf->ifu_RREADY));
        tracep->chgQData(oldp+183,(vlSelf->ifu_RDATA),64);
        tracep->chgCData(oldp+185,(vlSelf->ifu_RRESP),2);
        tracep->chgBit(oldp+186,(vlSelf->ebreak));
        tracep->chgBit(oldp+187,((0x67U == (0x7fU & vlSelf->instr))));
        tracep->chgBit(oldp+188,((0x6fU == (0x7fU & vlSelf->instr))));
        tracep->chgBit(oldp+189,((3U == (0x7fU & vlSelf->instr))));
        tracep->chgBit(oldp+190,((0x63U == (0x7fU & vlSelf->instr))));
        tracep->chgCData(oldp+191,((7U & (vlSelf->instr 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+192,((8U | (7U & (vlSelf->instr 
                                                >> 0xcU)))),4);
        tracep->chgCData(oldp+193,((0x1fU & (vlSelf->instr 
                                             >> 7U))),5);
        tracep->chgCData(oldp+194,((0x1fU & (vlSelf->instr 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+195,((0x1fU & (vlSelf->instr 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+196,(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate),2);
        tracep->chgCData(oldp+197,((0x7fU & vlSelf->instr)),7);
        tracep->chgCData(oldp+198,((vlSelf->instr >> 0x19U)),7);
        tracep->chgBit(oldp+199,((0x37U == (0x7fU & vlSelf->instr))));
        tracep->chgBit(oldp+200,((0x17U == (0x7fU & vlSelf->instr))));
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
