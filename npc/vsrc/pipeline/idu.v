module idu(
  input   wire              clk     ,
  input   wire              rstn    ,

  input   wire              flush_nop        ,
  input   wire              hazard_nop       ,
  output  wire              need_rs1         ,
  output  wire              need_rs2         ,

  input   wire              update           ,

  input   wire    [31:0]    ifu_instr        ,
  input   wire    [63:0]    ifu_pc           ,
  input   wire    [63:0]    ifu_snxt_pc      ,
  input   wire              ifu_valid        ,

  input   wire    [63:0]    mmu_wb_data      ,
  input   wire    [4:0]     mmu_index_rd     ,
  input   wire              mmu_wb_en        ,

  output  reg     [4:0]     idu_index_rs1    ,
  output  reg     [4:0]     idu_index_rs2    ,
  output  reg     [4:0]     idu_index_rd     ,
  output  reg     [31:0]    idu_instr        ,
  output  reg     [2:0]     idu_funct3       ,
  output  reg     [6:0]     idu_funct7       ,
  output  reg               idu_valid        ,
  output  reg     [63:0]    idu_snxt_pc      ,
  output  reg     [63:0]    idu_pc           ,
  output  reg     [63:0]    idu_data_rs1     ,
  output  reg     [63:0]    idu_imm          ,
  output  reg     [63:0]    idu_data_rs2     ,
  output  reg               idu_add_pc_en    ,
  output  reg               idu_add_rs1_en   ,
  output  reg               idu_add_zero_en  ,
  output  reg               idu_imm_en       ,
  output  reg               idu_rs2_en       ,
  output  reg               idu_addop_en     ,
  output  reg               idu_iop_en       ,
  output  reg               idu_rop_en       ,
  output  reg               idu_mop_en       ,
  output  reg               idu_iwop_en      ,
  output  reg               idu_rwop_en      ,
  output  reg               idu_mwop_en      ,
  output  reg               idu_jal_en       ,
  output  reg               idu_jalr_en      ,
  output  reg               idu_branch_en    ,
  output  reg               idu_load_en      ,
  output  reg               idu_store_en     ,
  output  reg               idu_wb_alu_en    ,
  output  reg               idu_ebreak_en      

);

wire  [4:0]   index_rs1 = ifu_instr[19:15];
wire  [4:0]   index_rs2 = ifu_instr[24:20];
wire  [4:0]   index_rd  = ifu_instr[11: 7];

wire  [63:0]  gpr_data_rs1 ;
wire  [63:0]  gpr_data_rs2 ;
wire  [63:0]  data_rs1 ;
wire  [63:0]  data_rs2 ;

wire  wbfwd_en1 = mmu_wb_en & ( mmu_index_rd == index_rs1 ) & ( mmu_index_rd != 0 );
wire  wbfwd_en2 = mmu_wb_en & ( mmu_index_rd == index_rs2 ) & ( mmu_index_rd != 0 );

regfile regfile_inst (
  .clk  ( clk  ) ,
  .rstn ( rstn ) ,

  .update ( update  ),

  .index_rs1 ( index_rs1 ) ,
  .index_rs2 ( index_rs2 ) ,

  .gpr_data_rs1  ( gpr_data_rs1 ) ,
  .gpr_data_rs2  ( gpr_data_rs2 ) ,

  .wr_en     ( mmu_wb_en    ) ,
  .index_rd  ( mmu_index_rd ) ,
  .data_rd   ( mmu_wb_data  ) 
);

assign  data_rs1 = wbfwd_en1 ? mmu_wb_data : gpr_data_rs1;
assign  data_rs2 = wbfwd_en2 ? mmu_wb_data : gpr_data_rs2;

wire            I_type        ;
wire            S_type        ;
wire            B_type        ;
wire            U_type        ;
wire            J_type        ;
wire            add_pc_en     ;
wire            add_rs1_en    ;
wire            add_zero_en   ;
wire            imm_en        ;
wire            rs2_en        ;
wire            addop_en      ;
wire              iop_en      ;
wire             iwop_en      ;
wire              rop_en      ;
wire             rwop_en      ;
wire              mop_en      ;
wire             mwop_en      ;
wire              jal_en      ;
wire             jalr_en      ;
wire            branch_en     ;
wire            load_en       ;
wire            store_en      ;
wire            wb_alu_en     ;
wire            ebreak_en     ; 

decoder decoder_inst (
  .instr        ( ifu_instr    ) ,
  .need_rs1     ( need_rs1         ) ,
  .need_rs2     ( need_rs2         ) ,
  .I_type       ( I_type       ) ,
  .S_type       ( S_type       ) ,
  .B_type       ( B_type       ) ,
  .U_type       ( U_type       ) ,
  .J_type       ( J_type       ) ,
  .add_pc_en    ( add_pc_en    ) ,
  .add_rs1_en   ( add_rs1_en   ) ,
  .add_zero_en  ( add_zero_en  ) ,
  .imm_en       ( imm_en       ) ,
  .rs2_en       ( rs2_en       ) ,
  .addop_en     ( addop_en     ) ,
  .  iop_en     (   iop_en     ) ,
  . iwop_en     (  iwop_en     ) ,
  .  rop_en     (   rop_en     ) ,
  . rwop_en     (  rwop_en     ) ,
  .  mop_en     (   mop_en     ) ,
  . mwop_en     (  mwop_en     ) ,
  .  jal_en     (   jal_en     ) ,
  . jalr_en     (  jalr_en     ) ,
  .branch_en    ( branch_en    ) ,
  .load_en      ( load_en      ) ,
  .store_en     ( store_en     ) ,
  .wb_alu_en    ( wb_alu_en    ) ,

  .ebreak_en    ( ebreak_en    )    
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
      idu_index_rs1    <=  'b0 ; 
      idu_index_rs2    <=  'b0 ; 
      idu_index_rd     <=  'b0 ; 
      idu_instr        <=  'b0 ; 
      idu_funct3       <=  'b0 ; 
      idu_funct7       <=  'b0 ; 
      idu_valid        <=  'b0 ; 
      idu_snxt_pc      <=  'b0 ; 
      idu_pc           <=  'b0 ; 
      idu_data_rs1     <=  'b0 ; 
      idu_imm          <=  'b0 ; 
      idu_data_rs2     <=  'b0 ; 
      idu_add_pc_en    <=  'b0 ; 
      idu_add_rs1_en   <=  'b0 ; 
      idu_add_zero_en  <=  'b0 ; 
      idu_imm_en       <=  'b0 ; 
      idu_rs2_en       <=  'b0 ; 
      idu_addop_en     <=  'b0 ; 
      idu_iop_en       <=  'b0 ; 
      idu_rop_en       <=  'b0 ; 
      idu_mop_en       <=  'b0 ; 
      idu_iwop_en      <=  'b0 ; 
      idu_rwop_en      <=  'b0 ; 
      idu_mwop_en      <=  'b0 ; 
      idu_jal_en       <=  'b0 ; 
      idu_jalr_en      <=  'b0 ; 
      idu_branch_en    <=  'b0 ; 
      idu_load_en      <=  'b0 ; 
      idu_store_en     <=  'b0 ; 
      idu_wb_alu_en    <=  'b0 ; 
      idu_ebreak_en    <=  'b0 ; 
  end
  else if ( update & ( flush_nop | hazard_nop) ) begin
      idu_index_rs1    <=  'b0 ; 
      idu_index_rs2    <=  'b0 ; 
      idu_index_rd     <=  'b0 ; 
      idu_instr        <=  'b0 ; 
      idu_funct3       <=  'b0 ; 
      idu_funct7       <=  'b0 ; 
      idu_valid        <=  'b0 ; 
      idu_snxt_pc      <=  'b0 ; 
      idu_pc           <=  'b0 ; 
      idu_data_rs1     <=  'b0 ; 
      idu_imm          <=  'b0 ; 
      idu_data_rs2     <=  'b0 ; 
      idu_add_pc_en    <=  'b0 ; 
      idu_add_rs1_en   <=  'b0 ; 
      idu_add_zero_en  <=  'b0 ; 
      idu_imm_en       <=  'b0 ; 
      idu_rs2_en       <=  'b0 ; 
      idu_addop_en     <=  'b0 ; 
      idu_iop_en       <=  'b0 ; 
      idu_rop_en       <=  'b0 ; 
      idu_mop_en       <=  'b0 ; 
      idu_iwop_en      <=  'b0 ; 
      idu_rwop_en      <=  'b0 ; 
      idu_mwop_en      <=  'b0 ; 
      idu_jal_en       <=  'b0 ; 
      idu_jalr_en      <=  'b0 ; 
      idu_branch_en    <=  'b0 ; 
      idu_load_en      <=  'b0 ; 
      idu_store_en     <=  'b0 ; 
      idu_wb_alu_en    <=  'b0 ; 
      idu_ebreak_en    <=  'b0 ; 
  end
  else if( update ) begin
      idu_index_rs1    <= index_rs1         ; 
      idu_index_rs2    <= index_rs2         ; 
      idu_index_rd     <= index_rd          ; 
      idu_instr        <= ifu_instr         ; 
      idu_funct3       <= ifu_instr[14:12]  ; 
      idu_funct7       <= ifu_instr[31:25]  ; 
      idu_valid        <= ifu_valid         ; 
      idu_snxt_pc      <= ifu_snxt_pc       ; 
      idu_pc           <= ifu_pc            ; 
      idu_data_rs1     <= data_rs1          ; 
      idu_imm          <= imm               ; 
      idu_data_rs2     <= data_rs2          ; 
      idu_add_pc_en    <= add_pc_en         ; 
      idu_add_rs1_en   <= add_rs1_en        ; 
      idu_add_zero_en  <= add_zero_en       ; 
      idu_imm_en       <= imm_en            ; 
      idu_rs2_en       <= rs2_en            ; 
      idu_addop_en     <= addop_en          ; 
      idu_iop_en       <= iop_en            ; 
      idu_rop_en       <= rop_en            ; 
      idu_mop_en       <= mop_en            ; 
      idu_iwop_en      <= iwop_en           ; 
      idu_rwop_en      <= rwop_en           ; 
      idu_mwop_en      <= mwop_en           ; 
      idu_jal_en       <= jal_en            ; 
      idu_jalr_en      <= jalr_en           ; 
      idu_branch_en    <= branch_en         ; 
      idu_load_en      <= load_en           ; 
      idu_store_en     <= store_en          ; 
      idu_wb_alu_en    <= wb_alu_en         ; 
      idu_ebreak_en    <= ebreak_en         ; 
  end
end

endmodule


