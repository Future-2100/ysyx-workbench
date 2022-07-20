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
        tracep->declBit(c+151,"clk", false,-1);
        tracep->declBit(c+152,"rstn", false,-1);
        tracep->declQuad(c+153,"a", false,-1, 63,0);
        tracep->declBit(c+155,"ebreak", false,-1);
        tracep->declQuad(c+156,"dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+158,"snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+160,"pc", false,-1, 63,0);
        tracep->declBus(c+162,"inst", false,-1, 31,0);
        tracep->declQuad(c+163,"wdata", false,-1, 63,0);
        tracep->declBus(c+165,"wlen", false,-1, 3,0);
        tracep->declBit(c+166,"wen", false,-1);
        tracep->declQuad(c+167,"rdata", false,-1, 63,0);
        tracep->declBit(c+169,"ren", false,-1);
        tracep->declQuad(c+170,"addr", false,-1, 63,0);
        tracep->declBus(c+192,"top DW", false,-1, 31,0);
        tracep->declBus(c+193,"top IW", false,-1, 31,0);
        tracep->declBit(c+151,"top clk", false,-1);
        tracep->declBit(c+152,"top rstn", false,-1);
        tracep->declQuad(c+153,"top a", false,-1, 63,0);
        tracep->declBit(c+155,"top ebreak", false,-1);
        tracep->declQuad(c+156,"top dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+158,"top snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+160,"top pc", false,-1, 63,0);
        tracep->declBus(c+162,"top inst", false,-1, 31,0);
        tracep->declQuad(c+163,"top wdata", false,-1, 63,0);
        tracep->declBus(c+165,"top wlen", false,-1, 3,0);
        tracep->declBit(c+166,"top wen", false,-1);
        tracep->declQuad(c+167,"top rdata", false,-1, 63,0);
        tracep->declBit(c+169,"top ren", false,-1);
        tracep->declQuad(c+170,"top addr", false,-1, 63,0);
        tracep->declQuad(c+1,"top imm", false,-1, 63,0);
        tracep->declQuad(c+3,"top result", false,-1, 63,0);
        tracep->declBit(c+5,"top br_asrt", false,-1);
        tracep->declBit(c+172,"top jalr_en", false,-1);
        tracep->declBit(c+173,"top jal_en", false,-1);
        tracep->declBit(c+6,"top wb_en", false,-1);
        tracep->declBit(c+174,"top wb_load", false,-1);
        tracep->declBit(c+7,"top wb_pc", false,-1);
        tracep->declBit(c+8,"top wb_alu", false,-1);
        tracep->declQuad(c+9,"top load_data", false,-1, 63,0);
        tracep->declQuad(c+11,"top rd_data1", false,-1, 63,0);
        tracep->declQuad(c+13,"top rd_data2", false,-1, 63,0);
        tracep->declBit(c+15,"top I_type", false,-1);
        tracep->declBit(c+175,"top S_type", false,-1);
        tracep->declBit(c+176,"top B_type", false,-1);
        tracep->declBit(c+16,"top U_type", false,-1);
        tracep->declBit(c+173,"top J_type", false,-1);
        tracep->declBit(c+17,"top rs1_en", false,-1);
        tracep->declBit(c+18,"top pc_en", false,-1);
        tracep->declBit(c+19,"top rs2_en", false,-1);
        tracep->declBit(c+20,"top imm_en", false,-1);
        tracep->declBit(c+21,"top lgc_en", false,-1);
        tracep->declBus(c+22,"top lgc_op", false,-1, 3,0);
        tracep->declBit(c+23,"top wlgc_en", false,-1);
        tracep->declBus(c+24,"top wlgc_op", false,-1, 4,0);
        tracep->declBit(c+25,"top mlgc_en", false,-1);
        tracep->declBus(c+177,"top mlgc_op", false,-1, 2,0);
        tracep->declBit(c+26,"top wmlgc_en", false,-1);
        tracep->declBus(c+178,"top wmlgc_op", false,-1, 3,0);
        tracep->declBit(c+176,"top br_en", false,-1);
        tracep->declBus(c+177,"top br_op", false,-1, 2,0);
        tracep->declBit(c+27,"top zero", false,-1);
        tracep->declBit(c+28,"top lb", false,-1);
        tracep->declBit(c+29,"top lh", false,-1);
        tracep->declBit(c+30,"top lw", false,-1);
        tracep->declBit(c+31,"top ld", false,-1);
        tracep->declBit(c+32,"top lbu", false,-1);
        tracep->declBit(c+33,"top lhu", false,-1);
        tracep->declBit(c+34,"top lwu", false,-1);
        tracep->declBit(c+35,"top sb", false,-1);
        tracep->declBit(c+36,"top sh", false,-1);
        tracep->declBit(c+37,"top sw", false,-1);
        tracep->declBit(c+38,"top sd", false,-1);
        tracep->declQuad(c+13,"top wdata_in", false,-1, 63,0);
        tracep->declQuad(c+3,"top addr_in", false,-1, 63,0);
        tracep->declBus(c+192,"top pc_gen_inst DW", false,-1, 31,0);
        tracep->declBit(c+151,"top pc_gen_inst clk", false,-1);
        tracep->declBit(c+152,"top pc_gen_inst rstn", false,-1);
        tracep->declQuad(c+1,"top pc_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+3,"top pc_gen_inst result", false,-1, 63,0);
        tracep->declBit(c+5,"top pc_gen_inst br_en", false,-1);
        tracep->declBit(c+172,"top pc_gen_inst jalr_en", false,-1);
        tracep->declBit(c+173,"top pc_gen_inst jal_en", false,-1);
        tracep->declQuad(c+158,"top pc_gen_inst snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+156,"top pc_gen_inst dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+160,"top pc_gen_inst pc", false,-1, 63,0);
        tracep->declQuad(c+39,"top pc_gen_inst br_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"top pc_gen_inst jal_pc", false,-1, 63,0);
        tracep->declQuad(c+41,"top pc_gen_inst jalr_pc", false,-1, 63,0);
        tracep->declBit(c+43,"top pc_gen_inst snxt_en", false,-1);
        tracep->declBus(c+192,"top regfile_inst DW", false,-1, 31,0);
        tracep->declBus(c+194,"top regfile_inst AW", false,-1, 31,0);
        tracep->declBit(c+151,"top regfile_inst clk", false,-1);
        tracep->declBit(c+152,"top regfile_inst rstn", false,-1);
        tracep->declBit(c+6,"top regfile_inst wb_en", false,-1);
        tracep->declBit(c+174,"top regfile_inst wb_load", false,-1);
        tracep->declBit(c+7,"top regfile_inst wb_pc", false,-1);
        tracep->declBit(c+8,"top regfile_inst wb_alu", false,-1);
        tracep->declBus(c+179,"top regfile_inst wb_addr", false,-1, 4,0);
        tracep->declQuad(c+9,"top regfile_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+158,"top regfile_inst pc_data", false,-1, 63,0);
        tracep->declQuad(c+3,"top regfile_inst alu_data", false,-1, 63,0);
        tracep->declQuad(c+153,"top regfile_inst a", false,-1, 63,0);
        tracep->declBus(c+180,"top regfile_inst rd_addr1", false,-1, 4,0);
        tracep->declBus(c+181,"top regfile_inst rd_addr2", false,-1, 4,0);
        tracep->declQuad(c+11,"top regfile_inst rd_data1", false,-1, 63,0);
        tracep->declQuad(c+13,"top regfile_inst rd_data2", false,-1, 63,0);
        tracep->declQuad(c+44,"top regfile_inst wb_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+86+i*2,"top regfile_inst gpr", true,(i+0), 63,0);}}
        tracep->declBus(c+150,"top regfile_inst i", false,-1, 31,0);
        tracep->declBus(c+192,"top imm_gen_inst DW", false,-1, 31,0);
        tracep->declBus(c+193,"top imm_gen_inst IW", false,-1, 31,0);
        tracep->declBit(c+15,"top imm_gen_inst I_type", false,-1);
        tracep->declBit(c+175,"top imm_gen_inst S_type", false,-1);
        tracep->declBit(c+176,"top imm_gen_inst B_type", false,-1);
        tracep->declBit(c+16,"top imm_gen_inst U_type", false,-1);
        tracep->declBit(c+173,"top imm_gen_inst J_type", false,-1);
        tracep->declBus(c+162,"top imm_gen_inst inst", false,-1, 31,0);
        tracep->declQuad(c+1,"top imm_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+46,"top imm_gen_inst immI_num", false,-1, 63,0);
        tracep->declQuad(c+48,"top imm_gen_inst immS_num", false,-1, 63,0);
        tracep->declQuad(c+50,"top imm_gen_inst immB_num", false,-1, 63,0);
        tracep->declQuad(c+52,"top imm_gen_inst immU_num", false,-1, 63,0);
        tracep->declQuad(c+54,"top imm_gen_inst immJ_num", false,-1, 63,0);
        tracep->declBus(c+192,"top alu_inst DW", false,-1, 31,0);
        tracep->declBit(c+17,"top alu_inst rs1_en", false,-1);
        tracep->declBit(c+18,"top alu_inst pc_en", false,-1);
        tracep->declQuad(c+11,"top alu_inst rs1_data", false,-1, 63,0);
        tracep->declQuad(c+160,"top alu_inst pc_data", false,-1, 63,0);
        tracep->declBit(c+19,"top alu_inst rs2_en", false,-1);
        tracep->declBit(c+20,"top alu_inst imm_en", false,-1);
        tracep->declQuad(c+13,"top alu_inst rs2_data", false,-1, 63,0);
        tracep->declQuad(c+1,"top alu_inst imm_data", false,-1, 63,0);
        tracep->declBit(c+21,"top alu_inst lgc_en", false,-1);
        tracep->declBus(c+22,"top alu_inst lgc_op", false,-1, 3,0);
        tracep->declBit(c+25,"top alu_inst mlgc_en", false,-1);
        tracep->declBus(c+177,"top alu_inst mlgc_op", false,-1, 2,0);
        tracep->declBit(c+26,"top alu_inst wmlgc_en", false,-1);
        tracep->declBus(c+178,"top alu_inst wmlgc_op", false,-1, 3,0);
        tracep->declBit(c+23,"top alu_inst wlgc_en", false,-1);
        tracep->declBus(c+24,"top alu_inst wlgc_op", false,-1, 4,0);
        tracep->declBit(c+176,"top alu_inst br_en", false,-1);
        tracep->declBus(c+177,"top alu_inst br_op", false,-1, 2,0);
        tracep->declQuad(c+3,"top alu_inst result", false,-1, 63,0);
        tracep->declBit(c+5,"top alu_inst br_asrt", false,-1);
        tracep->declBit(c+27,"top alu_inst zero", false,-1);
        tracep->declQuad(c+56,"top alu_inst opdata1", false,-1, 63,0);
        tracep->declQuad(c+58,"top alu_inst opdata2", false,-1, 63,0);
        tracep->declQuad(c+56,"top alu_inst uopdata1", false,-1, 63,0);
        tracep->declQuad(c+58,"top alu_inst uopdata2", false,-1, 63,0);
        tracep->declBus(c+60,"top alu_inst wopdata1", false,-1, 31,0);
        tracep->declBus(c+61,"top alu_inst wopdata2", false,-1, 31,0);
        tracep->declBus(c+60,"top alu_inst uwopdata1", false,-1, 31,0);
        tracep->declBus(c+61,"top alu_inst uwopdata2", false,-1, 31,0);
        tracep->declQuad(c+62,"top alu_inst lgc_result", false,-1, 63,0);
        tracep->declArray(c+64,"top alu_inst multu", false,-1, 127,0);
        tracep->declArray(c+64,"top alu_inst multsu", false,-1, 127,0);
        tracep->declQuad(c+68,"top alu_inst mlgc_result", false,-1, 63,0);
        tracep->declBus(c+70,"top alu_inst wmlgc_result", false,-1, 31,0);
        tracep->declBus(c+71,"top alu_inst wlgc_result", false,-1, 31,0);
        tracep->declBit(c+72,"top alu_inst br_result", false,-1);
        tracep->declBus(c+192,"top memory_inst DW", false,-1, 31,0);
        tracep->declBit(c+152,"top memory_inst rstn", false,-1);
        tracep->declBit(c+28,"top memory_inst lb", false,-1);
        tracep->declBit(c+29,"top memory_inst lh", false,-1);
        tracep->declBit(c+30,"top memory_inst lw", false,-1);
        tracep->declBit(c+31,"top memory_inst ld", false,-1);
        tracep->declBit(c+32,"top memory_inst lbu", false,-1);
        tracep->declBit(c+33,"top memory_inst lhu", false,-1);
        tracep->declBit(c+34,"top memory_inst lwu", false,-1);
        tracep->declBit(c+35,"top memory_inst sb", false,-1);
        tracep->declBit(c+36,"top memory_inst sh", false,-1);
        tracep->declBit(c+37,"top memory_inst sw", false,-1);
        tracep->declBit(c+38,"top memory_inst sd", false,-1);
        tracep->declQuad(c+13,"top memory_inst wdata_in", false,-1, 63,0);
        tracep->declQuad(c+3,"top memory_inst addr_in", false,-1, 63,0);
        tracep->declQuad(c+9,"top memory_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+163,"top memory_inst wdata", false,-1, 63,0);
        tracep->declBus(c+165,"top memory_inst wlen", false,-1, 3,0);
        tracep->declBit(c+166,"top memory_inst wen", false,-1);
        tracep->declBit(c+169,"top memory_inst ren", false,-1);
        tracep->declQuad(c+167,"top memory_inst rdata", false,-1, 63,0);
        tracep->declQuad(c+170,"top memory_inst addr", false,-1, 63,0);
        tracep->declQuad(c+73,"top memory_inst lb_data", false,-1, 63,0);
        tracep->declQuad(c+75,"top memory_inst lh_data", false,-1, 63,0);
        tracep->declQuad(c+77,"top memory_inst lw_data", false,-1, 63,0);
        tracep->declQuad(c+167,"top memory_inst ld_data", false,-1, 63,0);
        tracep->declQuad(c+182,"top memory_inst lbu_data", false,-1, 63,0);
        tracep->declQuad(c+184,"top memory_inst lhu_data", false,-1, 63,0);
        tracep->declQuad(c+186,"top memory_inst lwu_data", false,-1, 63,0);
        tracep->declBus(c+193,"top controlor_inst IW", false,-1, 31,0);
        tracep->declBus(c+162,"top controlor_inst inst", false,-1, 31,0);
        tracep->declBit(c+6,"top controlor_inst wb_en", false,-1);
        tracep->declBit(c+174,"top controlor_inst wb_load", false,-1);
        tracep->declBit(c+7,"top controlor_inst wb_pc", false,-1);
        tracep->declBit(c+8,"top controlor_inst wb_alu", false,-1);
        tracep->declBit(c+15,"top controlor_inst I_type", false,-1);
        tracep->declBit(c+175,"top controlor_inst S_type", false,-1);
        tracep->declBit(c+176,"top controlor_inst B_type", false,-1);
        tracep->declBit(c+16,"top controlor_inst U_type", false,-1);
        tracep->declBit(c+173,"top controlor_inst J_type", false,-1);
        tracep->declBit(c+17,"top controlor_inst rs1_en", false,-1);
        tracep->declBit(c+18,"top controlor_inst pc_en", false,-1);
        tracep->declBit(c+19,"top controlor_inst rs2_en", false,-1);
        tracep->declBit(c+20,"top controlor_inst imm_en", false,-1);
        tracep->declBit(c+21,"top controlor_inst lgc_en", false,-1);
        tracep->declBus(c+22,"top controlor_inst lgc_op", false,-1, 3,0);
        tracep->declBit(c+23,"top controlor_inst wlgc_en", false,-1);
        tracep->declBus(c+24,"top controlor_inst wlgc_op", false,-1, 4,0);
        tracep->declBit(c+176,"top controlor_inst br_en", false,-1);
        tracep->declBus(c+177,"top controlor_inst br_op", false,-1, 2,0);
        tracep->declBit(c+25,"top controlor_inst mlgc_en", false,-1);
        tracep->declBus(c+177,"top controlor_inst mlgc_op", false,-1, 2,0);
        tracep->declBit(c+26,"top controlor_inst wmlgc_en", false,-1);
        tracep->declBus(c+178,"top controlor_inst wmlgc_op", false,-1, 3,0);
        tracep->declBit(c+173,"top controlor_inst jal_en", false,-1);
        tracep->declBit(c+172,"top controlor_inst jalr_en", false,-1);
        tracep->declBit(c+28,"top controlor_inst lb", false,-1);
        tracep->declBit(c+29,"top controlor_inst lh", false,-1);
        tracep->declBit(c+30,"top controlor_inst lw", false,-1);
        tracep->declBit(c+31,"top controlor_inst ld", false,-1);
        tracep->declBit(c+32,"top controlor_inst lbu", false,-1);
        tracep->declBit(c+33,"top controlor_inst lhu", false,-1);
        tracep->declBit(c+34,"top controlor_inst lwu", false,-1);
        tracep->declBit(c+35,"top controlor_inst sb", false,-1);
        tracep->declBit(c+36,"top controlor_inst sh", false,-1);
        tracep->declBit(c+37,"top controlor_inst sw", false,-1);
        tracep->declBit(c+38,"top controlor_inst sd", false,-1);
        tracep->declBit(c+155,"top controlor_inst ebreak", false,-1);
        tracep->declBus(c+188,"top controlor_inst opcode", false,-1, 6,0);
        tracep->declBus(c+177,"top controlor_inst funct3", false,-1, 2,0);
        tracep->declBus(c+189,"top controlor_inst funct7", false,-1, 6,0);
        tracep->declBit(c+190,"top controlor_inst lui_en", false,-1);
        tracep->declBit(c+191,"top controlor_inst auipc_en", false,-1);
        tracep->declBit(c+174,"top controlor_inst load_en", false,-1);
        tracep->declBit(c+175,"top controlor_inst store_en", false,-1);
        tracep->declBit(c+79,"top controlor_inst immop_en", false,-1);
        tracep->declBit(c+80,"top controlor_inst immsf_en", false,-1);
        tracep->declBit(c+81,"top controlor_inst wimmop_en", false,-1);
        tracep->declBit(c+82,"top controlor_inst wimmsf_en", false,-1);
        tracep->declBit(c+83,"top controlor_inst rsop_en", false,-1);
        tracep->declBit(c+84,"top controlor_inst wrsop_en", false,-1);
        tracep->declBit(c+25,"top controlor_inst mrsop_en", false,-1);
        tracep->declBit(c+26,"top controlor_inst wmrsop_en", false,-1);
        tracep->declBit(c+85,"top controlor_inst R_type", false,-1);
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
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__br_asrt));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__wb_en));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__wb_pc));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__wb_alu));
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__load_data),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__rd_data1),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__rd_data2),64);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__I_type));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__U_type));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__rs1_en));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__pc_en));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__rs2_en));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__imm_en));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__lgc_en));
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__lgc_op),4);
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__wlgc_en));
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__wlgc_op),5);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en));
        tracep->fullBit(oldp+27,((0ULL == vlSelf->top__DOT__result)));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__lb));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__lh));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__lw));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__ld));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__lbu));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__lhu));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__lwu));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__sb));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__sh));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__sw));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__sd));
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__pc_gen_inst__DOT__br_pc),64);
        tracep->fullQData(oldp+41,((0xfffffffffffffffeULL 
                                    & vlSelf->top__DOT__result)),64);
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en));
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__regfile_inst__DOT__wb_data),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
        tracep->fullIData(oldp+60,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
        tracep->fullIData(oldp+61,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__alu_inst__DOT__lgc_result),64);
        tracep->fullWData(oldp+64,(vlSelf->top__DOT__alu_inst__DOT__multu),128);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__alu_inst__DOT__mlgc_result),64);
        tracep->fullIData(oldp+70,(vlSelf->top__DOT__alu_inst__DOT__wmlgc_result),32);
        tracep->fullIData(oldp+71,(vlSelf->top__DOT__alu_inst__DOT__wlgc_result),32);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__alu_inst__DOT__br_result));
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__memory_inst__DOT__lb_data),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__memory_inst__DOT__lh_data),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__memory_inst__DOT__lw_data),64);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__controlor_inst__DOT__immop_en));
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__controlor_inst__DOT__immsf_en));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__controlor_inst__DOT__rsop_en));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__controlor_inst__DOT__R_type));
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__regfile_inst__DOT__gpr[31]),64);
        tracep->fullIData(oldp+150,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        tracep->fullBit(oldp+151,(vlSelf->clk));
        tracep->fullBit(oldp+152,(vlSelf->rstn));
        tracep->fullQData(oldp+153,(vlSelf->a),64);
        tracep->fullBit(oldp+155,(vlSelf->ebreak));
        tracep->fullQData(oldp+156,(vlSelf->dnxt_pc),64);
        tracep->fullQData(oldp+158,(vlSelf->snxt_pc),64);
        tracep->fullQData(oldp+160,(vlSelf->pc),64);
        tracep->fullIData(oldp+162,(vlSelf->inst),32);
        tracep->fullQData(oldp+163,(vlSelf->wdata),64);
        tracep->fullCData(oldp+165,(vlSelf->wlen),4);
        tracep->fullBit(oldp+166,(vlSelf->wen));
        tracep->fullQData(oldp+167,(vlSelf->rdata),64);
        tracep->fullBit(oldp+169,(vlSelf->ren));
        tracep->fullQData(oldp+170,(vlSelf->addr),64);
        tracep->fullBit(oldp+172,((0x67U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+173,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+174,((3U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+175,((0x23U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+176,((0x63U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullCData(oldp+177,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+178,((8U | (7U & (vlSelf->inst 
                                                 >> 0xcU)))),4);
        tracep->fullCData(oldp+179,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+180,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+181,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+182,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->rdata))))),64);
        tracep->fullQData(oldp+184,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->rdata))))),64);
        tracep->fullQData(oldp+186,((QData)((IData)(vlSelf->rdata))),64);
        tracep->fullCData(oldp+188,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+189,((vlSelf->inst >> 0x19U)),7);
        tracep->fullBit(oldp+190,((0x37U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+191,((0x17U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullIData(oldp+192,(0x40U),32);
        tracep->fullIData(oldp+193,(0x20U),32);
        tracep->fullIData(oldp+194,(5U),32);
    }
}
