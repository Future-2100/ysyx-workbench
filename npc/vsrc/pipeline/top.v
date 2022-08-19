module top(
  input   wire              clk       ,
  input   wire              rstn      ,

  output  wire  [63:0]    pc          ,
  output  wire  [63:0]    snxt_pc     ,
  output  wire  [63:0]    dnxt_pc     ,

  output  reg             this_ebreak ,
  output  reg             this_valid  ,
  output  reg   [63:0]    this_pc     ,
  output  reg   [31:0]    this_instr  ,

  output  wire    [3:0]   ARID        ,
  output  wire    [63:0]  ARADDR      ,
  output  wire    [7:0]   ARLEN       ,
  output  wire    [2:0]   ARSIZE      ,
  output  wire    [1:0]   ARBURST     ,
  output  wire    [2:0]   ARPORT      ,
  output  wire            ARVALID     ,
  input   wire            ARREADY     ,

  input   wire    [63:0]  RDATA       ,
  input   wire    [1:0]   RRESP       ,
  input   wire            RVALID      ,
  output  wire            RREADY      
);

  wire  [31:0]    instr       ;
  wire            instr_valid ;  

axi_interface  axi_interface_inst(
	.clk         ( clk          )   ,
	.rstn        ( rstn         )   ,
	.pc          ( pc           )   ,
	.instr       ( instr        )   ,
	.instr_valid ( instr_valid  )   ,
  .ARID        ( ARID     )   ,
  .ARADDR      ( ARADDR   )   ,
  .ARLEN       ( ARLEN    )   ,
  .ARSIZE      ( ARSIZE   )   ,
  .ARBURST     ( ARBURST  )   ,
  .ARPORT      ( ARPORT   )   ,
  .ARVALID     ( ARVALID  )   ,
  .ARREADY     ( ARREADY  )   ,
  .RDATA       ( RDATA    )   ,
  .RRESP       ( RRESP    )   ,
  .RVALID      ( RVALID   )   ,
  .RREADY      ( RREADY   )   
);


wire            jump_en          ; 
wire  [63:0]    jump_pc          ; 
wire  [63:0]    ifu_pc           ; 
wire  [31:0]    ifu_instr        ; 
wire  [63:0]    ifu_snxt_pc      ; 
wire            ifu_valid        ; 
wire            hazard_stop      ; 
wire            flush_nop        ;       

ifu ifu_inst(
  .clk         ( clk          )   ,
  .rstn        ( rstn         )   ,
  .jump_en     ( jump_en      )   ,
  .jump_pc     ( jump_pc      )   ,
  .snxt_pc     ( snxt_pc      )   ,
  .dnxt_pc     ( dnxt_pc      )   ,
  .pc          ( pc           )   ,
  .instr       ( instr        )   ,
  .instr_valid ( instr_valid  )   ,
  .ifu_pc      ( ifu_pc       )   ,
  .ifu_instr   ( ifu_instr    )   ,
  .ifu_snxt_pc ( ifu_snxt_pc  )   ,
  .ifu_valid   ( ifu_valid    )   ,
  .hazard_stop ( hazard_stop  )   ,
  .flush_nop   ( flush_nop    )      
);

wire              hazard_nop       ; 
wire              need_rs1         ;
wire              need_rs2         ;
wire    [63:0]    mmu_wb_data      ; 
wire    [4:0]     mmu_index_rd     ; 
wire              mmu_wb_en        ; 
wire    [4:0]     idu_index_rs1    ; 
wire    [4:0]     idu_index_rs2    ; 
wire    [4:0]     idu_index_rd     ; 
wire    [31:0]    idu_instr        ; 
wire    [2:0]     idu_funct3       ; 
wire    [6:0]     idu_funct7       ; 
wire              idu_valid        ; 
wire    [63:0]    idu_snxt_pc      ; 
wire    [63:0]    idu_pc           ; 
wire    [63:0]    idu_data_rs1     ; 
wire    [63:0]    idu_imm          ; 
wire    [63:0]    idu_data_rs2     ; 
wire              idu_add_pc_en    ; 
wire              idu_add_rs1_en   ; 
wire              idu_add_zero_en  ; 
wire              idu_imm_en       ; 
wire              idu_rs2_en       ; 
wire              idu_addop_en     ; 
wire              idu_iop_en       ; 
wire              idu_rop_en       ; 
wire              idu_mop_en       ; 
wire              idu_iwop_en      ; 
wire              idu_rwop_en      ; 
wire              idu_mwop_en      ; 
wire              idu_jal_en       ; 
wire              idu_jalr_en      ; 
wire              idu_branch_en    ; 
wire              idu_load_en      ; 
wire              idu_store_en     ; 
wire              idu_wb_alu_en    ; 
wire              idu_ebreak_en    ; 

idu idu_inst(
  .clk              ( clk              ) ,
  .rstn             ( rstn             ) ,
  .flush_nop        ( flush_nop        ) ,
  .hazard_nop       ( hazard_nop       ) ,
  .need_rs1         ( need_rs1         ) ,
  .need_rs2         ( need_rs2         ) ,
  .ifu_instr        ( ifu_instr        ) ,
  .ifu_pc           ( ifu_pc           ) ,
  .ifu_snxt_pc      ( ifu_snxt_pc      ) ,
  .ifu_valid        ( ifu_valid        ) ,
  .mmu_wb_data      ( mmu_wb_data      ) ,
  .mmu_index_rd     ( mmu_index_rd     ) ,
  .mmu_wb_en        ( mmu_wb_en        ) ,
  .idu_index_rs1    ( idu_index_rs1    ) ,
  .idu_index_rs2    ( idu_index_rs2    ) ,
  .idu_index_rd     ( idu_index_rd     ) ,
  .idu_instr        ( idu_instr        ) ,
  .idu_funct3       ( idu_funct3       ) ,
  .idu_funct7       ( idu_funct7       ) ,
  .idu_snxt_pc      ( idu_snxt_pc      ) ,
  .idu_pc           ( idu_pc           ) ,
  .idu_data_rs1     ( idu_data_rs1     ) ,
  .idu_imm          ( idu_imm          ) ,
  .idu_data_rs2     ( idu_data_rs2     ) ,
  .idu_add_pc_en    ( idu_add_pc_en    ) ,
  .idu_add_rs1_en   ( idu_add_rs1_en   ) ,
  .idu_add_zero_en  ( idu_add_zero_en  ) ,
  .idu_imm_en       ( idu_imm_en       ) ,
  .idu_rs2_en       ( idu_rs2_en       ) ,
  .idu_addop_en     ( idu_addop_en     ) ,
  .idu_iop_en       ( idu_iop_en       ) ,
  .idu_rop_en       ( idu_rop_en       ) ,
  .idu_mop_en       ( idu_mop_en       ) ,
  .idu_iwop_en      ( idu_iwop_en      ) ,
  .idu_rwop_en      ( idu_rwop_en      ) ,
  .idu_mwop_en      ( idu_mwop_en      ) ,
  .idu_jal_en       ( idu_jal_en       ) ,
  .idu_jalr_en      ( idu_jalr_en      ) ,
  .idu_branch_en    ( idu_branch_en    ) ,
  .idu_load_en      ( idu_load_en      ) ,
  .idu_store_en     ( idu_store_en     ) ,
  .idu_wb_alu_en    ( idu_wb_alu_en    ) ,
  .idu_ebreak_en    ( idu_ebreak_en    ) ,
  .idu_valid        ( idu_valid        ) 
);

wire             fwd_en_1         ; 
wire             fwd_en_2         ; 
wire  [63:0]     fwd_data_rs1     ; 
wire  [63:0]     fwd_data_rs2     ; 
wire             exu_jal_en       ; 
wire             exu_jalr_en      ; 
wire             exu_branch_en    ; 
wire             exu_br_result    ; 
wire  [63:0]     exu_snxt_pc      ; 
reg   [63:0]     exu_alu_result   ; 
reg              exu_load_en      ; 
reg              exu_store_en     ; 
reg   [2:0]      exu_funct3       ; 
reg   [63:0]     exu_data_rs2     ; 
reg              exu_wb_alu_en    ; 
reg              exu_wb_spc_en    ; 
reg              exu_wb_en        ; 
reg              exu_ebreak_en    ; 
reg   [4:0]      exu_index_rd     ; 
reg   [63:0]     exu_pc           ; 
reg   [31:0]     exu_instr        ; 
reg              exu_valid        ; 

exu exu_inst(
  .      clk        (       clk        )  ,
  .     rstn        (      rstn        )  ,
  .flush_nop        ( flush_nop        )  ,
  .fwd_en_1         ( fwd_en_1         )  ,
  .fwd_en_2         ( fwd_en_2         )  ,
  .fwd_data_rs1     ( fwd_data_rs1     )  ,
  .fwd_data_rs2     ( fwd_data_rs2     )  ,
  .idu_snxt_pc      ( idu_snxt_pc      )  ,
  .idu_pc           ( idu_pc           )  ,
  .idu_data_rs1     ( idu_data_rs1     )  ,
  .idu_data_rs2     ( idu_data_rs2     )  ,
  .idu_imm          ( idu_imm          )  ,
  .idu_add_pc_en    ( idu_add_pc_en    )  ,
  .idu_add_rs1_en   ( idu_add_rs1_en   )  ,
  .idu_add_zero_en  ( idu_add_zero_en  )  ,
  .idu_imm_en       ( idu_imm_en       )  ,
  .idu_rs2_en       ( idu_rs2_en       )  ,
  .idu_addop_en     ( idu_addop_en     )  ,
  .idu_iop_en       ( idu_iop_en       )  ,
  .idu_iwop_en      ( idu_iwop_en      )  ,
  .idu_rop_en       ( idu_rop_en       )  ,
  .idu_rwop_en      ( idu_rwop_en      )  ,
  .idu_mop_en       ( idu_mop_en       )  ,
  .idu_mwop_en      ( idu_mwop_en      )  ,
  .idu_jal_en       ( idu_jal_en       )  ,
  .idu_jalr_en      ( idu_jalr_en      )  ,
  .idu_branch_en    ( idu_branch_en    )  ,
  .idu_load_en      ( idu_load_en      )  ,
  .idu_store_en     ( idu_store_en     )  ,
  .idu_wb_alu_en    ( idu_wb_alu_en    )  ,
  .idu_ebreak_en    ( idu_ebreak_en    )  ,
  .idu_index_rd     ( idu_index_rd     )  ,
  .idu_index_rs1    ( idu_index_rs1    )  ,
  .idu_index_rs2    ( idu_index_rs2    )  ,
  .idu_instr        ( idu_instr        )  ,
  .idu_valid        ( idu_valid        )  ,
  .idu_funct7       ( idu_funct7       )  ,
  .idu_funct3       ( idu_funct3       )  ,
  .exu_jal_en       ( exu_jal_en       )  ,
  .exu_jalr_en      ( exu_jalr_en      )  ,
  .exu_branch_en    ( exu_branch_en    )  ,
  .exu_br_result    ( exu_br_result    )  ,
  .exu_snxt_pc      ( exu_snxt_pc      )  ,
  .exu_alu_result   ( exu_alu_result   )  ,
  .exu_load_en      ( exu_load_en      )  ,
  .exu_store_en     ( exu_store_en     )  ,
  .exu_funct3       ( exu_funct3       )  ,
  .exu_data_rs2     ( exu_data_rs2     )  ,
  .exu_wb_alu_en    ( exu_wb_alu_en    )  ,
  .exu_wb_spc_en    ( exu_wb_spc_en    )  ,
  .exu_wb_en        ( exu_wb_en        )  ,
  .exu_ebreak_en    ( exu_ebreak_en    )  ,
  .exu_index_rd     ( exu_index_rd     )  ,
  .exu_pc           ( exu_pc           )  ,
  .exu_instr        ( exu_instr        )  ,
  .exu_valid        ( exu_valid        )    
);

wire    [4:0]   mmu_index_rd       ; 
wire            mmu_wb_en          ; 
wire    [63:0]  mmu_wb_data        ; 
wire            mmu_valid          ; 
wire            mmu_ebreak_en      ; 
wire    [63:0]  mmu_pc             ; 
wire    [31:0]  mmu_instr          ; 
wire    [63:0]  mm_addr            ; 
wire    [63:0]  mm_wdata           ; 
wire    [3:0]   mm_wlen            ; 
wire            mm_wen             ; 
wire            mm_ren             ; 
wire    [63:0]  mm_rdata           ; 

mmu mmu_inst(
  .clk                ( clk                ) ,
  .rstn               ( rstn               ) ,
  .exu_jal_en         ( exu_jal_en         ) ,
  .exu_jalr_en        ( exu_jalr_en        ) ,
  .exu_branch_en      ( exu_branch_en      ) ,
  .exu_br_result      ( exu_br_result      ) ,
  .exu_snxt_pc        ( exu_snxt_pc        ) ,
  .exu_alu_result     ( exu_alu_result     ) ,
  .exu_load_en        ( exu_load_en        ) ,
  .exu_store_en       ( exu_store_en       ) ,
  .exu_funct3         ( exu_funct3         ) ,
  .exu_data_rs2       ( exu_data_rs2       ) ,
  .exu_wb_spc_en      ( exu_wb_spc_en      ) ,
  .exu_wb_alu_en      ( exu_wb_alu_en      ) ,
  .exu_wb_en          ( exu_wb_en          ) ,
  .exu_ebreak_en      ( exu_ebreak_en      ) ,
  .exu_index_rd       ( exu_index_rd       ) ,
  .exu_pc             ( exu_pc             ) ,
  .exu_instr          ( exu_instr          ) ,
  .exu_valid          ( exu_valid          ) ,
  .jump_en            ( jump_en            ) ,
  .jump_pc            ( jump_pc            ) ,
  .mmu_index_rd       ( mmu_index_rd       ) ,
  .mmu_wb_en          ( mmu_wb_en          ) ,
  .mmu_wb_data        ( mmu_wb_data        ) ,
  .mmu_valid          ( mmu_valid          ) ,
  .mmu_ebreak_en      ( mmu_ebreak_en      ) ,
  .mmu_pc             ( mmu_pc             ) ,
  .mmu_instr          ( mmu_instr          ) ,
  .mm_addr            ( mm_addr            ) , 
  .mm_wdata           ( mm_wdata           ) , 
  .mm_wlen            ( mm_wlen            ) , 
  .mm_wen             ( mm_wen             ) , 
  .mm_ren             ( mm_ren             ) , 
  .mm_rdata           ( mm_rdata           ) 
);


  always@(posedge clk) begin
    if(!rstn) begin
      this_valid <=  1'b0;
      this_pc    <= 64'b0;
      this_instr <= 32'b0;
      this_ebreak<=  1'b0;
    end
    else begin
      this_valid   <= mmu_valid     ;
      this_pc      <= mmu_pc        ;
      this_instr   <= mmu_instr     ;
      this_ebreak  <= mmu_ebreak_en ;
    end
  end


hazard hazard_inst(
  .index_rs1      ( ifu_instr[19:15] ) ,
  .index_rs2      ( ifu_instr[24:20] ) ,
  .index_rd       ( idu_index_rd     ) ,
  .load_en        ( idu_load_en      ) ,
  .need_rs1       ( need_rs1         ) ,
  .need_rs2       ( need_rs2         ) ,
  .hazard_nop     ( hazard_nop       ) ,
  .hazard_stop    ( hazard_stop      )
);

flush flush_inst(
  .jump_en    ( jump_en    )  ,
  .flush_nop  ( flush_nop  )  
);


forward  forward_inst(
  .idu_index_rs1   ( idu_index_rs1   )  ,
  .idu_index_rs2   ( idu_index_rs2   )  ,
  .exu_index_rd    ( exu_index_rd    )  ,
  .mmu_index_rd    ( mmu_index_rd    )  ,
  .exu_alu_result  ( exu_alu_result  )  ,
  .mmu_wb_data     ( mmu_wb_data     )  ,
  .exu_wb_en       ( exu_wb_en       )  ,
  .mmu_wb_en       ( mmu_wb_en       )  ,
  .fwd_en_1        ( fwd_en_1        )  ,
  .fwd_en_2        ( fwd_en_2        )  ,
  .fwd_data_rs1    ( fwd_data_rs1    )  ,
  .fwd_data_rs2    ( fwd_data_rs2    )    
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
/*
  import "DPI-C" function void axi_arready(
    input  byte arvalid ,
    output byte arready
  );
  */

  always@(*) begin
    vmem_read ( mm_addr, mm_rdata, {7'b0, mm_ren } );
    vmem_write( mm_addr, mm_wdata, {4'b0, mm_wlen}, {7'b0, mm_wen} );
    //axi_arready( {7'b0, ARVALID} , {7'b0, ARREADY} );
  end

  export "DPI-C" task end_sim;
  task end_sim;
    $finish;
  endtask


endmodule

