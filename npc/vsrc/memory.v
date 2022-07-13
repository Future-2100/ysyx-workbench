module memory
#(
  parameter DW = 64
) (

  input wire  clk   ,

  input wire  lb  ,
  input wire  lh  ,
  input wire  lw  ,
  input wire  ld  ,

  input wire  lbu  ,
  input wire  lhu  ,
  input wire  lwu  ,

  input wire  sb  ,
  input wire  sh  ,
  input wire  sw  ,
  input wire  sd  ,

  input wire  [DW-1:0]    wdata ,
  input wire  [DW-1:0]    addr  ,

  output  wire  [DW-1:0]  load_data

);

  initial begin
    if ( addr == addr ) ;
  end

  wire  ram1_en = sb | sh | sw | sd ; 
  wire  ram2_en = sh | sw | sd ; 
  wire  ram3_en = sw | sd ; 
  wire  ram4_en = sd ; 

  wire  wr_en = sb | sh | sw | sd ;

  wire  [DW-1:0] rdata;

  wire  [DW-1:0]  lb_data = { {(DW- 8){rdata[ 7]}} , rdata[ 7:0] };
  wire  [DW-1:0]  lh_data = { {(DW-16){rdata[15]}} , rdata[15:0] };
  wire  [DW-1:0]  lw_data = { {(DW-32){rdata[31]}} , rdata[31:0] };
  wire  [DW-1:0]  ld_data = rdata;
  wire  [DW-1:0]  lbu_data = { {(DW- 8){1'b0}} , rdata[ 7:0] };
  wire  [DW-1:0]  lhu_data = { {(DW-16){1'b0}} , rdata[15:0] };
  wire  [DW-1:0]  lwu_data = { {(DW-32){1'b0}} , rdata[31:0] };

  assign  load_data = ( {DW{lb}} & lb_data )   |
                      ( {DW{lh}} & lh_data )   |
                      ( {DW{lw}} & lw_data )   |
                      ( {DW{ld}} & ld_data )   |
                      ( {DW{lbu}} & lbu_data ) |
                      ( {DW{lhu}} & lhu_data ) |
                      ( {DW{lwu}} & lwu_data ) ;

 ram ram_inst (
   .clk (clk) ,

   .ram1_en ( ram1_en ) , 
   .ram2_en ( ram2_en ) , 
   .ram3_en ( ram3_en ) , 
   .ram4_en ( ram4_en ) , 

   .addr (addr[15:3]) ,
   .wr_en(wr_en),
   .wdata(wdata),

   .rdata(rdata)

 ); 


endmodule

