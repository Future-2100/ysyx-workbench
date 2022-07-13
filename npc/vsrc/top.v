module top
(
  input   wire          clk   ,
  input   wire          rstn  ,

  output  wire  [63:0]  pc    ,
  input   wire  [31:0]  inst  ,

  output  wire  [63:0]  gpr1  ,
  output  wire          ebreak
);

  pc_gen pc_gen_inst (
    .clk (clk) ,
    .rstn(rstn),

    .pc (pc)
  );

  wire  [63:0] rdata1;
  wire  [63:0] rdata2;
  wire         wen   ;
  wire  [63:0] wdata ;
  regfile regfile_inst (
    .clk (clk),
    .rstn(rstn),

    .raddr1 ( inst[19:15] ),
    .raddr2 ( inst[24:20] ),
    .rdata1 ( rdata1 ),
    .rdata2 ( rdata2 ),

    .wen    ( wen        ),
    .waddr  ( inst[11:7] ),
    .wdata  ( wdata      ),

    .gpr1   ( gpr1 )
  );


  wire          I_type  ;
  wire  [63:0]  imm     ;
  imm_gen imm_gen_inst (
    .I_type ( I_type ),
    .inst   ( inst   ),
    .imm    ( imm    )
  );

  wire  imm_en;
  wire  [3:0]  alu_op ;
  wire  [63:0] result ;
  wire  zero ;

  initial begin
    if(zero==zero) ;
  end

  alu alu_inst (
    .rsdata1 ( rdata1 ),
    .imm_en  ( imm_en ),
    .rsdata2 ( rdata2 ),
    .imm     ( imm    ),
    .alu_op  ( alu_op ),
    .result  ( result ),
    .zero    ( zero   )
  );

  assign  wdata = result ;

  
  controlor controlor_inst (
    .inst   ( inst   ),
    .imm_en ( imm_en ),
    .I_type ( I_type ),
    .wen    ( wen    ),
    .alu_op ( alu_op ),
    .ebreak ( ebreak )
  );

  initial begin
    $display("[%0t] Tracing to build/logs/top.vcd...\n",$time);
    $dumpfile("build/logs/top.vcd");
    $dumpvars();
    $display("[%0t] Model running...\n", $time);
  end

  export "DPI-C" task end_sim;

  task end_sim;
    $finish;
  endtask

endmodule


