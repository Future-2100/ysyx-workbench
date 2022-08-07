module mmu(
  input   wire            clk                 ,
  input   wire            rstn                ,

  input   wire    [4:0]   exu_index_rd        ,
  input   wire    [4:0]   exu_index_rs1       ,
  input   wire    [4:0]   exu_index_rs2       ,

  input   wire            exu_jump_en         ,
  input   wire            exu_branch_en       ,

  input   wire    [63:0]  exu_branch_pc       ,
  input   wire            exu_branch_result   ,

  input   wire    [63:0]  exu_alu_result      ,

  input   wire            exu_load_en         ,
  input   wire            exu_store_en        ,
  input   wire    [3:0]   exu_store_len       ,

  input   wire    [63:0]  exu_gpr_data2       ,
  input   wire    [63:0]  exu_imm             ,

  input   wire    [2:0]   exu_load_opcode     ,
  input   wire            exu_wb_en           ,
  input   wire    [2:0]   exu_wb_choose       ,
  input   wire            exu_ebreak          ,

  output  reg     [4:0]   mmu_index_rd        ,
  output  reg             mmu_wb_en           ,
  output  wire    [63:0]  mmu_wb_data         ,

  output  wire    [63:0]  mmu_dnpc            ,
  output  wire            mmu_jump_en         ,
  output  wire            mmu_branch_en       ,
  output  reg             mmu_ebreak          ,

  output  wire    [63:0]  mm_addr             , 
  output  wire    [63:0]  mm_wdata            , 
  output  wire    [3:0]   mm_wlen             , 
  output  wire            mm_wen              , 
  output  wire            mm_ren              , 
  input   wire    [63:0]  mm_rdata            

);


  wire    jump_en = exu_jump_en;
  wire  branch_en = exu_branch_en & exu_branch_result;

  assign  mmu_jump_en   =   jump_en;
  assign  mmu_branch_en = branch_en;

  wire  [63:0]  branch_pc = exu_branch_pc;
  wire  [63:0]  jump_pc   = exu_alu_result;

  assign  mmu_dnpc = ( { 64{jump_en   }} &   jump_pc ) |
                     ( { 64{branch_en }} & branch_pc ) ;

  wire  [63:0]     address = exu_alu_result ;
  wire  [63:0]  store_data = exu_gpr_data2  ;

  wire  [63:0]  load_data ;

memory memory_inst(

  .load_en     ( exu_load_en     )  ,
  .store_en    ( exu_store_en    )  ,
  .store_len   ( exu_store_len   )  ,
  .load_opcode ( exu_load_opcode )  ,
  .store_data  (     store_data  )  ,
  .address     (     address     )  ,
  .load_data   (     load_data   )  ,
  .mm_addr     ( mm_addr         )  ,
  .mm_wdata    ( mm_wdata        )  ,
  .mm_wlen     ( mm_wlen         )  ,
  .mm_wen      ( mm_wen          )  ,
  .mm_ren      ( mm_ren          )  ,
  .mm_rdata    ( mm_rdata        )    

);

  reg     [63:0]  mmu_alu_data        ;
  reg     [63:0]  mmu_load_data       ;
  reg     [63:0]  mmu_imm_data        ;
  reg     [2:0]   mmu_wb_choose       ;

  always@(posedge clk) begin
    if(!rstn) begin
      mmu_index_rd  <=   'b0  ;
      mmu_alu_data  <=   'b0  ;
      mmu_load_data <=   'b0  ;
      mmu_imm_data  <=   'b0  ;
      mmu_wb_choose <=   'b0  ;
      mmu_wb_en     <=   'b0  ;
      mmu_ebreak    <=   'b0  ;
    end else begin
      mmu_index_rd  <= exu_index_rd    ;
      mmu_alu_data  <= exu_alu_result  ;
      mmu_load_data <= load_data       ;
      mmu_imm_data  <= exu_imm         ;
      mmu_wb_choose <= exu_wb_choose   ;
      mmu_wb_en     <= exu_wb_en       ;
      mmu_ebreak    <= exu_ebreak      ;
    end
  end 


  assign  mmu_wb_data = ( {64{mmu_wb_choose==3'b100}} &  mmu_alu_data ) | 
                        ( {64{mmu_wb_choose==3'b010}} & mmu_load_data ) |
                        ( {64{mmu_wb_choose==3'b001}} &  mmu_imm_data ) ;


endmodule

