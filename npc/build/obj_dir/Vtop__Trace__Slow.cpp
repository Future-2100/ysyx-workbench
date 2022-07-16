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
        tracep->declBit(c+107,"clk", false,-1);
        tracep->declBit(c+108,"rstn", false,-1);
        tracep->declQuad(c+109,"a", false,-1, 63,0);
        tracep->declBit(c+111,"ebreak", false,-1);
        tracep->declQuad(c+112,"dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+114,"pc", false,-1, 63,0);
        tracep->declBus(c+116,"inst", false,-1, 31,0);
        tracep->declQuad(c+117,"wdata", false,-1, 63,0);
        tracep->declBus(c+119,"wlen", false,-1, 2,0);
        tracep->declBit(c+120,"wen", false,-1);
        tracep->declBit(c+121,"ren", false,-1);
        tracep->declQuad(c+122,"addr", false,-1, 63,0);
        tracep->declQuad(c+124,"rdata", false,-1, 63,0);
        tracep->declBus(c+182,"top DW", false,-1, 31,0);
        tracep->declBus(c+183,"top IW", false,-1, 31,0);
        tracep->declBit(c+107,"top clk", false,-1);
        tracep->declBit(c+108,"top rstn", false,-1);
        tracep->declQuad(c+109,"top a", false,-1, 63,0);
        tracep->declBit(c+111,"top ebreak", false,-1);
        tracep->declQuad(c+112,"top dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+114,"top pc", false,-1, 63,0);
        tracep->declBus(c+116,"top inst", false,-1, 31,0);
        tracep->declQuad(c+117,"top wdata", false,-1, 63,0);
        tracep->declBus(c+119,"top wlen", false,-1, 2,0);
        tracep->declBit(c+120,"top wen", false,-1);
        tracep->declBit(c+121,"top ren", false,-1);
        tracep->declQuad(c+122,"top addr", false,-1, 63,0);
        tracep->declQuad(c+124,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+1,"top imm", false,-1, 63,0);
        tracep->declQuad(c+3,"top result", false,-1, 63,0);
        tracep->declBit(c+5,"top br_asrt", false,-1);
        tracep->declBit(c+126,"top jalr_en", false,-1);
        tracep->declBit(c+127,"top jal_en", false,-1);
        tracep->declQuad(c+128,"top snxt_pc", false,-1, 63,0);
        tracep->declBit(c+130,"top wb_en", false,-1);
        tracep->declBit(c+131,"top wb_load", false,-1);
        tracep->declBit(c+132,"top wb_pc", false,-1);
        tracep->declBit(c+133,"top wb_alu", false,-1);
        tracep->declQuad(c+134,"top load_data", false,-1, 63,0);
        tracep->declQuad(c+136,"top rd_data1", false,-1, 63,0);
        tracep->declQuad(c+6,"top rd_data2", false,-1, 63,0);
        tracep->declBit(c+8,"top I_type", false,-1);
        tracep->declBit(c+138,"top S_type", false,-1);
        tracep->declBit(c+139,"top B_type", false,-1);
        tracep->declBit(c+9,"top U_type", false,-1);
        tracep->declBit(c+127,"top J_type", false,-1);
        tracep->declBit(c+140,"top rs1_en", false,-1);
        tracep->declBit(c+141,"top pc_en", false,-1);
        tracep->declBit(c+142,"top rs2_en", false,-1);
        tracep->declBit(c+143,"top imm_en", false,-1);
        tracep->declBit(c+144,"top lgc_en", false,-1);
        tracep->declBus(c+10,"top lgc_op", false,-1, 3,0);
        tracep->declBit(c+145,"top wlgc_en", false,-1);
        tracep->declBus(c+11,"top wlgc_op", false,-1, 4,0);
        tracep->declBit(c+139,"top br_en", false,-1);
        tracep->declBus(c+146,"top br_op", false,-1, 2,0);
        tracep->declBit(c+12,"top zero", false,-1);
        tracep->declBit(c+13,"top lb", false,-1);
        tracep->declBit(c+14,"top lh", false,-1);
        tracep->declBit(c+15,"top lw", false,-1);
        tracep->declBit(c+16,"top ld", false,-1);
        tracep->declBit(c+17,"top lbu", false,-1);
        tracep->declBit(c+18,"top lhu", false,-1);
        tracep->declBit(c+19,"top lwu", false,-1);
        tracep->declBit(c+20,"top sb", false,-1);
        tracep->declBit(c+21,"top sh", false,-1);
        tracep->declBit(c+22,"top sw", false,-1);
        tracep->declBit(c+23,"top sd", false,-1);
        tracep->declQuad(c+6,"top wdata_in", false,-1, 63,0);
        tracep->declQuad(c+3,"top addr_in", false,-1, 63,0);
        tracep->declBus(c+182,"top pc_gen_inst DW", false,-1, 31,0);
        tracep->declBit(c+107,"top pc_gen_inst clk", false,-1);
        tracep->declBit(c+108,"top pc_gen_inst rstn", false,-1);
        tracep->declQuad(c+1,"top pc_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+3,"top pc_gen_inst result", false,-1, 63,0);
        tracep->declBit(c+5,"top pc_gen_inst br_en", false,-1);
        tracep->declBit(c+126,"top pc_gen_inst jalr_en", false,-1);
        tracep->declBit(c+127,"top pc_gen_inst jal_en", false,-1);
        tracep->declQuad(c+128,"top pc_gen_inst snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+112,"top pc_gen_inst dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+114,"top pc_gen_inst pc", false,-1, 63,0);
        tracep->declQuad(c+147,"top pc_gen_inst br_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"top pc_gen_inst jal_pc", false,-1, 63,0);
        tracep->declQuad(c+24,"top pc_gen_inst jalr_pc", false,-1, 63,0);
        tracep->declBit(c+149,"top pc_gen_inst snxt_en", false,-1);
        tracep->declBus(c+182,"top regfile_inst DW", false,-1, 31,0);
        tracep->declBus(c+184,"top regfile_inst AW", false,-1, 31,0);
        tracep->declBit(c+107,"top regfile_inst clk", false,-1);
        tracep->declBit(c+108,"top regfile_inst rstn", false,-1);
        tracep->declBit(c+130,"top regfile_inst wb_en", false,-1);
        tracep->declBit(c+131,"top regfile_inst wb_load", false,-1);
        tracep->declBit(c+132,"top regfile_inst wb_pc", false,-1);
        tracep->declBit(c+133,"top regfile_inst wb_alu", false,-1);
        tracep->declBus(c+150,"top regfile_inst wb_addr", false,-1, 4,0);
        tracep->declQuad(c+134,"top regfile_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+128,"top regfile_inst pc_data", false,-1, 63,0);
        tracep->declQuad(c+3,"top regfile_inst alu_data", false,-1, 63,0);
        tracep->declQuad(c+109,"top regfile_inst a", false,-1, 63,0);
        tracep->declBus(c+151,"top regfile_inst rd_addr1", false,-1, 4,0);
        tracep->declBus(c+152,"top regfile_inst rd_addr2", false,-1, 4,0);
        tracep->declQuad(c+136,"top regfile_inst rd_data1", false,-1, 63,0);
        tracep->declQuad(c+6,"top regfile_inst rd_data2", false,-1, 63,0);
        tracep->declQuad(c+26,"top regfile_inst wb_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+42+i*2,"top regfile_inst gpr", true,(i+0), 63,0);}}
        tracep->declBus(c+106,"top regfile_inst i", false,-1, 31,0);
        tracep->declBus(c+182,"top imm_gen_inst DW", false,-1, 31,0);
        tracep->declBus(c+183,"top imm_gen_inst IW", false,-1, 31,0);
        tracep->declBit(c+8,"top imm_gen_inst I_type", false,-1);
        tracep->declBit(c+138,"top imm_gen_inst S_type", false,-1);
        tracep->declBit(c+139,"top imm_gen_inst B_type", false,-1);
        tracep->declBit(c+9,"top imm_gen_inst U_type", false,-1);
        tracep->declBit(c+127,"top imm_gen_inst J_type", false,-1);
        tracep->declBus(c+116,"top imm_gen_inst inst", false,-1, 31,0);
        tracep->declQuad(c+1,"top imm_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+153,"top imm_gen_inst immI_num", false,-1, 63,0);
        tracep->declQuad(c+155,"top imm_gen_inst immS_num", false,-1, 63,0);
        tracep->declQuad(c+157,"top imm_gen_inst immB_num", false,-1, 63,0);
        tracep->declQuad(c+159,"top imm_gen_inst immU_num", false,-1, 63,0);
        tracep->declQuad(c+161,"top imm_gen_inst immJ_num", false,-1, 63,0);
        tracep->declBus(c+182,"top alu_inst DW", false,-1, 31,0);
        tracep->declBit(c+140,"top alu_inst rs1_en", false,-1);
        tracep->declBit(c+141,"top alu_inst pc_en", false,-1);
        tracep->declQuad(c+136,"top alu_inst rs1_data", false,-1, 63,0);
        tracep->declQuad(c+114,"top alu_inst pc_data", false,-1, 63,0);
        tracep->declBit(c+142,"top alu_inst rs2_en", false,-1);
        tracep->declBit(c+143,"top alu_inst imm_en", false,-1);
        tracep->declQuad(c+6,"top alu_inst rs2_data", false,-1, 63,0);
        tracep->declQuad(c+1,"top alu_inst imm_data", false,-1, 63,0);
        tracep->declBit(c+144,"top alu_inst lgc_en", false,-1);
        tracep->declBus(c+10,"top alu_inst lgc_op", false,-1, 3,0);
        tracep->declBit(c+145,"top alu_inst wlgc_en", false,-1);
        tracep->declBus(c+11,"top alu_inst wlgc_op", false,-1, 4,0);
        tracep->declBit(c+139,"top alu_inst br_en", false,-1);
        tracep->declBus(c+146,"top alu_inst br_op", false,-1, 2,0);
        tracep->declQuad(c+3,"top alu_inst result", false,-1, 63,0);
        tracep->declBit(c+5,"top alu_inst br_asrt", false,-1);
        tracep->declBit(c+12,"top alu_inst zero", false,-1);
        tracep->declQuad(c+28,"top alu_inst opdata1", false,-1, 63,0);
        tracep->declQuad(c+30,"top alu_inst opdata2", false,-1, 63,0);
        tracep->declQuad(c+28,"top alu_inst uopdata1", false,-1, 63,0);
        tracep->declQuad(c+30,"top alu_inst uopdata2", false,-1, 63,0);
        tracep->declBus(c+32,"top alu_inst wopdata1", false,-1, 31,0);
        tracep->declBus(c+33,"top alu_inst wopdata2", false,-1, 31,0);
        tracep->declQuad(c+34,"top alu_inst lgc_result", false,-1, 63,0);
        tracep->declBus(c+36,"top alu_inst wlgc_result", false,-1, 31,0);
        tracep->declBit(c+163,"top alu_inst br_result", false,-1);
        tracep->declBus(c+182,"top memory_inst DW", false,-1, 31,0);
        tracep->declBit(c+108,"top memory_inst rstn", false,-1);
        tracep->declBit(c+13,"top memory_inst lb", false,-1);
        tracep->declBit(c+14,"top memory_inst lh", false,-1);
        tracep->declBit(c+15,"top memory_inst lw", false,-1);
        tracep->declBit(c+16,"top memory_inst ld", false,-1);
        tracep->declBit(c+17,"top memory_inst lbu", false,-1);
        tracep->declBit(c+18,"top memory_inst lhu", false,-1);
        tracep->declBit(c+19,"top memory_inst lwu", false,-1);
        tracep->declBit(c+20,"top memory_inst sb", false,-1);
        tracep->declBit(c+21,"top memory_inst sh", false,-1);
        tracep->declBit(c+22,"top memory_inst sw", false,-1);
        tracep->declBit(c+23,"top memory_inst sd", false,-1);
        tracep->declQuad(c+6,"top memory_inst wdata_in", false,-1, 63,0);
        tracep->declQuad(c+3,"top memory_inst addr_in", false,-1, 63,0);
        tracep->declQuad(c+134,"top memory_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+117,"top memory_inst wdata", false,-1, 63,0);
        tracep->declBus(c+119,"top memory_inst wlen", false,-1, 2,0);
        tracep->declBit(c+120,"top memory_inst wen", false,-1);
        tracep->declBit(c+121,"top memory_inst ren", false,-1);
        tracep->declQuad(c+124,"top memory_inst rdata", false,-1, 63,0);
        tracep->declQuad(c+122,"top memory_inst addr", false,-1, 63,0);
        tracep->declQuad(c+164,"top memory_inst lb_data", false,-1, 63,0);
        tracep->declQuad(c+166,"top memory_inst lh_data", false,-1, 63,0);
        tracep->declQuad(c+168,"top memory_inst lw_data", false,-1, 63,0);
        tracep->declQuad(c+124,"top memory_inst ld_data", false,-1, 63,0);
        tracep->declQuad(c+170,"top memory_inst lbu_data", false,-1, 63,0);
        tracep->declQuad(c+172,"top memory_inst lhu_data", false,-1, 63,0);
        tracep->declQuad(c+174,"top memory_inst lwu_data", false,-1, 63,0);
        tracep->declBus(c+183,"top controlor_inst IW", false,-1, 31,0);
        tracep->declBus(c+116,"top controlor_inst inst", false,-1, 31,0);
        tracep->declBit(c+130,"top controlor_inst wb_en", false,-1);
        tracep->declBit(c+131,"top controlor_inst wb_load", false,-1);
        tracep->declBit(c+132,"top controlor_inst wb_pc", false,-1);
        tracep->declBit(c+133,"top controlor_inst wb_alu", false,-1);
        tracep->declBit(c+8,"top controlor_inst I_type", false,-1);
        tracep->declBit(c+138,"top controlor_inst S_type", false,-1);
        tracep->declBit(c+139,"top controlor_inst B_type", false,-1);
        tracep->declBit(c+9,"top controlor_inst U_type", false,-1);
        tracep->declBit(c+127,"top controlor_inst J_type", false,-1);
        tracep->declBit(c+140,"top controlor_inst rs1_en", false,-1);
        tracep->declBit(c+141,"top controlor_inst pc_en", false,-1);
        tracep->declBit(c+142,"top controlor_inst rs2_en", false,-1);
        tracep->declBit(c+143,"top controlor_inst imm_en", false,-1);
        tracep->declBit(c+144,"top controlor_inst lgc_en", false,-1);
        tracep->declBus(c+10,"top controlor_inst lgc_op", false,-1, 3,0);
        tracep->declBit(c+145,"top controlor_inst wlgc_en", false,-1);
        tracep->declBus(c+11,"top controlor_inst wlgc_op", false,-1, 4,0);
        tracep->declBit(c+139,"top controlor_inst br_en", false,-1);
        tracep->declBus(c+146,"top controlor_inst br_op", false,-1, 2,0);
        tracep->declBit(c+127,"top controlor_inst jal_en", false,-1);
        tracep->declBit(c+126,"top controlor_inst jalr_en", false,-1);
        tracep->declBit(c+13,"top controlor_inst lb", false,-1);
        tracep->declBit(c+14,"top controlor_inst lh", false,-1);
        tracep->declBit(c+15,"top controlor_inst lw", false,-1);
        tracep->declBit(c+16,"top controlor_inst ld", false,-1);
        tracep->declBit(c+17,"top controlor_inst lbu", false,-1);
        tracep->declBit(c+18,"top controlor_inst lhu", false,-1);
        tracep->declBit(c+19,"top controlor_inst lwu", false,-1);
        tracep->declBit(c+20,"top controlor_inst sb", false,-1);
        tracep->declBit(c+21,"top controlor_inst sh", false,-1);
        tracep->declBit(c+22,"top controlor_inst sw", false,-1);
        tracep->declBit(c+23,"top controlor_inst sd", false,-1);
        tracep->declBit(c+111,"top controlor_inst ebreak", false,-1);
        tracep->declBus(c+176,"top controlor_inst opcode", false,-1, 4,0);
        tracep->declBus(c+146,"top controlor_inst funct3", false,-1, 2,0);
        tracep->declBus(c+177,"top controlor_inst funct7", false,-1, 6,0);
        tracep->declBit(c+178,"top controlor_inst lui_en", false,-1);
        tracep->declBit(c+179,"top controlor_inst auipc_en", false,-1);
        tracep->declBit(c+131,"top controlor_inst load_en", false,-1);
        tracep->declBit(c+138,"top controlor_inst store_en", false,-1);
        tracep->declBit(c+37,"top controlor_inst immop_en", false,-1);
        tracep->declBit(c+38,"top controlor_inst immsf_en", false,-1);
        tracep->declBit(c+180,"top controlor_inst rsop_en", false,-1);
        tracep->declBit(c+39,"top controlor_inst wimmop_en", false,-1);
        tracep->declBit(c+40,"top controlor_inst wimmsf_en", false,-1);
        tracep->declBit(c+181,"top controlor_inst wrsop_en", false,-1);
        tracep->declBit(c+41,"top controlor_inst R_type", false,-1);
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
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__rd_data2),64);
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__I_type));
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__U_type));
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__lgc_op),4);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__wlgc_op),5);
        tracep->fullBit(oldp+12,((0ULL == vlSelf->top__DOT__result)));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__lb));
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__lh));
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__lw));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__ld));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__lbu));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__lhu));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__lwu));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__sb));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__sh));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__sw));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__sd));
        tracep->fullQData(oldp+24,((0xfffffffffffffffeULL 
                                    & vlSelf->top__DOT__result)),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__regfile_inst__DOT__wb_data),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
        tracep->fullIData(oldp+32,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
        tracep->fullIData(oldp+33,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__alu_inst__DOT__lgc_result),64);
        tracep->fullIData(oldp+36,(vlSelf->top__DOT__alu_inst__DOT__wlgc_result),32);
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__controlor_inst__DOT__immop_en));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__controlor_inst__DOT__immsf_en));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__controlor_inst__DOT__R_type));
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__regfile_inst__DOT__gpr[31]),64);
        tracep->fullIData(oldp+106,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        tracep->fullBit(oldp+107,(vlSelf->clk));
        tracep->fullBit(oldp+108,(vlSelf->rstn));
        tracep->fullQData(oldp+109,(vlSelf->a),64);
        tracep->fullBit(oldp+111,(vlSelf->ebreak));
        tracep->fullQData(oldp+112,(vlSelf->dnxt_pc),64);
        tracep->fullQData(oldp+114,(vlSelf->pc),64);
        tracep->fullIData(oldp+116,(vlSelf->inst),32);
        tracep->fullQData(oldp+117,(vlSelf->wdata),64);
        tracep->fullCData(oldp+119,(vlSelf->wlen),3);
        tracep->fullBit(oldp+120,(vlSelf->wen));
        tracep->fullBit(oldp+121,(vlSelf->ren));
        tracep->fullQData(oldp+122,(vlSelf->addr),64);
        tracep->fullQData(oldp+124,(vlSelf->rdata),64);
        tracep->fullBit(oldp+126,((0x19U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+127,((0x1bU == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullQData(oldp+128,((4ULL + vlSelf->pc)),64);
        tracep->fullBit(oldp+130,((((((((((((0xdU == 
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
                                          | (0x19U 
                                             == (0x1fU 
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
        tracep->fullBit(oldp+131,((0U == (0x1fU & (vlSelf->inst 
                                                   >> 2U)))));
        tracep->fullBit(oldp+132,(((0x1bU == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))) 
                                   | (0x19U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U))))));
        tracep->fullBit(oldp+133,(((((((((5U == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U))) 
                                         | (0xdU == 
                                            (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                        | (0xcU == 
                                           (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))) 
                                       | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                     | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                    | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en)) 
                                   | (0xeU == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->fullQData(oldp+134,(((((((((- (QData)((IData)(vlSelf->top__DOT__lb))) 
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
        tracep->fullQData(oldp+136,(((0U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__regfile_inst__DOT__gpr
                                     [(0x1fU & (vlSelf->inst 
                                                >> 0xfU))])),64);
        tracep->fullBit(oldp+138,((8U == (0x1fU & (vlSelf->inst 
                                                   >> 2U)))));
        tracep->fullBit(oldp+139,((0x18U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))));
        tracep->fullBit(oldp+140,(((((IData)(vlSelf->top__DOT__I_type) 
                                     | (IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type)) 
                                    | (8U == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U)))) 
                                   | (0x18U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U))))));
        tracep->fullBit(oldp+141,(((5U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U))) 
                                   | (0x1bU == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U))))));
        tracep->fullBit(oldp+142,((((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
                                    | (8U == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U)))) 
                                   | (0x18U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U))))));
        tracep->fullBit(oldp+143,(((((IData)(vlSelf->top__DOT__I_type) 
                                     | (8U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U)))) 
                                    | (IData)(vlSelf->top__DOT__U_type)) 
                                   | (0x1bU == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U))))));
        tracep->fullBit(oldp+144,((((((((((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en) 
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
                                   | (8U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))))));
        tracep->fullBit(oldp+145,((((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en) 
                                    | (0xeU == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)))) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en))));
        tracep->fullCData(oldp+146,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+147,((vlSelf->pc + vlSelf->top__DOT__imm)),64);
        tracep->fullBit(oldp+149,((((0x19U != (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))) 
                                    & (0x1bU != (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__br_asrt)))));
        tracep->fullCData(oldp+150,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+151,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+152,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+153,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)))))),64);
        tracep->fullQData(oldp+155,((((QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x19U))) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))))),64);
        tracep->fullQData(oldp+157,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+159,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7ffff000U 
                                                                   & vlSelf->inst))))),64);
        tracep->fullQData(oldp+161,((((- (QData)((IData)(
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
        tracep->fullBit(oldp+163,(((0x4000U & vlSelf->inst)
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
        tracep->fullQData(oldp+164,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->rdata 
                                                                     >> 7U)))))) 
                                      << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->rdata)))))),64);
        tracep->fullQData(oldp+166,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->rdata 
                                                                     >> 0xfU)))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->rdata)))))),64);
        tracep->fullQData(oldp+168,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->rdata)))),64);
        tracep->fullQData(oldp+170,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->rdata))))),64);
        tracep->fullQData(oldp+172,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->rdata))))),64);
        tracep->fullQData(oldp+174,((QData)((IData)(vlSelf->rdata))),64);
        tracep->fullCData(oldp+176,((0x1fU & (vlSelf->inst 
                                              >> 2U))),5);
        tracep->fullCData(oldp+177,((vlSelf->inst >> 0x19U)),7);
        tracep->fullBit(oldp+178,((0xdU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->fullBit(oldp+179,((5U == (0x1fU & (vlSelf->inst 
                                                   >> 2U)))));
        tracep->fullBit(oldp+180,((0xcU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->fullBit(oldp+181,((0xeU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->fullIData(oldp+182,(0x40U),32);
        tracep->fullIData(oldp+183,(0x20U),32);
        tracep->fullIData(oldp+184,(5U),32);
    }
}
