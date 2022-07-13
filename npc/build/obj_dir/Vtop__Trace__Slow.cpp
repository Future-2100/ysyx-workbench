// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+111,"clk", false,-1);
        tracep->declBit(c+112,"rstn", false,-1);
        tracep->declBit(c+113,"ebreak", false,-1);
        tracep->declQuad(c+114,"pc", false,-1, 63,0);
        tracep->declQuad(c+116,"gpr1", false,-1, 63,0);
        tracep->declBus(c+118,"inst", false,-1, 31,0);
        tracep->declBus(c+174,"top DW", false,-1, 31,0);
        tracep->declBus(c+175,"top IW", false,-1, 31,0);
        tracep->declBit(c+111,"top clk", false,-1);
        tracep->declBit(c+112,"top rstn", false,-1);
        tracep->declBit(c+113,"top ebreak", false,-1);
        tracep->declQuad(c+114,"top pc", false,-1, 63,0);
        tracep->declQuad(c+116,"top gpr1", false,-1, 63,0);
        tracep->declBus(c+118,"top inst", false,-1, 31,0);
        tracep->declQuad(c+1,"top imm", false,-1, 63,0);
        tracep->declQuad(c+3,"top result", false,-1, 63,0);
        tracep->declBit(c+119,"top brch_asrt", false,-1);
        tracep->declBit(c+120,"top jalr_en", false,-1);
        tracep->declBit(c+121,"top jal_en", false,-1);
        tracep->declQuad(c+122,"top snxt_pc", false,-1, 63,0);
        tracep->declBit(c+124,"top wb_en", false,-1);
        tracep->declBit(c+125,"top load_en", false,-1);
        tracep->declQuad(c+126,"top load_data", false,-1, 63,0);
        tracep->declQuad(c+3,"top alu_data", false,-1, 63,0);
        tracep->declQuad(c+128,"top rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top rdata2", false,-1, 63,0);
        tracep->declBit(c+130,"top I_type", false,-1);
        tracep->declBit(c+131,"top S_type", false,-1);
        tracep->declBit(c+132,"top B_type", false,-1);
        tracep->declBit(c+133,"top U_type", false,-1);
        tracep->declBit(c+121,"top J_type", false,-1);
        tracep->declQuad(c+128,"top rs1", false,-1, 63,0);
        tracep->declQuad(c+5,"top rs2", false,-1, 63,0);
        tracep->declBit(c+134,"top imm_en", false,-1);
        tracep->declBit(c+135,"top auipc_en", false,-1);
        tracep->declBus(c+7,"top rglr_op", false,-1, 3,0);
        tracep->declBus(c+8,"top wrglr_op", false,-1, 4,0);
        tracep->declBus(c+136,"top branch_op", false,-1, 2,0);
        tracep->declBit(c+137,"top wop_en", false,-1);
        tracep->declBit(c+138,"top op_en", false,-1);
        tracep->declBit(c+9,"top zero", false,-1);
        tracep->declBit(c+132,"top branch_en", false,-1);
        tracep->declBit(c+139,"top lb", false,-1);
        tracep->declBit(c+140,"top lh", false,-1);
        tracep->declBit(c+141,"top lw", false,-1);
        tracep->declBit(c+142,"top ld", false,-1);
        tracep->declBit(c+143,"top lbu", false,-1);
        tracep->declBit(c+144,"top lhu", false,-1);
        tracep->declBit(c+145,"top lwu", false,-1);
        tracep->declBit(c+10,"top sb", false,-1);
        tracep->declBit(c+11,"top sh", false,-1);
        tracep->declBit(c+12,"top sw", false,-1);
        tracep->declBit(c+13,"top sd", false,-1);
        tracep->declQuad(c+5,"top wdata", false,-1, 63,0);
        tracep->declQuad(c+3,"top addr", false,-1, 63,0);
        tracep->declBus(c+174,"top pc_gen_inst DW", false,-1, 31,0);
        tracep->declBit(c+111,"top pc_gen_inst clk", false,-1);
        tracep->declBit(c+112,"top pc_gen_inst rstn", false,-1);
        tracep->declQuad(c+1,"top pc_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+3,"top pc_gen_inst result", false,-1, 63,0);
        tracep->declBit(c+119,"top pc_gen_inst brch_asrt", false,-1);
        tracep->declBit(c+120,"top pc_gen_inst jalr_en", false,-1);
        tracep->declBit(c+121,"top pc_gen_inst jal_en", false,-1);
        tracep->declQuad(c+122,"top pc_gen_inst snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+114,"top pc_gen_inst pc", false,-1, 63,0);
        tracep->declBit(c+146,"top pc_gen_inst jalbr_en", false,-1);
        tracep->declQuad(c+147,"top pc_gen_inst jalbr_pc", false,-1, 63,0);
        tracep->declQuad(c+14,"top pc_gen_inst jalr_pc", false,-1, 63,0);
        tracep->declQuad(c+149,"top pc_gen_inst dnxt_pc", false,-1, 63,0);
        tracep->declBus(c+174,"top regfile_inst DW", false,-1, 31,0);
        tracep->declBus(c+175,"top regfile_inst IW", false,-1, 31,0);
        tracep->declBus(c+176,"top regfile_inst AW", false,-1, 31,0);
        tracep->declBit(c+111,"top regfile_inst clk", false,-1);
        tracep->declBit(c+112,"top regfile_inst rstn", false,-1);
        tracep->declBit(c+124,"top regfile_inst wb_en", false,-1);
        tracep->declBit(c+125,"top regfile_inst load_en", false,-1);
        tracep->declBit(c+121,"top regfile_inst jal_en", false,-1);
        tracep->declBit(c+120,"top regfile_inst jalr_en", false,-1);
        tracep->declQuad(c+126,"top regfile_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+3,"top regfile_inst alu_data", false,-1, 63,0);
        tracep->declQuad(c+122,"top regfile_inst snxt_pc", false,-1, 63,0);
        tracep->declBus(c+118,"top regfile_inst inst", false,-1, 31,0);
        tracep->declQuad(c+128,"top regfile_inst rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top regfile_inst rdata2", false,-1, 63,0);
        tracep->declQuad(c+116,"top regfile_inst gpr1", false,-1, 63,0);
        tracep->declBus(c+151,"top regfile_inst raddr1", false,-1, 4,0);
        tracep->declBus(c+152,"top regfile_inst raddr2", false,-1, 4,0);
        tracep->declBus(c+153,"top regfile_inst waddr", false,-1, 4,0);
        tracep->declQuad(c+154,"top regfile_inst wdata", false,-1, 63,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+34+i*2,"top regfile_inst gpr", true,(i+1), 63,0);}}
        tracep->declBus(c+96,"top regfile_inst i", false,-1, 31,0);
        tracep->declBus(c+174,"top imm_gen_inst DW", false,-1, 31,0);
        tracep->declBus(c+175,"top imm_gen_inst IW", false,-1, 31,0);
        tracep->declBit(c+130,"top imm_gen_inst I_type", false,-1);
        tracep->declBit(c+131,"top imm_gen_inst S_type", false,-1);
        tracep->declBit(c+132,"top imm_gen_inst B_type", false,-1);
        tracep->declBit(c+133,"top imm_gen_inst U_type", false,-1);
        tracep->declBit(c+121,"top imm_gen_inst J_type", false,-1);
        tracep->declBus(c+118,"top imm_gen_inst inst", false,-1, 31,0);
        tracep->declQuad(c+1,"top imm_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+156,"top imm_gen_inst immI_num", false,-1, 63,0);
        tracep->declQuad(c+158,"top imm_gen_inst immS_num", false,-1, 63,0);
        tracep->declQuad(c+160,"top imm_gen_inst immB_num", false,-1, 63,0);
        tracep->declQuad(c+162,"top imm_gen_inst immU_num", false,-1, 63,0);
        tracep->declQuad(c+164,"top imm_gen_inst immJ_num", false,-1, 63,0);
        tracep->declBus(c+174,"top alu_inst DW", false,-1, 31,0);
        tracep->declQuad(c+128,"top alu_inst rs1", false,-1, 63,0);
        tracep->declQuad(c+114,"top alu_inst pc", false,-1, 63,0);
        tracep->declQuad(c+5,"top alu_inst rs2", false,-1, 63,0);
        tracep->declQuad(c+1,"top alu_inst imm", false,-1, 63,0);
        tracep->declBit(c+134,"top alu_inst imm_en", false,-1);
        tracep->declBit(c+135,"top alu_inst auipc_en", false,-1);
        tracep->declBus(c+7,"top alu_inst rglr_op", false,-1, 3,0);
        tracep->declBus(c+8,"top alu_inst wrglr_op", false,-1, 4,0);
        tracep->declBus(c+136,"top alu_inst branch_op", false,-1, 2,0);
        tracep->declBit(c+132,"top alu_inst branch_en", false,-1);
        tracep->declBit(c+137,"top alu_inst wop_en", false,-1);
        tracep->declBit(c+138,"top alu_inst op_en", false,-1);
        tracep->declQuad(c+3,"top alu_inst result", false,-1, 63,0);
        tracep->declBit(c+9,"top alu_inst zero", false,-1);
        tracep->declBit(c+119,"top alu_inst brch_asrt", false,-1);
        tracep->declQuad(c+16,"top alu_inst opdata1", false,-1, 63,0);
        tracep->declQuad(c+18,"top alu_inst opdata2", false,-1, 63,0);
        tracep->declQuad(c+16,"top alu_inst uopdata1", false,-1, 63,0);
        tracep->declQuad(c+18,"top alu_inst uopdata2", false,-1, 63,0);
        tracep->declBus(c+20,"top alu_inst wopdata1", false,-1, 31,0);
        tracep->declBus(c+21,"top alu_inst wopdata2", false,-1, 31,0);
        tracep->declQuad(c+22,"top alu_inst rglr_rslt", false,-1, 63,0);
        tracep->declBus(c+24,"top alu_inst wrglr_rslt", false,-1, 31,0);
        tracep->declBit(c+166,"top alu_inst brch_value", false,-1);
        tracep->declBus(c+174,"top memory_inst DW", false,-1, 31,0);
        tracep->declBit(c+111,"top memory_inst clk", false,-1);
        tracep->declBit(c+139,"top memory_inst lb", false,-1);
        tracep->declBit(c+140,"top memory_inst lh", false,-1);
        tracep->declBit(c+141,"top memory_inst lw", false,-1);
        tracep->declBit(c+142,"top memory_inst ld", false,-1);
        tracep->declBit(c+143,"top memory_inst lbu", false,-1);
        tracep->declBit(c+144,"top memory_inst lhu", false,-1);
        tracep->declBit(c+145,"top memory_inst lwu", false,-1);
        tracep->declBit(c+10,"top memory_inst sb", false,-1);
        tracep->declBit(c+11,"top memory_inst sh", false,-1);
        tracep->declBit(c+12,"top memory_inst sw", false,-1);
        tracep->declBit(c+13,"top memory_inst sd", false,-1);
        tracep->declQuad(c+5,"top memory_inst wdata", false,-1, 63,0);
        tracep->declQuad(c+3,"top memory_inst addr", false,-1, 63,0);
        tracep->declQuad(c+126,"top memory_inst load_data", false,-1, 63,0);
        tracep->declBit(c+25,"top memory_inst ram1_en", false,-1);
        tracep->declBit(c+26,"top memory_inst ram2_en", false,-1);
        tracep->declBit(c+27,"top memory_inst ram3_en", false,-1);
        tracep->declBit(c+13,"top memory_inst ram4_en", false,-1);
        tracep->declBit(c+28,"top memory_inst wr_en", false,-1);
        tracep->declQuad(c+97,"top memory_inst rdata", false,-1, 63,0);
        tracep->declQuad(c+99,"top memory_inst lb_data", false,-1, 63,0);
        tracep->declQuad(c+101,"top memory_inst lh_data", false,-1, 63,0);
        tracep->declQuad(c+103,"top memory_inst lw_data", false,-1, 63,0);
        tracep->declQuad(c+97,"top memory_inst ld_data", false,-1, 63,0);
        tracep->declQuad(c+105,"top memory_inst lbu_data", false,-1, 63,0);
        tracep->declQuad(c+107,"top memory_inst lhu_data", false,-1, 63,0);
        tracep->declQuad(c+109,"top memory_inst lwu_data", false,-1, 63,0);
        tracep->declBus(c+174,"top memory_inst ram_inst DW", false,-1, 31,0);
        tracep->declBus(c+177,"top memory_inst ram_inst AW", false,-1, 31,0);
        tracep->declBus(c+178,"top memory_inst ram_inst DP", false,-1, 31,0);
        tracep->declBit(c+111,"top memory_inst ram_inst clk", false,-1);
        tracep->declBit(c+25,"top memory_inst ram_inst ram1_en", false,-1);
        tracep->declBit(c+26,"top memory_inst ram_inst ram2_en", false,-1);
        tracep->declBit(c+27,"top memory_inst ram_inst ram3_en", false,-1);
        tracep->declBit(c+13,"top memory_inst ram_inst ram4_en", false,-1);
        tracep->declBus(c+29,"top memory_inst ram_inst addr", false,-1, 12,0);
        tracep->declBit(c+28,"top memory_inst ram_inst wr_en", false,-1);
        tracep->declQuad(c+5,"top memory_inst ram_inst wdata", false,-1, 63,0);
        tracep->declQuad(c+97,"top memory_inst ram_inst rdata", false,-1, 63,0);
        tracep->declBus(c+30,"top memory_inst ram_inst rdata1", false,-1, 7,0);
        tracep->declBus(c+31,"top memory_inst ram_inst rdata2", false,-1, 7,0);
        tracep->declBus(c+32,"top memory_inst ram_inst rdata3", false,-1, 15,0);
        tracep->declBus(c+33,"top memory_inst ram_inst rdata4", false,-1, 31,0);
        tracep->declBus(c+175,"top controlor_inst IW", false,-1, 31,0);
        tracep->declBus(c+118,"top controlor_inst inst", false,-1, 31,0);
        tracep->declBit(c+121,"top controlor_inst jal_en", false,-1);
        tracep->declBit(c+120,"top controlor_inst jalr_en", false,-1);
        tracep->declBit(c+132,"top controlor_inst branch_en", false,-1);
        tracep->declBit(c+125,"top controlor_inst load_en", false,-1);
        tracep->declBit(c+124,"top controlor_inst wb_en", false,-1);
        tracep->declBit(c+130,"top controlor_inst I_type", false,-1);
        tracep->declBit(c+131,"top controlor_inst S_type", false,-1);
        tracep->declBit(c+132,"top controlor_inst B_type", false,-1);
        tracep->declBit(c+133,"top controlor_inst U_type", false,-1);
        tracep->declBit(c+121,"top controlor_inst J_type", false,-1);
        tracep->declBit(c+135,"top controlor_inst auipc_en", false,-1);
        tracep->declBit(c+134,"top controlor_inst imm_en", false,-1);
        tracep->declBus(c+7,"top controlor_inst rglr_op", false,-1, 3,0);
        tracep->declBus(c+8,"top controlor_inst wrglr_op", false,-1, 4,0);
        tracep->declBus(c+136,"top controlor_inst branch_op", false,-1, 2,0);
        tracep->declBit(c+138,"top controlor_inst op_en", false,-1);
        tracep->declBit(c+137,"top controlor_inst wop_en", false,-1);
        tracep->declBit(c+139,"top controlor_inst lb", false,-1);
        tracep->declBit(c+140,"top controlor_inst lh", false,-1);
        tracep->declBit(c+141,"top controlor_inst lw", false,-1);
        tracep->declBit(c+142,"top controlor_inst ld", false,-1);
        tracep->declBit(c+143,"top controlor_inst lbu", false,-1);
        tracep->declBit(c+144,"top controlor_inst lhu", false,-1);
        tracep->declBit(c+145,"top controlor_inst lwu", false,-1);
        tracep->declBit(c+10,"top controlor_inst sb", false,-1);
        tracep->declBit(c+11,"top controlor_inst sh", false,-1);
        tracep->declBit(c+12,"top controlor_inst sw", false,-1);
        tracep->declBit(c+13,"top controlor_inst sd", false,-1);
        tracep->declBit(c+113,"top controlor_inst ebreak", false,-1);
        tracep->declBus(c+167,"top controlor_inst opcode", false,-1, 4,0);
        tracep->declBus(c+136,"top controlor_inst funct3", false,-1, 2,0);
        tracep->declBus(c+168,"top controlor_inst funct7", false,-1, 6,0);
        tracep->declBit(c+169,"top controlor_inst lui_en", false,-1);
        tracep->declBit(c+131,"top controlor_inst store_en", false,-1);
        tracep->declBit(c+170,"top controlor_inst immop_en", false,-1);
        tracep->declBit(c+171,"top controlor_inst rsop_en", false,-1);
        tracep->declBit(c+172,"top controlor_inst immopw_en", false,-1);
        tracep->declBit(c+173,"top controlor_inst rsopw_en", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__result),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__rdata2),64);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__rglr_op),4);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__wrglr_op),5);
        tracep->fullBit(oldp+9,((0ULL == vlSelf->top__DOT__result)));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__sb));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__sh));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__sw));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__sd));
        tracep->fullQData(oldp+14,((0xfffffffffffffffeULL 
                                    & vlSelf->top__DOT__result)),64);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
        tracep->fullIData(oldp+20,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
        tracep->fullIData(oldp+21,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__alu_inst__DOT__rglr_rslt),64);
        tracep->fullIData(oldp+24,(vlSelf->top__DOT__alu_inst__DOT__wrglr_rslt),32);
        tracep->fullBit(oldp+25,(((((IData)(vlSelf->top__DOT__sb) 
                                    | (IData)(vlSelf->top__DOT__sh)) 
                                   | (IData)(vlSelf->top__DOT__sw)) 
                                  | (IData)(vlSelf->top__DOT__sd))));
        tracep->fullBit(oldp+26,((((IData)(vlSelf->top__DOT__sh) 
                                   | (IData)(vlSelf->top__DOT__sw)) 
                                  | (IData)(vlSelf->top__DOT__sd))));
        tracep->fullBit(oldp+27,(((IData)(vlSelf->top__DOT__sw) 
                                  | (IData)(vlSelf->top__DOT__sd))));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__memory_inst__DOT__wr_en));
        tracep->fullSData(oldp+29,((0x1fffU & (IData)(
                                                      (vlSelf->top__DOT__result 
                                                       >> 3U)))),13);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata1),8);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata2),8);
        tracep->fullSData(oldp+32,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata3),16);
        tracep->fullIData(oldp+33,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata4),32);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
        tracep->fullIData(oldp+96,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__memory_inst__DOT__rdata),64);
        tracep->fullQData(oldp+99,((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                    >> 7U)))))) 
                                     << 8U) | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))),64);
        tracep->fullQData(oldp+101,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                     >> 0xfU)))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))),64);
        tracep->fullQData(oldp+103,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))),64);
        tracep->fullQData(oldp+105,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
        tracep->fullQData(oldp+107,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
        tracep->fullQData(oldp+109,((QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))),64);
        tracep->fullBit(oldp+111,(vlSelf->clk));
        tracep->fullBit(oldp+112,(vlSelf->rstn));
        tracep->fullBit(oldp+113,(vlSelf->ebreak));
        tracep->fullQData(oldp+114,(vlSelf->pc),64);
        tracep->fullQData(oldp+116,(vlSelf->gpr1),64);
        tracep->fullIData(oldp+118,(vlSelf->inst),32);
        tracep->fullBit(oldp+119,((((0x4000U & vlSelf->inst)
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
        tracep->fullBit(oldp+120,((0x19U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+121,((0x1bU == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullQData(oldp+122,((4ULL + vlSelf->pc)),64);
        tracep->fullBit(oldp+124,((((((((((0xdU == 
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
                                                  >> 2U))))));
        tracep->fullBit(oldp+125,((0U == (0x1fU & (vlSelf->inst 
                                                   >> 2U)))));
        tracep->fullQData(oldp+126,(((((((((- (QData)((IData)(
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
        tracep->fullQData(oldp+128,(((0U == (0x1fU 
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
                                                [(0x1fU 
                                                  & ((vlSelf->inst 
                                                      >> 0xfU) 
                                                     - (IData)(1U)))]
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+130,(((((0x19U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U))) 
                                     | (0U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U)))) 
                                    | (4U == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U)))) 
                                   | (6U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))))));
        tracep->fullBit(oldp+131,((8U == (0x1fU & (vlSelf->inst 
                                                   >> 2U)))));
        tracep->fullBit(oldp+132,((0x18U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+133,(((0xdU == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))))));
        tracep->fullBit(oldp+134,((((4U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))) 
                                    | (6U == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U)))) 
                                   | (5U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))))));
        tracep->fullBit(oldp+135,((5U == (0x1fU & (vlSelf->inst 
                                                   >> 2U)))));
        tracep->fullCData(oldp+136,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+137,(((6U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U))) 
                                   | (0xeU == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->fullBit(oldp+138,(((((4U == (0x1fU 
                                             & (vlSelf->inst 
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
        tracep->fullBit(oldp+139,((IData)((0U == (0x707cU 
                                                  & vlSelf->inst)))));
        tracep->fullBit(oldp+140,((IData)((0x1000U 
                                           == (0x707cU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+141,((IData)((0x2000U 
                                           == (0x707cU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+142,((IData)((0x3000U 
                                           == (0x707cU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+143,((IData)((0x4000U 
                                           == (0x707cU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+144,((IData)((0x5000U 
                                           == (0x707cU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+145,((IData)((0x6000U 
                                           == (0x707cU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+146,(((0x1bU == (0x1fU 
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
        tracep->fullQData(oldp+147,((vlSelf->pc + vlSelf->top__DOT__imm)),64);
        tracep->fullQData(oldp+149,((((0xfffffffffffffffeULL 
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
        tracep->fullCData(oldp+151,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+152,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+153,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullQData(oldp+154,(((((- (QData)((IData)(
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
        tracep->fullQData(oldp+156,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)))))),64);
        tracep->fullQData(oldp+158,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 ((0x7e0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+160,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+162,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7ffff000U 
                                                                   & vlSelf->inst))))),64);
        tracep->fullQData(oldp+164,((((- (QData)((IData)(
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
        tracep->fullBit(oldp+166,(((0x4000U & vlSelf->inst)
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
                                              == vlSelf->top__DOT__alu_inst__DOT__opdata2))))));
        tracep->fullCData(oldp+167,((0x1fU & (vlSelf->inst 
                                              >> 2U))),5);
        tracep->fullCData(oldp+168,((vlSelf->inst >> 0x19U)),7);
        tracep->fullBit(oldp+169,((0xdU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->fullBit(oldp+170,((4U == (0x1fU & (vlSelf->inst 
                                                   >> 2U)))));
        tracep->fullBit(oldp+171,((0xcU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->fullBit(oldp+172,((6U == (0x1fU & (vlSelf->inst 
                                                   >> 2U)))));
        tracep->fullBit(oldp+173,((0xeU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->fullIData(oldp+174,(0x40U),32);
        tracep->fullIData(oldp+175,(0x20U),32);
        tracep->fullIData(oldp+176,(5U),32);
        tracep->fullIData(oldp+177,(0xdU),32);
        tracep->fullIData(oldp+178,(0x2000U),32);
    }
}
