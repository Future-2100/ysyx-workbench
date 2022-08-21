module mmu(
  input   wire            clk                 ,
  input   wire            rstn                ,

  input   wire            instr_valid         ,
  input   wire            rdata_valid         ,

  input   wire            exu_jal_en          ,
  input   wire            exu_jalr_en         ,
  input   wire            exu_branch_en       ,
  input   wire            exu_br_result       ,

  input   wire    [63:0]  exu_snxt_pc         ,
  input   wire    [63:0]  exu_alu_result      ,

  input   wire            exu_load_en         ,
  input   wire            exu_store_en        ,
  input   wire    [2:0]   exu_funct3          ,
  input   wire    [63:0]  exu_data_rs2        ,

  input   wire            exu_wb_alu_en       ,
  input   wire            exu_wb_spc_en       ,
  input   wire            exu_wb_en           ,

  input   wire            exu_ebreak_en       ,

  input   wire    [4:0]   exu_index_rd        ,
  input   wire    [63:0]  exu_pc              ,
  input   wire    [31:0]  exu_instr           ,
  input   wire            exu_valid           ,

  output  wire            jump_en             ,
  output  wire    [63:0]  jump_pc             ,

  output  reg     [4:0]   mmu_index_rd        ,
  output  reg             mmu_wb_en           ,
  output  wire    [63:0]  mmu_wb_data         ,

  output  reg             mmu_valid           ,
  output  reg             mmu_ebreak_en       ,

  output  reg     [63:0]  mmu_pc              ,
  output  reg     [31:0]  mmu_instr           ,

  output  wire    [63:0]  mm_addr             , 
  output  wire    [63:0]  mm_wdata            , 
  output  wire    [3:0]   mm_wlen             , 
  output  wire            mm_wen              , 
  output  wire            mm_ren              , 
  input   wire    [63:0]  mm_rdata            

);

  
  assign  jump_en = exu_jal_en | exu_jalr_en | ( exu_branch_en & exu_br_result ) ;
  assign  jump_pc = exu_alu_result;

  wire  [63:0]     address = exu_alu_result ;
  wire  [63:0]  store_data = exu_data_rs2   ;

  wire  [63:0]  load_data ;

memory memory_inst(

  .load_en     ( exu_load_en     )  ,
  .store_en    ( exu_store_en    )  ,
  .funct3      ( exu_funct3      )  ,
  .instr_valid ( instr_valid     )  ,
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

  reg     [63:0]  mmu_alu_result      ;
  reg     [63:0]  mmu_snxt_pc         ;
  reg     [63:0]  mmu_load_data       ;

  reg       mmu_wb_alu_en       ;
  reg       mmu_wb_spc_en       ;
  reg       mmu_load_en         ;

  always@(posedge clk) begin
    if(!rstn) begin
       mmu_alu_result    <=   'b0 ;  
       mmu_snxt_pc       <=   'b0 ; 
       mmu_load_data     <=   'b0 ; 
       mmu_wb_alu_en     <=   'b0 ; 
       mmu_wb_spc_en     <=   'b0 ; 
       mmu_load_en       <=   'b0 ; 
       mmu_index_rd      <=   'b0 ;
       mmu_wb_en         <=   'b0 ;
       mmu_valid         <=   'b0 ;
       mmu_ebreak_en     <=   'b0 ;
       mmu_pc            <=   'b0 ;
       mmu_instr         <=   'b0 ;
    end else if( instr_valid )begin
       mmu_alu_result    <=   exu_alu_result  ;  
       mmu_snxt_pc       <=   exu_snxt_pc     ; 
       mmu_load_data     <=   load_data       ;
       mmu_wb_alu_en     <=   exu_wb_alu_en   ; 
       mmu_wb_spc_en     <=   exu_wb_spc_en   ; 
       mmu_load_en       <=   exu_load_en     ; 
       mmu_index_rd      <=   exu_index_rd    ;
       mmu_wb_en         <=   exu_wb_en       ;
       mmu_valid         <=   exu_valid       ;
       mmu_ebreak_en     <=   exu_ebreak_en   ;
       mmu_pc            <=   exu_pc          ;
       mmu_instr         <=   exu_instr       ;
     end else if( rdata_valid )begin
       mmu_load_data     <=   load_data       ;
     end

  end 

  assign  mmu_wb_data = ( {64{ mmu_wb_alu_en }} &  mmu_alu_result ) | 
                        ( {64{ mmu_wb_spc_en }} &  mmu_snxt_pc    ) |
                        ( {64{ mmu_load_en   }} &  mmu_load_data  ) ;


endmodule

