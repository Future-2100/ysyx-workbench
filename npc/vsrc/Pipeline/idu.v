module idu(
  input   wire              clk     ,
  input   wire              rstn    ,

  input   wire              flush_nop        ,
  input   wire              ld_hz_nop        ,

  output  wire              decoder_alu_en   ,

  input   wire    [31:0]    ifu_instr        ,
  input   wire    [63:0]    ifu_pc           ,
  input   wire    [63:0]    ifu_snxt_pc      ,

  output  reg     [4:0]     idu_index_rs1    ,
  output  reg     [4:0]     idu_index_rs2    ,
  output  reg     [4:0]     idu_index_rd     ,

//  ******** operation data for alu ********  //
  output  reg     [63:0]    idu_pc           ,
  output  reg     [63:0]    idu_gpr_data1    ,
  output  reg     [63:0]    idu_imm          ,
  output  reg     [63:0]    idu_gpr_data2    ,

//  ******** control signal for alu ********  //
  output  reg     [4:0]     idu_alu_opcode    ,
  output  reg               idu_alu_en        ,
  output  reg               idu_alu_imm_en    ,
  output  reg               idu_alu_pc_en     ,
  output  reg     [2:0]     idu_branch_opcode ,
  output  reg               idu_alu_halfop    ,
  //output  reg               idu_branch_en     ,

//  ******** control signal for memory stage ********  //
  output  reg               idu_jump_en       ,
  output  reg               idu_branch_en     ,
  output  reg               idu_load_en       ,
  output  reg     [2:0]     idu_load_opcode   ,
  output  reg               idu_store_en      ,
  output  reg     [3:0]     idu_store_len     ,

//  ******** control signal for write back stage ********  //
  output  reg               idu_wb_en         ,
  output  reg     [3:0]     idu_wb_choose     ,
  output  wire              idu_ebreak        ,
  output  wire    [63:0]    idu_snxt_pc       ,
  output  wire    [31:0]    idu_instr         ,

//  ******** control signal from write back stage ********  //
  input   wire    [63:0]    mmu_wb_data       ,
  input   wire    [4:0]     mmu_index_rd      ,
  input   wire              mmu_wb_en         

);


wire  [4:0]   index_rs1 = ifu_instr[19:15];
wire  [4:0]   index_rs2 = ifu_instr[24:20];
wire  [4:0]   index_rd  = ifu_instr[11: 7];
wire  [63:0]       pc   = ifu_pc ;

wire  [63:0]  gpr_data1 ;
wire  [63:0]  gpr_data2 ;
regfile regfile_inst (
  .clk  ( clk  ) ,
  .rstn ( rstn ) ,

  .index_rs1 ( index_rs1 ) ,
  .index_rs2 ( index_rs2 ) ,
  .data_rs1  ( gpr_data1    ) ,
  .data_rs2  ( gpr_data2    ) ,

  .wb_en     ( mmu_wb_en    ) ,
  .index_rd  ( mmu_index_rd ) ,
  .data_rd   ( mmu_wb_data  ) 
);


wire            branch_en     ;
wire    [2:0]   branch_opcode ;
wire            alu_en        ;
wire            alu_pc_en     ;
wire            alu_imm_en    ;
wire    [4:0]   alu_opcode    ;
wire            alu_halfop    ;
wire            jump_en       ;
wire            load_en       ;
wire    [2:0]   load_opcode   ;
wire            store_en      ;
wire    [3:0]   store_len     ;
wire            wb_en         ;
wire    [3:0]   wb_choose     ;
wire            I_type        ;
wire            S_type        ;
wire            B_type        ;
wire            U_type        ;
wire            J_type        ;
wire            ebreak        ;

decoder decoder_inst (
    .instr        ( ifu_instr      )  , 
    .branch_en    ( branch_en      )  , 
    .branch_opcode( branch_opcode  )  , 
    .alu_en       ( alu_en         )  , 
    .alu_pc_en    ( alu_pc_en      )  , 
    .alu_imm_en   ( alu_imm_en     )  , 
    .alu_opcode   ( alu_opcode     )  , 
    .alu_halfop   ( alu_halfop     )  ,
    .jump_en      ( jump_en        )  , 
    .load_en      ( load_en        )  , 
    .load_opcode  ( load_opcode    )  , 
    .store_en     ( store_en       )  , 
    .store_len    ( store_len      )  , 
    .wb_en        ( wb_en          )  , 
    .wb_choose    ( wb_choose      )  , 
    .I_type       ( I_type         )  , 
    .S_type       ( S_type         )  , 
    .B_type       ( B_type         )  , 
    .U_type       ( U_type         )  , 
    .J_type       ( J_type         )  , 
    .ebreak       ( ebreak         )
);

wire  [63:0]  imm;
imm_gen imm_gen_inst (
    .instr   ( ifu_instr   )  , 
    .I_type  ( I_type  )  , 
    .S_type  ( S_type  )  , 
    .U_type  ( U_type  )  , 
    .B_type  ( B_type  )  , 
    .J_type  ( J_type  )  , 
    .imm     ( imm     )
);


always@(posedge clk) begin
  if(!rstn) begin
     idu_index_rs1      <=  'b0 ;
     idu_index_rs2      <=  'b0 ;
     idu_index_rd       <=  'b0 ;
     idu_pc             <=  'b0 ;
     idu_gpr_data1      <=  'b0 ;
     idu_imm            <=  'b0 ;
     idu_gpr_data2      <=  'b0 ;
     idu_alu_opcode     <=  'b0 ;   
     idu_alu_en         <=  'b0 ;  
     idu_alu_imm_en     <=  'b0 ;  
     idu_alu_pc_en      <=  'b0 ;  
     idu_alu_halfop     <=  'b0 ;
     idu_branch_opcode  <=  'b0 ;  
     idu_jump_en        <=  'b0 ;   
     idu_branch_en      <=  'b0 ;  
     idu_load_en        <=  'b0 ;  
     idu_load_opcode    <=  'b0 ;  
     idu_store_en       <=  'b0 ;  
     idu_store_len      <=  'b0 ;  
     idu_wb_en          <=  'b0 ;   
     idu_wb_choose      <=  'b0 ;  
     idu_ebreak         <=  'b0 ;
     idu_snxt_pc        <=  'b0 ;
     idu_instr          <=  'b0 ;
  end
  else if ( flush_nop | ld_hz_nop ) begin
      idu_index_rs1      <=  index_rs1      ;  
      idu_index_rs2      <=  index_rs2      ;
      idu_index_rd       <=  index_rd       ;
      idu_pc             <=  pc             ;
      idu_gpr_data1      <=  gpr_data1      ;
      idu_imm            <=  imm            ;
      idu_gpr_data2      <=  gpr_data2      ;
      idu_alu_opcode     <=  alu_opcode     ;
      idu_alu_en         <=  alu_en         ;
      idu_alu_imm_en     <=  alu_imm_en     ;
      idu_alu_pc_en      <=  alu_pc_en      ;
      idu_alu_halfop     <=  alu_halfop     ;
      idu_branch_opcode  <=  branch_opcode  ;
      idu_jump_en        <=  'b0            ;
      idu_branch_en      <=  'b0            ;
      idu_load_en        <=  'b0            ;
      idu_load_opcode    <=  load_opcode    ;
      idu_store_en       <=  'b0            ;
      idu_store_len      <=  store_len      ;
      idu_wb_en          <=  'b0            ;
      idu_wb_choose      <=  wb_choose      ;
      idu_ebreak         <=  'b0            ;
      idu_snxt_pc        <=  ifu_snxt_pc    ;
      idu_instr          <=  ifu_instr      ;
  end
  else begin
      idu_index_rs1      <=  index_rs1      ;  
      idu_index_rs2      <=  index_rs2      ;
      idu_index_rd       <=  index_rd       ;
      idu_pc             <=  pc             ;
      idu_gpr_data1      <=  gpr_data1      ;
      idu_imm            <=  imm            ;
      idu_gpr_data2      <=  gpr_data2      ;
      idu_alu_opcode     <=  alu_opcode     ;
      idu_alu_en         <=  alu_en         ;
      idu_alu_imm_en     <=  alu_imm_en     ;
      idu_alu_pc_en      <=  alu_pc_en      ;
      idu_alu_halfop     <=  alu_halfop     ;
      idu_branch_opcode  <=  branch_opcode  ;
      idu_jump_en        <=  jump_en        ;
      idu_branch_en      <=  branch_en      ;
      idu_load_en        <=  load_en        ;
      idu_load_opcode    <=  load_opcode    ;
      idu_store_en       <=  store_en       ;
      idu_store_len      <=  store_len      ;
      idu_wb_en          <=  wb_en          ;
      idu_wb_choose      <=  wb_choose      ;
      idu_ebreak         <=  ebreak         ;
      idu_snxt_pc        <=  ifu_snxt_pc    ;
      idu_instr          <=  ifu_instr      ;
  end
end

assign  decoder_alu_en = alu_en ;

endmodule


