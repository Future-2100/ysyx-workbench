module top 
#(
  parameter DW = 64,
  parameter IW = 32
  
) (
  input   wire  clk ,
  input   wire  rstn ,

  output  wire            ebreak  ,
  output  wire  [DW-1:0]  dnxt_pc ,
  output  wire  [DW-1:0]       pc ,
  output  wire  [DW-1:0]    gpr1  ,
  input   wire  [IW-1:0]    inst 
);

wire    [DW-1:0]    imm      ; 
wire    [DW-1:0]    result   ;
wire                brch_asrt;
wire                jalr_en  ;
wire                jal_en   ;
wire    [DW-1:0]    snxt_pc  ;

  pc_gen pc_gen_inst(
    .clk      (clk) ,
    .rstn     (rstn),

    .imm      ( imm        ),
    .result   ( result     ),  
    .brch_asrt( brch_asrt  ),
    .jalr_en  ( jalr_en    ),
    .jal_en   ( jal_en     ),
    .dnxt_pc  ( dnxt_pc    ),
    .snxt_pc  ( snxt_pc    ),
    .pc       ( pc         )
  );

  wire              wb_en      ; 
  wire              load_en    ; 
  wire    [DW-1:0]  load_data  ;  
  wire    [DW-1:0]   alu_data  = result ;
  wire    [DW-1:0]  rdata1     ; 
  wire    [DW-1:0]  rdata2     ;  
  
regfile regfile_inst
(
  .clk       ( clk       )   ,
  .rstn      ( rstn      )   ,
  .waddr     ( inst[11:7])   ,
  .wb_en     ( wb_en     )   ,
  .load_en   ( load_en   )   ,
  .jal_en    ( jal_en    )   ,
  .jalr_en   ( jalr_en   )   ,
  .load_data ( load_data )   , //data read from memory
  .alu_data  ( alu_data  )   , //result from alu
  .snxt_pc   ( snxt_pc   )   , //result of the pc added 4
  .raddr1    (inst[19:15])   ,
  .raddr2    (inst[24:20])   ,
  .rdata1    ( rdata1    )   ,
  .rdata2    ( rdata2    )   ,
  .gpr1      ( gpr1      )
);


  wire                I_type;
  wire                S_type;
  wire                B_type;
  wire                U_type;
  wire                J_type;

imm_gen imm_gen_inst 
(
  .I_type ( I_type ),
  .S_type ( S_type ),
  .B_type ( B_type ),
  .U_type ( U_type ),
  .J_type ( J_type ),
  .inst   (   inst ),
  .imm    (    imm )
);

  wire  [DW-1:0]  rs1     = rdata1 ;
  wire  [DW-1:0]  rs2     = rdata2 ;
  wire            imm_en    ;
  wire            auipc_en  ; 
  wire  [3:0]     rglr_op   ; //regular option
  wire  [4:0]     wrglr_op  ;
  wire  [2:0]     branch_op ; //branch  option
  wire            wop_en    ;
  wire            op_en     ;
  wire            zero      ;
  wire            branch_en ;

  initial begin
    if( zero == zero ) ;
  end

alu alu_inst
(
  .rs1       ( rs1        ) , 
  .pc        ( pc         ) , 
  .rs2       ( rs2        ) , 
  .imm       ( imm        ) , 
  .imm_en    ( imm_en     ) , 
  .auipc_en  ( auipc_en   ) , 
  .rglr_op   ( rglr_op    ) , 
  .wrglr_op  ( wrglr_op   ) , 
  .branch_op ( branch_op  ) , 
  .branch_en ( branch_en  ) ,
  .wop_en    ( wop_en     ) , 
  .op_en     ( op_en      ) , 
  .result    ( result     ) , 
  .zero      ( zero       ) , 
  .brch_asrt ( brch_asrt  ) 
);

  wire              lb        ;
  wire              lh        ;
  wire              lw        ;
  wire              ld        ;
  wire              lbu       ;
  wire              lhu       ;
  wire              lwu       ;
  wire              sb        ;
  wire              sh        ;
  wire              sw        ;
  wire              sd        ;
  wire  [DW-1:0]    wdata     = rdata2 ;
  wire  [DW-1:0]    addr      = result ;


memory memory_inst
(
    .clk      ( clk        ) ,
    .rstn     ( rstn       ) ,
    .lb       ( lb         ) ,
    .lh       ( lh         ) ,
    .lw       ( lw         ) ,
    .ld       ( ld         ) ,
    .lbu      ( lbu        ) ,
    .lhu      ( lhu        ) ,
    .lwu      ( lwu        ) ,
    .sb       ( sb         ) ,
    .sh       ( sh         ) ,
    .sw       ( sw         ) ,
    .sd       ( sd         ) ,
    .wdata    ( wdata      ) ,
    .addr     ( addr       ) ,
    .load_data( load_data  ) 
);


controlor controlor_inst 
(
    .inst        ( inst       ) , 
    .jal_en      ( jal_en     ) , 
    .jalr_en     ( jalr_en    ) , 
    .branch_en   ( branch_en  ) , 
    .load_en     ( load_en    ) , 
    .wb_en       ( wb_en      ) , 
    .I_type      ( I_type     ) , 
    .S_type      ( S_type     ) , 
    .B_type      ( B_type     ) , 
    .U_type      ( U_type     ) , 
    .J_type      ( J_type     ) , 
    .auipc_en    ( auipc_en   ) , 
    .imm_en      ( imm_en     ) , 
    .rglr_op     ( rglr_op    ) , 
    .wrglr_op    ( wrglr_op   ) , 
    .branch_op   ( branch_op  ) , 
    .op_en       ( op_en      ) , 
    .wop_en      ( wop_en     ) , 
    .lb          ( lb         ) , 
    .lh          ( lh         ) , 
    .lw          ( lw         ) , 
    .ld          ( ld         ) , 
    .lbu         ( lbu        ) , 
    .lhu         ( lhu        ) , 
    .lwu         ( lwu        ) , 
    .sb          ( sb         ) , 
    .sh          ( sh         ) , 
    .sw          ( sw         ) , 
    .sd          ( sd         ) ,
    .ebreak      ( ebreak     )

);


  
  initial begin
//    if($test$plusargs("trace") != 0) begin
      $display("[%0t] Tracing to build/logs/top.vcd...\n",$time);
      $dumpfile("build/logs/top.vcd");
      $dumpvars();
//    end
    $display("[%0t] Model running...\n", $time);
  end

  export "DPI-C" task end_sim;

  task end_sim;
    $finish;
  endtask

endmodule

