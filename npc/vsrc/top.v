module top 
#(
  parameter DW = 64,
  parameter IW = 32
  
) (
  input   wire  clk  ,
  input   wire  rstn ,

  output  wire  [DW-1:0]       a  ,
  output  wire            ebreak  ,
  output  wire  [DW-1:0]  dnxt_pc ,
  output  wire  [DW-1:0]  snxt_pc ,
  output  wire  [DW-1:0]       pc ,
  input   wire  [IW-1:0]    inst  ,

  output  wire  [DW-1:0]  wdata   ,
  output  wire  [3:0]     wlen    ,
  output  wire            wen     ,
  output wire                ren     ,
  input  wire    [DW-1:0]    rdata   ,
  output  wire  [DW-1:0]  addr    

);


wire    [DW-1:0]    imm      ; 
wire    [DW-1:0]    result   ;
wire                br_asrt  ;
wire                jalr_en  ;
wire                jal_en   ;

  pc_gen pc_gen_inst(
    .clk      (clk) ,
    .rstn     (rstn),

    .imm      ( imm        ),
    .result   ( result     ),  
    .br_en    ( br_asrt    ),
    .jalr_en  ( jalr_en    ),
    .jal_en   ( jal_en     ),
    .dnxt_pc  ( dnxt_pc    ),
    .snxt_pc  ( snxt_pc    ),
    .pc       ( pc         )
  );

  wire              wb_en      ; 
  wire              wb_load    ; 
  wire              wb_pc      ;
  wire              wb_alu     ;
  wire    [DW-1:0]  load_data  ;  
  wire    [DW-1:0]  rd_data1   ; 
  wire    [DW-1:0]  rd_data2   ;  
  
regfile regfile_inst
(
  .clk       ( clk       )   ,
  .rstn      ( rstn      )   ,
  .wb_en     ( wb_en     )   ,
  .wb_load   ( wb_load   )   ,
  .wb_pc     ( wb_pc     )   ,
  .wb_alu    ( wb_alu    )   ,
  .wb_addr   ( inst[11:7])   ,
  .load_data ( load_data )   , // data read from memory
  .pc_data   ( snxt_pc   )   , // next pc
  .alu_data  ( result    )   , // result from alu
  
  .rd_addr1  (inst[19:15])   ,
  .rd_addr2  (inst[24:20])   ,
  .rd_data1  ( rd_data1  )   ,
  .rd_data2  ( rd_data2  )   ,
  .a         (      a    )
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

  wire            rs1_en    ;
  wire             pc_en    ;
  wire            rs2_en    ;
  wire            imm_en    ;

  wire            lgc_en    ; 
  wire    [3:0]   lgc_op    ;
  wire            wlgc_en   ;
  wire    [4:0]   wlgc_op   ;
  wire            mlgc_en   ;
  wire    [2:0]   mlgc_op   ;
  wire           wmlgc_en   ;
  wire    [3:0]  wmlgc_op   ;
  wire            br_en     ;
  wire    [2:0]   br_op     ;
  wire            zero      ;
  wire            br_asrt ;

  initial begin
    if( zero == zero ) ;
  end

alu alu_inst
(
  .rs1_en    ( rs1_en     ) ,
  . pc_en    ( pc_en      ) ,
  .rs1_data  ( rd_data1   ) , 
  . pc_data  (  pc        ) ,
  .rs2_en    ( rs2_en     ) , 
  .imm_en    ( imm_en     ) , 
  .rs2_data  ( rd_data2   ) ,
  .imm_data  ( imm        ) , 
  .lgc_en    (  lgc_en    ) , 
  .lgc_op    (  lgc_op    ) , 
  .wlgc_en   ( wlgc_en    ) , 
  .wlgc_op   ( wlgc_op    ) , 
  .mlgc_en   ( mlgc_en    ) ,
  .mlgc_op   ( mlgc_op    ) ,
  .wmlgc_en  ( wmlgc_en   ) ,
  .wmlgc_op  ( wmlgc_op   ) ,
  .br_en     ( br_en      ) ,
  .br_op     ( br_op      ) , 
  .result    ( result     ) , 
  .zero      ( zero       ) , 
  .br_asrt   ( br_asrt    ) 
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
  wire  [DW-1:0]    wdata_in     = rd_data2 ;
  wire  [DW-1:0]    addr_in      = result   ;


memory memory_inst
(
    //.clk      ( clk        ) ,
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
    .wdata_in ( wdata_in   ) ,
    .addr_in  ( addr_in    ) ,
    .load_data( load_data  ) ,

    .wdata    ( wdata      ) ,
    .wlen     ( wlen       ) ,
    .wen      ( wen        ) ,
    .ren      ( ren        ) ,
    .rdata    ( rdata      ) ,
    .addr     ( addr       ) 
);

controlor controlor_inst 
(
    .inst        ( inst       ) , 

    .wb_en       ( wb_en      ) ,     
    .wb_load     ( wb_load    ) ,
    .wb_pc       ( wb_pc      ) ,
    .wb_alu      ( wb_alu     ) ,
    .I_type      ( I_type     ) , 
    .S_type      ( S_type     ) , 
    .B_type      ( B_type     ) , 
    .U_type      ( U_type     ) , 
    .J_type      ( J_type     ) , 
    .rs1_en      (  rs1_en    ) ,
    . pc_en      (   pc_en    ) ,  
    .rs2_en      (  rs2_en    ) ,
    .imm_en      (  imm_en    ) ,
    .lgc_en      ( lgc_en     ) , 
    .lgc_op      ( lgc_op     ) , 
    .wlgc_en     ( wlgc_en    ) , 
    .wlgc_op     ( wlgc_op    ) , 
    .mlgc_en     ( mlgc_en    ) ,
    .mlgc_op     ( mlgc_op    ) ,
    .wmlgc_en    ( wmlgc_en   ) ,
    .wmlgc_op    ( wmlgc_op   ) ,
    .br_en       ( br_en      ) ,
    .br_op       ( br_op      ) , 
    .jal_en      ( jal_en     ) , 
    .jalr_en     ( jalr_en    ) , 
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

  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
  initial set_gpr_ptr(regfile_inst.gpr);

  /*
  import "DPI-C" function void vmem_read(
    input longint raddr, output longint rdata );

  import "DPI-C" function void vmem_write(
    input longint waddr, input longint wdata, input byte wlen, input byte wen);

  always@(*) begin
    vmem_read(addr, rdata);
    vmem_write(addr, wdata, {4'b0, wlen}, {7'b0, wen} );
  end
*/

  export "DPI-C" task end_sim;
  task end_sim;
    $finish;
  endtask


endmodule

