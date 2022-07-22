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
        tracep->declBit(c+159,"clk", false,-1);
        tracep->declBit(c+160,"rstn", false,-1);
        tracep->declQuad(c+161,"a", false,-1, 63,0);
        tracep->declBit(c+163,"ebreak", false,-1);
        tracep->declQuad(c+164,"dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+166,"snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+168,"pc", false,-1, 63,0);
        tracep->declBus(c+170,"inst", false,-1, 31,0);
        tracep->declQuad(c+171,"wdata", false,-1, 63,0);
        tracep->declBus(c+173,"wlen", false,-1, 3,0);
        tracep->declBit(c+174,"wen", false,-1);
        tracep->declBit(c+175,"ren", false,-1);
        tracep->declQuad(c+176,"addr", false,-1, 63,0);
        tracep->declBus(c+192,"top DW", false,-1, 31,0);
        tracep->declBus(c+193,"top IW", false,-1, 31,0);
        tracep->declBit(c+159,"top clk", false,-1);
        tracep->declBit(c+160,"top rstn", false,-1);
        tracep->declQuad(c+161,"top a", false,-1, 63,0);
        tracep->declBit(c+163,"top ebreak", false,-1);
        tracep->declQuad(c+164,"top dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+166,"top snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+168,"top pc", false,-1, 63,0);
        tracep->declBus(c+170,"top inst", false,-1, 31,0);
        tracep->declQuad(c+171,"top wdata", false,-1, 63,0);
        tracep->declBus(c+173,"top wlen", false,-1, 3,0);
        tracep->declBit(c+174,"top wen", false,-1);
        tracep->declBit(c+175,"top ren", false,-1);
        tracep->declQuad(c+176,"top addr", false,-1, 63,0);
        tracep->declQuad(c+1,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+3,"top imm", false,-1, 63,0);
        tracep->declQuad(c+5,"top result", false,-1, 63,0);
        tracep->declBit(c+7,"top br_asrt", false,-1);
        tracep->declBit(c+178,"top jalr_en", false,-1);
        tracep->declBit(c+179,"top jal_en", false,-1);
        tracep->declBit(c+8,"top wb_en", false,-1);
        tracep->declBit(c+180,"top wb_load", false,-1);
        tracep->declBit(c+9,"top wb_pc", false,-1);
        tracep->declBit(c+10,"top wb_alu", false,-1);
        tracep->declQuad(c+11,"top load_data", false,-1, 63,0);
        tracep->declQuad(c+13,"top rd_data1", false,-1, 63,0);
        tracep->declQuad(c+15,"top rd_data2", false,-1, 63,0);
        tracep->declBit(c+17,"top I_type", false,-1);
        tracep->declBit(c+181,"top S_type", false,-1);
        tracep->declBit(c+182,"top B_type", false,-1);
        tracep->declBit(c+18,"top U_type", false,-1);
        tracep->declBit(c+179,"top J_type", false,-1);
        tracep->declBit(c+19,"top rs1_en", false,-1);
        tracep->declBit(c+20,"top pc_en", false,-1);
        tracep->declBit(c+21,"top rs2_en", false,-1);
        tracep->declBit(c+22,"top imm_en", false,-1);
        tracep->declBit(c+23,"top lgc_en", false,-1);
        tracep->declBus(c+24,"top lgc_op", false,-1, 3,0);
        tracep->declBit(c+25,"top wlgc_en", false,-1);
        tracep->declBus(c+26,"top wlgc_op", false,-1, 4,0);
        tracep->declBit(c+27,"top mlgc_en", false,-1);
        tracep->declBus(c+183,"top mlgc_op", false,-1, 2,0);
        tracep->declBit(c+28,"top wmlgc_en", false,-1);
        tracep->declBus(c+184,"top wmlgc_op", false,-1, 3,0);
        tracep->declBit(c+182,"top br_en", false,-1);
        tracep->declBus(c+183,"top br_op", false,-1, 2,0);
        tracep->declBit(c+29,"top zero", false,-1);
        tracep->declBit(c+30,"top lb", false,-1);
        tracep->declBit(c+31,"top lh", false,-1);
        tracep->declBit(c+32,"top lw", false,-1);
        tracep->declBit(c+33,"top ld", false,-1);
        tracep->declBit(c+34,"top lbu", false,-1);
        tracep->declBit(c+35,"top lhu", false,-1);
        tracep->declBit(c+36,"top lwu", false,-1);
        tracep->declBit(c+37,"top sb", false,-1);
        tracep->declBit(c+38,"top sh", false,-1);
        tracep->declBit(c+39,"top sw", false,-1);
        tracep->declBit(c+40,"top sd", false,-1);
        tracep->declQuad(c+15,"top wdata_in", false,-1, 63,0);
        tracep->declQuad(c+5,"top addr_in", false,-1, 63,0);
        tracep->declBus(c+192,"top pc_gen_inst DW", false,-1, 31,0);
        tracep->declBit(c+159,"top pc_gen_inst clk", false,-1);
        tracep->declBit(c+160,"top pc_gen_inst rstn", false,-1);
        tracep->declQuad(c+3,"top pc_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+5,"top pc_gen_inst result", false,-1, 63,0);
        tracep->declBit(c+7,"top pc_gen_inst br_en", false,-1);
        tracep->declBit(c+178,"top pc_gen_inst jalr_en", false,-1);
        tracep->declBit(c+179,"top pc_gen_inst jal_en", false,-1);
        tracep->declQuad(c+166,"top pc_gen_inst snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+164,"top pc_gen_inst dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+168,"top pc_gen_inst pc", false,-1, 63,0);
        tracep->declQuad(c+41,"top pc_gen_inst br_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"top pc_gen_inst jal_pc", false,-1, 63,0);
        tracep->declQuad(c+43,"top pc_gen_inst jalr_pc", false,-1, 63,0);
        tracep->declBit(c+45,"top pc_gen_inst snxt_en", false,-1);
        tracep->declBus(c+192,"top regfile_inst DW", false,-1, 31,0);
        tracep->declBus(c+194,"top regfile_inst AW", false,-1, 31,0);
        tracep->declBit(c+159,"top regfile_inst clk", false,-1);
        tracep->declBit(c+160,"top regfile_inst rstn", false,-1);
        tracep->declBit(c+8,"top regfile_inst wb_en", false,-1);
        tracep->declBit(c+180,"top regfile_inst wb_load", false,-1);
        tracep->declBit(c+9,"top regfile_inst wb_pc", false,-1);
        tracep->declBit(c+10,"top regfile_inst wb_alu", false,-1);
        tracep->declBus(c+185,"top regfile_inst wb_addr", false,-1, 4,0);
        tracep->declQuad(c+11,"top regfile_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+166,"top regfile_inst pc_data", false,-1, 63,0);
        tracep->declQuad(c+5,"top regfile_inst alu_data", false,-1, 63,0);
        tracep->declQuad(c+161,"top regfile_inst a", false,-1, 63,0);
        tracep->declBus(c+186,"top regfile_inst rd_addr1", false,-1, 4,0);
        tracep->declBus(c+187,"top regfile_inst rd_addr2", false,-1, 4,0);
        tracep->declQuad(c+13,"top regfile_inst rd_data1", false,-1, 63,0);
        tracep->declQuad(c+15,"top regfile_inst rd_data2", false,-1, 63,0);
        tracep->declQuad(c+46,"top regfile_inst wb_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+94+i*2,"top regfile_inst gpr", true,(i+0), 63,0);}}
        tracep->declBus(c+158,"top regfile_inst i", false,-1, 31,0);
        tracep->declBus(c+192,"top imm_gen_inst DW", false,-1, 31,0);
        tracep->declBus(c+193,"top imm_gen_inst IW", false,-1, 31,0);
        tracep->declBit(c+17,"top imm_gen_inst I_type", false,-1);
        tracep->declBit(c+181,"top imm_gen_inst S_type", false,-1);
        tracep->declBit(c+182,"top imm_gen_inst B_type", false,-1);
        tracep->declBit(c+18,"top imm_gen_inst U_type", false,-1);
        tracep->declBit(c+179,"top imm_gen_inst J_type", false,-1);
        tracep->declBus(c+170,"top imm_gen_inst inst", false,-1, 31,0);
        tracep->declQuad(c+3,"top imm_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+48,"top imm_gen_inst immI_num", false,-1, 63,0);
        tracep->declQuad(c+50,"top imm_gen_inst immS_num", false,-1, 63,0);
        tracep->declQuad(c+52,"top imm_gen_inst immB_num", false,-1, 63,0);
        tracep->declQuad(c+54,"top imm_gen_inst immU_num", false,-1, 63,0);
        tracep->declQuad(c+56,"top imm_gen_inst immJ_num", false,-1, 63,0);
        tracep->declBus(c+192,"top alu_inst DW", false,-1, 31,0);
        tracep->declBit(c+19,"top alu_inst rs1_en", false,-1);
        tracep->declBit(c+20,"top alu_inst pc_en", false,-1);
        tracep->declQuad(c+13,"top alu_inst rs1_data", false,-1, 63,0);
        tracep->declQuad(c+168,"top alu_inst pc_data", false,-1, 63,0);
        tracep->declBit(c+21,"top alu_inst rs2_en", false,-1);
        tracep->declBit(c+22,"top alu_inst imm_en", false,-1);
        tracep->declQuad(c+15,"top alu_inst rs2_data", false,-1, 63,0);
        tracep->declQuad(c+3,"top alu_inst imm_data", false,-1, 63,0);
        tracep->declBit(c+23,"top alu_inst lgc_en", false,-1);
        tracep->declBus(c+24,"top alu_inst lgc_op", false,-1, 3,0);
        tracep->declBit(c+27,"top alu_inst mlgc_en", false,-1);
        tracep->declBus(c+183,"top alu_inst mlgc_op", false,-1, 2,0);
        tracep->declBit(c+28,"top alu_inst wmlgc_en", false,-1);
        tracep->declBus(c+184,"top alu_inst wmlgc_op", false,-1, 3,0);
        tracep->declBit(c+25,"top alu_inst wlgc_en", false,-1);
        tracep->declBus(c+26,"top alu_inst wlgc_op", false,-1, 4,0);
        tracep->declBit(c+182,"top alu_inst br_en", false,-1);
        tracep->declBus(c+183,"top alu_inst br_op", false,-1, 2,0);
        tracep->declQuad(c+5,"top alu_inst result", false,-1, 63,0);
        tracep->declBit(c+7,"top alu_inst br_asrt", false,-1);
        tracep->declBit(c+29,"top alu_inst zero", false,-1);
        tracep->declQuad(c+58,"top alu_inst opdata1", false,-1, 63,0);
        tracep->declQuad(c+60,"top alu_inst opdata2", false,-1, 63,0);
        tracep->declQuad(c+58,"top alu_inst uopdata1", false,-1, 63,0);
        tracep->declQuad(c+60,"top alu_inst uopdata2", false,-1, 63,0);
        tracep->declBus(c+62,"top alu_inst wopdata1", false,-1, 31,0);
        tracep->declBus(c+63,"top alu_inst wopdata2", false,-1, 31,0);
        tracep->declBus(c+62,"top alu_inst uwopdata1", false,-1, 31,0);
        tracep->declBus(c+63,"top alu_inst uwopdata2", false,-1, 31,0);
        tracep->declQuad(c+64,"top alu_inst lgc_result", false,-1, 63,0);
        tracep->declArray(c+66,"top alu_inst multu", false,-1, 127,0);
        tracep->declArray(c+66,"top alu_inst multsu", false,-1, 127,0);
        tracep->declQuad(c+70,"top alu_inst mlgc_result", false,-1, 63,0);
        tracep->declBus(c+72,"top alu_inst wmlgc_result", false,-1, 31,0);
        tracep->declBus(c+73,"top alu_inst wlgc_result", false,-1, 31,0);
        tracep->declBit(c+74,"top alu_inst br_result", false,-1);
        tracep->declBus(c+192,"top memory_inst DW", false,-1, 31,0);
        tracep->declBit(c+160,"top memory_inst rstn", false,-1);
        tracep->declBit(c+30,"top memory_inst lb", false,-1);
        tracep->declBit(c+31,"top memory_inst lh", false,-1);
        tracep->declBit(c+32,"top memory_inst lw", false,-1);
        tracep->declBit(c+33,"top memory_inst ld", false,-1);
        tracep->declBit(c+34,"top memory_inst lbu", false,-1);
        tracep->declBit(c+35,"top memory_inst lhu", false,-1);
        tracep->declBit(c+36,"top memory_inst lwu", false,-1);
        tracep->declBit(c+37,"top memory_inst sb", false,-1);
        tracep->declBit(c+38,"top memory_inst sh", false,-1);
        tracep->declBit(c+39,"top memory_inst sw", false,-1);
        tracep->declBit(c+40,"top memory_inst sd", false,-1);
        tracep->declQuad(c+15,"top memory_inst wdata_in", false,-1, 63,0);
        tracep->declQuad(c+5,"top memory_inst addr_in", false,-1, 63,0);
        tracep->declQuad(c+11,"top memory_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+171,"top memory_inst wdata", false,-1, 63,0);
        tracep->declBus(c+173,"top memory_inst wlen", false,-1, 3,0);
        tracep->declBit(c+174,"top memory_inst wen", false,-1);
        tracep->declBit(c+175,"top memory_inst ren", false,-1);
        tracep->declQuad(c+1,"top memory_inst rdata", false,-1, 63,0);
        tracep->declQuad(c+176,"top memory_inst addr", false,-1, 63,0);
        tracep->declQuad(c+75,"top memory_inst lb_data", false,-1, 63,0);
        tracep->declQuad(c+77,"top memory_inst lh_data", false,-1, 63,0);
        tracep->declQuad(c+79,"top memory_inst lw_data", false,-1, 63,0);
        tracep->declQuad(c+1,"top memory_inst ld_data", false,-1, 63,0);
        tracep->declQuad(c+81,"top memory_inst lbu_data", false,-1, 63,0);
        tracep->declQuad(c+83,"top memory_inst lhu_data", false,-1, 63,0);
        tracep->declQuad(c+85,"top memory_inst lwu_data", false,-1, 63,0);
        tracep->declBus(c+193,"top controlor_inst IW", false,-1, 31,0);
        tracep->declBus(c+170,"top controlor_inst inst", false,-1, 31,0);
        tracep->declBit(c+8,"top controlor_inst wb_en", false,-1);
        tracep->declBit(c+180,"top controlor_inst wb_load", false,-1);
        tracep->declBit(c+9,"top controlor_inst wb_pc", false,-1);
        tracep->declBit(c+10,"top controlor_inst wb_alu", false,-1);
        tracep->declBit(c+17,"top controlor_inst I_type", false,-1);
        tracep->declBit(c+181,"top controlor_inst S_type", false,-1);
        tracep->declBit(c+182,"top controlor_inst B_type", false,-1);
        tracep->declBit(c+18,"top controlor_inst U_type", false,-1);
        tracep->declBit(c+179,"top controlor_inst J_type", false,-1);
        tracep->declBit(c+19,"top controlor_inst rs1_en", false,-1);
        tracep->declBit(c+20,"top controlor_inst pc_en", false,-1);
        tracep->declBit(c+21,"top controlor_inst rs2_en", false,-1);
        tracep->declBit(c+22,"top controlor_inst imm_en", false,-1);
        tracep->declBit(c+23,"top controlor_inst lgc_en", false,-1);
        tracep->declBus(c+24,"top controlor_inst lgc_op", false,-1, 3,0);
        tracep->declBit(c+25,"top controlor_inst wlgc_en", false,-1);
        tracep->declBus(c+26,"top controlor_inst wlgc_op", false,-1, 4,0);
        tracep->declBit(c+182,"top controlor_inst br_en", false,-1);
        tracep->declBus(c+183,"top controlor_inst br_op", false,-1, 2,0);
        tracep->declBit(c+27,"top controlor_inst mlgc_en", false,-1);
        tracep->declBus(c+183,"top controlor_inst mlgc_op", false,-1, 2,0);
        tracep->declBit(c+28,"top controlor_inst wmlgc_en", false,-1);
        tracep->declBus(c+184,"top controlor_inst wmlgc_op", false,-1, 3,0);
        tracep->declBit(c+179,"top controlor_inst jal_en", false,-1);
        tracep->declBit(c+178,"top controlor_inst jalr_en", false,-1);
        tracep->declBit(c+30,"top controlor_inst lb", false,-1);
        tracep->declBit(c+31,"top controlor_inst lh", false,-1);
        tracep->declBit(c+32,"top controlor_inst lw", false,-1);
        tracep->declBit(c+33,"top controlor_inst ld", false,-1);
        tracep->declBit(c+34,"top controlor_inst lbu", false,-1);
        tracep->declBit(c+35,"top controlor_inst lhu", false,-1);
        tracep->declBit(c+36,"top controlor_inst lwu", false,-1);
        tracep->declBit(c+37,"top controlor_inst sb", false,-1);
        tracep->declBit(c+38,"top controlor_inst sh", false,-1);
        tracep->declBit(c+39,"top controlor_inst sw", false,-1);
        tracep->declBit(c+40,"top controlor_inst sd", false,-1);
        tracep->declBit(c+163,"top controlor_inst ebreak", false,-1);
        tracep->declBus(c+188,"top controlor_inst opcode", false,-1, 6,0);
        tracep->declBus(c+183,"top controlor_inst funct3", false,-1, 2,0);
        tracep->declBus(c+189,"top controlor_inst funct7", false,-1, 6,0);
        tracep->declBit(c+190,"top controlor_inst lui_en", false,-1);
        tracep->declBit(c+191,"top controlor_inst auipc_en", false,-1);
        tracep->declBit(c+180,"top controlor_inst load_en", false,-1);
        tracep->declBit(c+181,"top controlor_inst store_en", false,-1);
        tracep->declBit(c+87,"top controlor_inst immop_en", false,-1);
        tracep->declBit(c+88,"top controlor_inst immsf_en", false,-1);
        tracep->declBit(c+89,"top controlor_inst wimmop_en", false,-1);
        tracep->declBit(c+90,"top controlor_inst wimmsf_en", false,-1);
        tracep->declBit(c+91,"top controlor_inst rsop_en", false,-1);
        tracep->declBit(c+92,"top controlor_inst wrsop_en", false,-1);
        tracep->declBit(c+27,"top controlor_inst mrsop_en", false,-1);
        tracep->declBit(c+28,"top controlor_inst wmrsop_en", false,-1);
        tracep->declBit(c+93,"top controlor_inst R_type", false,-1);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__result),64);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__br_asrt));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__wb_en));
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__wb_pc));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__wb_alu));
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__load_data),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__rd_data1),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__rd_data2),64);
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__I_type));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__U_type));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__rs1_en));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__pc_en));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__rs2_en));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__imm_en));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__lgc_en));
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__lgc_op),4);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__wlgc_en));
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__wlgc_op),5);
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en));
        tracep->fullBit(oldp+29,((0ULL == vlSelf->top__DOT__result)));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__lb));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__lh));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__lw));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__ld));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__lbu));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__lhu));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__lwu));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__sb));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__sh));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__sw));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__sd));
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__pc_gen_inst__DOT__br_pc),64);
        tracep->fullQData(oldp+43,((0xfffffffffffffffeULL 
                                    & vlSelf->top__DOT__result)),64);
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en));
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__regfile_inst__DOT__wb_data),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
        tracep->fullIData(oldp+62,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
        tracep->fullIData(oldp+63,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__alu_inst__DOT__lgc_result),64);
        tracep->fullWData(oldp+66,(vlSelf->top__DOT__alu_inst__DOT__multu),128);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__alu_inst__DOT__mlgc_result),64);
        tracep->fullIData(oldp+72,(vlSelf->top__DOT__alu_inst__DOT__wmlgc_result),32);
        tracep->fullIData(oldp+73,(vlSelf->top__DOT__alu_inst__DOT__wlgc_result),32);
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__alu_inst__DOT__br_result));
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__memory_inst__DOT__lb_data),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__memory_inst__DOT__lh_data),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__memory_inst__DOT__lw_data),64);
        tracep->fullQData(oldp+81,((QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(vlSelf->top__DOT__rdata))))),64);
        tracep->fullQData(oldp+83,((QData)((IData)(
                                                   (0xffffU 
                                                    & (IData)(vlSelf->top__DOT__rdata))))),64);
        tracep->fullQData(oldp+85,((QData)((IData)(vlSelf->top__DOT__rdata))),64);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__controlor_inst__DOT__immop_en));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__controlor_inst__DOT__immsf_en));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en));
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__controlor_inst__DOT__rsop_en));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en));
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__controlor_inst__DOT__R_type));
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__regfile_inst__DOT__gpr[31]),64);
        tracep->fullIData(oldp+158,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        tracep->fullBit(oldp+159,(vlSelf->clk));
        tracep->fullBit(oldp+160,(vlSelf->rstn));
        tracep->fullQData(oldp+161,(vlSelf->a),64);
        tracep->fullBit(oldp+163,(vlSelf->ebreak));
        tracep->fullQData(oldp+164,(vlSelf->dnxt_pc),64);
        tracep->fullQData(oldp+166,(vlSelf->snxt_pc),64);
        tracep->fullQData(oldp+168,(vlSelf->pc),64);
        tracep->fullIData(oldp+170,(vlSelf->inst),32);
        tracep->fullQData(oldp+171,(vlSelf->wdata),64);
        tracep->fullCData(oldp+173,(vlSelf->wlen),4);
        tracep->fullBit(oldp+174,(vlSelf->wen));
        tracep->fullBit(oldp+175,(vlSelf->ren));
        tracep->fullQData(oldp+176,(vlSelf->addr),64);
        tracep->fullBit(oldp+178,((0x67U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+179,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+180,((3U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+181,((0x23U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+182,((0x63U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullCData(oldp+183,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+184,((8U | (7U & (vlSelf->inst 
                                                 >> 0xcU)))),4);
        tracep->fullCData(oldp+185,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+186,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+187,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
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
