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
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__exu_alu_result),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__exu_gpr_data2),64);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__exu_store_len),4);
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__exu_store_en));
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__mm_rdata),64);
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__exu_load_en));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__exu_jump_en));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__exu_branch_en));
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__ifu_pc),64);
            tracep->chgIData(oldp+13,(vlSelf->top__DOT__ifu_instr),32);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__ifu_snxt_pc),64);
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__ld_hz_nop));
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__flush_nop));
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__mmu_dnpc),64);
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__mmu_inst__DOT__branch_en));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__idu_inst__DOT__alu_en));
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__idu_index_rs1),5);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__idu_index_rs2),5);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__idu_index_rd),5);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__idu_pc),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__idu_gpr_data1),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__idu_imm),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__idu_gpr_data2),64);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__idu_alu_opcode),5);
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__idu_alu_en));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__idu_alu_imm_en));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__idu_alu_pc_en));
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__idu_branch_opcode),3);
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__idu_alu_halfop));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__idu_jump_en));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__idu_branch_en));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__idu_load_en));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__idu_store_en));
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__idu_store_len),4);
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__idu_wb_en));
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__idu_wb_choose),4);
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__idu_ebreak));
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__idu_snxt_pc),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__mmu_wb_data),64);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__mmu_index_rd),5);
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__mmu_wb_en));
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__fw_en1));
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__fw_data1),64);
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__fw_en2));
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__fw_data2),64);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__exu_index_rd),5);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__exu_index_rs1),5);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__exu_index_rs2),5);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__exu_branch_pc),64);
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__exu_branch_result));
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__exu_imm),64);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__exu_load_opcode),3);
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__exu_wb_en));
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__exu_wb_choose),4);
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__exu_ebreak));
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__exu_snxt_pc),64);
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__mmu_ebreak));
            tracep->chgCData(oldp+74,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+75,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+76,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                                >> 7U))),5);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__idu_inst__DOT__gpr_data1),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__idu_inst__DOT__gpr_data2),64);
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__idu_inst__DOT__branch_en));
            tracep->chgCData(oldp+82,((7U & (vlSelf->top__DOT__ifu_instr 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__idu_inst__DOT__alu_pc_en));
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__idu_inst__DOT__alu_imm_en));
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__idu_inst__DOT__alu_opcode),5);
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__idu_inst__DOT__alu_halfop));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__idu_inst__DOT__jump_en));
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__idu_inst__DOT__load_en));
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__idu_inst__DOT__store_en));
            tracep->chgCData(oldp+90,(vlSelf->top__DOT__idu_inst__DOT__store_len),4);
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__idu_inst__DOT__wb_en));
            tracep->chgCData(oldp+92,(vlSelf->top__DOT__idu_inst__DOT__wb_choose),4);
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__idu_inst__DOT__I_type));
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__idu_inst__DOT__U_type));
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__jal_en));
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__idu_inst__DOT__ebreak));
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__idu_inst__DOT__imm),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[31]),64);
            tracep->chgIData(oldp+163,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__i),32);
            tracep->chgCData(oldp+164,((0x7fU & vlSelf->top__DOT__ifu_instr)),7);
            tracep->chgCData(oldp+165,((vlSelf->top__DOT__ifu_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+166,((3U == (3U & vlSelf->top__DOT__ifu_instr))));
            tracep->chgBit(oldp+167,((0U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+168,((1U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+169,((2U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+170,((3U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+171,((4U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+172,((5U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+173,((6U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+174,((7U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+175,((0U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+176,((1U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+177,((2U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+178,((3U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+179,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__lui_en));
            tracep->chgBit(oldp+180,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__auipc_en));
            tracep->chgBit(oldp+181,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__jalr_en));
            tracep->chgBit(oldp+182,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__ioperate_en));
            tracep->chgBit(oldp+183,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__operate_en));
            tracep->chgBit(oldp+184,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__iwoperate_en));
            tracep->chgBit(oldp+185,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__woperate_en));
            tracep->chgBit(oldp+186,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__alu_adder_en));
            tracep->chgBit(oldp+187,((0U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+188,((1U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+189,((2U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+190,((3U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 0xcU)))));
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__exu_inst__DOT__alu_result),64);
            tracep->chgBit(oldp+193,(vlSelf->top__DOT__exu_inst__DOT__branch_result));
            tracep->chgQData(oldp+194,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum[0U])))),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2),64);
            tracep->chgCData(oldp+200,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode),4);
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__gpr_en1));
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__gpr_en2));
            tracep->chgBit(oldp+203,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_en));
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sum),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_dif),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sll),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_slt),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sltu),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result),64);
            tracep->chgWData(oldp+224,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss),128);
            tracep->chgWData(oldp+228,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu),128);
            tracep->chgWData(oldp+232,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su),128);
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_en));
            tracep->chgQData(oldp+237,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U])))),64);
            tracep->chgQData(oldp+239,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U])))),64);
            tracep->chgQData(oldp+241,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U])))),64);
            tracep->chgQData(oldp+243,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U])))),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_div),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_divu),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_rem),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result),64);
            tracep->chgIData(oldp+253,((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1)),32);
            tracep->chgIData(oldp+254,((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)),32);
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_en));
            tracep->chgIData(oldp+256,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sum),32);
            tracep->chgIData(oldp+257,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_dif),32);
            tracep->chgIData(oldp+258,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sll),32);
            tracep->chgIData(oldp+259,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_srl),32);
            tracep->chgIData(oldp+260,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result),32);
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_en));
            tracep->chgIData(oldp+262,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_mulw),32);
            tracep->chgIData(oldp+263,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_divw),32);
            tracep->chgIData(oldp+264,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_divuw),32);
            tracep->chgIData(oldp+265,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_remw),32);
            tracep->chgIData(oldp+266,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_remuw),32);
            tracep->chgIData(oldp+267,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result),32);
            tracep->chgWData(oldp+268,(vlSelf->top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum),65);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__mmu_inst__DOT__load_data),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_data),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__mmu_inst__DOT__mmu_imm_data),64);
            tracep->chgCData(oldp+279,(vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_choose),4);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc),64);
            tracep->chgBit(oldp+282,(vlSelf->top__DOT__forward_inst__DOT__ex_forward_1));
            tracep->chgBit(oldp+283,(vlSelf->top__DOT__forward_inst__DOT__ex_forward_2));
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__forward_inst__DOT__mm_forward_1));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__forward_inst__DOT__mm_forward_2));
        }
        tracep->chgBit(oldp+286,(vlSelf->clk));
        tracep->chgBit(oldp+287,(vlSelf->rstn));
        tracep->chgQData(oldp+288,(vlSelf->pc),64);
        tracep->chgIData(oldp+290,(vlSelf->instr),32);
        tracep->chgBit(oldp+291,(vlSelf->ebreak));
        tracep->chgQData(oldp+292,(vlSelf->snxt_pc),64);
        tracep->chgQData(oldp+294,(vlSelf->dnxt_pc),64);
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
