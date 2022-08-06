module top(
  input wire    clk   ,
  input wire    rstn  ,

  output  wire  [63:0]    pc        ,
  input   wire  [31:0]    instr     ,
  output  wire            ebreak    ,
  output  wire  [63:0]    snxt_pc   ,
  output  wire  [63:0]    dnxt_pc

);


  wire  [63:0]    mm_addr   ;
  wire  [63:0]    mm_wdata  ;
  wire  [3:0]     mm_wlen   ;
  wire            mm_wen    ;
  wire  [63:0]    mm_rdata  ;
  wire            mm_ren    ;

wire            exu_jump_en     ;
wire            exu_branch_en   ;
wire  [63:0]    dnpc            ;
wire  [63:0]    ifu_pc          ;
wire  [31:0]    ifu_instr       ;
wire            ld_hz_stop      ;
wire            flush_nop       ;

wire    [63:0]  mmu_dnpc           ; 
wire            mmu_jump_en        ; 
wire            mmu_branch_en      ; 


ifu ifu_inst(
  .clk            ( clk             )  ,
  .rstn           ( rstn            )  ,
  .snxt_pc        ( snxt_pc         )  ,
  .dnxt_pc        ( dnxt_pc         )  ,
  .mmu_jump_en    ( mmu_jump_en     )  ,
  .mmu_branch_en  ( mmu_branch_en   )  ,
  .dnpc           ( mmu_dnpc        )  ,
  .pc             ( pc              )  ,
  .instr          ( instr           )  ,
  .ifu_pc         ( ifu_pc          )  ,
  .ifu_instr      ( ifu_instr       )  ,
  .ld_hz_stop     ( ld_hz_stop      )  ,
  .flush_nop      ( flush_nop       )
);

wire              ld_hz_nop          ; 
wire              decoder_alu_en     ; 
wire    [4:0]     idu_index_rs1      ; 
wire    [4:0]     idu_index_rs2      ; 
wire    [4:0]     idu_index_rd       ; 
wire    [63:0]    idu_pc             ; 
wire    [63:0]    idu_gpr_data1      ; 
wire    [63:0]    idu_imm            ; 
wire    [63:0]    idu_gpr_data2      ; 
wire    [4:0]     idu_alu_opcode     ; 
wire              idu_alu_en         ; 
wire              idu_alu_imm_en     ; 
wire              idu_alu_pc_en      ; 
wire    [2:0]     idu_branch_opcode  ; 
wire              idu_alu_halfop     ; 
wire              idu_jump_en        ; 
wire              idu_branch_en      ; 
wire              idu_load_en        ; 
wire    [2:0]     idu_load_opcode    ; 
wire              idu_store_en       ; 
wire    [3:0]     idu_store_len      ; 
wire              idu_wb_en          ; 
wire    [2:0]     idu_wb_choose      ; 
wire    [63:0]    mmu_wb_data        ; 
wire    [4:0]     mmu_index_rd       ; 
wire              mmu_wb_en          ; 

idu idu_inst(
  .clk               ( clk                )  ,
  .rstn              ( rstn               )  ,
  .ebreak            ( ebreak             )  ,
  .flush_nop         ( flush_nop          )  ,
  .ld_hz_nop         ( ld_hz_nop          )  ,
  .decoder_alu_en    ( decoder_alu_en     )  ,
  .ifu_instr         ( ifu_instr          )  ,
  .ifu_pc            ( ifu_pc             )  ,
  .idu_index_rs1     ( idu_index_rs1      )  ,
  .idu_index_rs2     ( idu_index_rs2      )  ,
  .idu_index_rd      ( idu_index_rd       )  ,
  .idu_pc            ( idu_pc             )  ,
  .idu_gpr_data1     ( idu_gpr_data1      )  ,
  .idu_imm           ( idu_imm            )  ,
  .idu_gpr_data2     ( idu_gpr_data2      )  ,
  .idu_alu_opcode    ( idu_alu_opcode     )  ,
  .idu_alu_en        ( idu_alu_en         )  ,
  .idu_alu_imm_en    ( idu_alu_imm_en     )  ,
  .idu_alu_pc_en     ( idu_alu_pc_en      )  ,
  .idu_branch_opcode ( idu_branch_opcode  )  ,
  .idu_alu_halfop    ( idu_alu_halfop     )  ,
  .idu_jump_en       ( idu_jump_en        )  ,
  .idu_branch_en     ( idu_branch_en      )  ,
  .idu_load_en       ( idu_load_en        )  ,
  .idu_load_opcode   ( idu_load_opcode    )  ,
  .idu_store_en      ( idu_store_en       )  ,
  .idu_store_len     ( idu_store_len      )  ,
  .idu_wb_en         ( idu_wb_en          )  ,
  .idu_wb_choose     ( idu_wb_choose      )  ,
  .mmu_wb_data       ( mmu_wb_data        )  ,
  .mmu_index_rd      ( mmu_index_rd       )  ,
  .mmu_wb_en         ( mmu_wb_en          )  
);

wire         fw_en1             ;
wire  [63:0] fw_data            ;
wire         fw_en2             ;
wire  [4:0]  exu_index_rd       ;
wire  [4:0]  exu_index_rs1      ;
wire  [4:0]  exu_index_rs2      ;
wire         exu_jump_en        ;
wire         exu_branch_en      ;
wire  [63:0] exu_branch_pc      ;
wire         exu_branch_result  ;  
wire  [63:0] exu_alu_result     ;
wire  [63:0] exu_gpr_data2      ;
wire  [63:0] exu_imm            ;
wire         exu_load_en        ;
wire  [2:0]  exu_load_opcode    ;
wire         exu_store_en       ;
wire  [3:0]  exu_store_len      ;
wire         exu_wb_en          ;
wire  [2:0]  exu_wb_choose      ;


exu exu_inst(
  .          clk     (           clk      )   ,
  .         rstn     (          rstn      )   ,
  .flush_nop         ( flush_nop          )   ,
  .idu_index_rd      ( idu_index_rd       )   ,
  .idu_index_rs1     ( idu_index_rs1      )   ,
  .idu_index_rs2     ( idu_index_rs2      )   ,
  .idu_jump_en       ( idu_jump_en        )   ,
  .idu_branch_en     ( idu_branch_en      )   ,
  .fw_en1            ( fw_en1             )   ,
  .idu_alu_pc_en     ( idu_alu_pc_en      )   ,
  .idu_pc            ( idu_pc             )   ,
  .idu_gpr_data1     ( idu_gpr_data1      )   ,
  .fw_data           ( fw_data            )   ,
  .fw_en2            ( fw_en2             )   ,
  .idu_alu_imm_en    ( idu_alu_imm_en     )   ,
  .idu_imm           ( idu_imm            )   ,
  .idu_gpr_data2     ( idu_gpr_data2      )   ,
  .idu_alu_en        ( idu_alu_en         )   ,
  .idu_alu_halfop    ( idu_alu_halfop     )   ,
  .idu_alu_opcode    ( idu_alu_opcode     )   ,
  .idu_branch_opcode ( idu_branch_opcode  )   ,
  .idu_load_en       ( idu_load_en        )   ,
  .idu_store_en      ( idu_store_en       )   ,
  .idu_load_opcode   ( idu_load_opcode    )   ,
  .idu_store_len     ( idu_store_len      )   ,
  .idu_wb_en         ( idu_wb_en          )   ,
  .idu_wb_choose     ( idu_wb_choose      )   ,
  .exu_index_rd      ( exu_index_rd       )   ,
  .exu_index_rs1     ( exu_index_rs1      )   ,
  .exu_index_rs2     ( exu_index_rs2      )   ,
  .exu_jump_en       ( exu_jump_en        )   ,
  .exu_branch_en     ( exu_branch_en      )   ,
  .exu_branch_pc     ( exu_branch_pc      )   ,
  .exu_branch_result ( exu_branch_result  )   ,
  .exu_alu_result    ( exu_alu_result     )   ,
  .exu_gpr_data2     ( exu_gpr_data2      )   ,
  .exu_imm           ( exu_imm            )   ,
  .exu_load_en       ( exu_load_en        )   ,
  .exu_load_opcode   ( exu_load_opcode    )   ,
  .exu_store_en      ( exu_store_en       )   ,
  .exu_store_len     ( exu_store_len      )   ,
  .exu_wb_en         ( exu_wb_en          )   ,
  .exu_wb_choose     ( exu_wb_choose      ) 
);


mmu mmu_inst(
  .clk  ( clk  ) ,
  .rstn ( rstn ) ,
  .exu_index_rd       ( exu_index_rd      ) ,
  .exu_index_rs1      ( exu_index_rs1     ) ,
  .exu_index_rs2      ( exu_index_rs2     ) ,
  .exu_jump_en        ( exu_jump_en       ) ,
  .exu_branch_en      ( exu_branch_en     ) ,
  .exu_branch_pc      ( exu_branch_pc     ) ,
  .exu_branch_result  ( exu_branch_result ) ,
  .exu_alu_result     ( exu_alu_result    ) ,
  .exu_load_en        ( exu_load_en       ) ,
  .exu_store_en       ( exu_store_en      ) ,
  .exu_store_len      ( exu_store_len     ) ,
  .exu_gpr_data2      ( exu_gpr_data2     ) ,
  .exu_imm            ( exu_imm           ) ,
  .exu_load_opcode    ( exu_load_opcode   ) ,
  .exu_wb_en          ( exu_wb_en         ) ,
  .exu_wb_choose      ( exu_wb_choose     ) ,
  .mmu_index_rd       ( mmu_index_rd      ) ,
  .mmu_wb_en          ( mmu_wb_en         ) ,
  .mmu_wb_data        ( mmu_wb_data       ) ,
  .mmu_dnpc           ( mmu_dnpc          ) ,
  .mmu_jump_en        ( mmu_jump_en       ) ,
  .mmu_branch_en      ( mmu_branch_en     ) ,
  .mm_addr            ( mm_addr           ) , 
  .mm_wdata           ( mm_wdata          ) , 
  .mm_wlen            ( mm_wlen           ) , 
  .mm_wen             ( mm_wen            ) , 
  .mm_ren             ( mm_ren            ) , 
  .mm_rdata           ( mm_rdata          ) 
);

hazard hazard_inst(
  .decoder_alu_en ( decoder_alu_en ) ,
  .index_rs1      ( ifu_instr[19:15] ) ,
  .index_rs2      ( ifu_instr[24:20] ) ,
  .index_rd       ( idu_index_rd     ) ,
  .load_en        ( idu_load_en      ) ,
  .ld_hz_nop      ( ld_hz_nop      ) ,
  .ld_hz_stop     ( ld_hz_stop     )
);

flush flush_inst(
  .mmu_jump_en   ( mmu_jump_en    )  ,
  .mmu_branch_en ( mmu_branch_en  )  ,
  .flush_nop     ( flush_nop      )  
);

forward  forward_inst(
  .idu_index_rs1   ( idu_index_rs1   )  ,
  .idu_index_rs2   ( idu_index_rs2   )  ,
  .exu_index_rd    ( exu_index_rd    )  ,
  .mmu_index_rd    ( mmu_index_rd    )  ,
  .exu_alu_result  ( exu_alu_result  )  ,
  .mmu_wb_data     ( mmu_wb_data     )  ,
  .fw_en1          ( fw_en1          )  ,
  .fw_en2          ( fw_en2          )  ,
  .fw_data         ( fw_data         )    
);


  initial begin
      $display("[%0t] Tracing to build/logs/top.vcd...\n",$time);
      $dumpfile("build/logs/top.vcd");
      $dumpvars();
    $display("[%0t] Model running...\n", $time);
  end

  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
  initial set_gpr_ptr(idu_inst.regfile_inst.gpr);

  import "DPI-C" function void vmem_read(
    input  longint raddr, 
    output longint rdata,
    input  byte    ren 
  );

  import "DPI-C" function void vmem_write(
    input longint waddr, 
    input longint wdata, 
    input byte wlen, 
    input byte wen
  );

  always@(*) begin
    vmem_read ( mm_addr, mm_rdata, {7'b0, mm_ren } );
    vmem_write( mm_addr, mm_wdata, {4'b0, mm_wlen}, {7'b0, mm_wen} );
  end

  export "DPI-C" task end_sim;
  task end_sim;
    $finish;
  endtask



endmodule

