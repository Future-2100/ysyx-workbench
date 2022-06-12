module regfile
#(
  parameter DW = 64 , // data width
  parameter AW = 5
) (
  input   wire    clk               ,
  input   wire    rstn              ,

  input   wire              wb_en   ,
  input   wire              wb_load ,
  input   wire              wb_pc   ,
  input   wire              wb_alu  ,
  input   wire    [AW-1:0]  wb_addr ,
  input   wire    [DW-1:0]  load_data   , //data read from memory
  input   wire    [DW-1:0]    pc_data   , //result of the pc added 4
  input   wire    [DW-1:0]   alu_data   , //result from alu

  output  wire    [DW-1:0]        a   ,  
  input   wire    [AW-1:0]  rd_addr1  ,
  input   wire    [AW-1:0]  rd_addr2  ,
  output  wire    [DW-1:0]  rd_data1  ,
  output  wire    [DW-1:0]  rd_data2  

);

  wire    [DW-1:0]  wb_data  ; 

  assign  wb_data = ( {DW{wb_load}} & load_data ) | 
                    ( {DW{wb_pc  }} &   pc_data ) | 
                    ( {DW{wb_alu }} &  alu_data ) ;

  reg   [DW-1:0]    gpr   [31:0]  ;

  assign  a = gpr[10];
  integer i;

  always@(negedge clk) begin
    if(!rstn) begin
      for(i=0; i<32; i=i+1) begin
        gpr[i] <= {DW{1'b0}} ;
      end
    end
    else if (wb_en) begin
      gpr[wb_addr] <= wb_data ;
    end
  end

  assign  rd_data1 = (rd_addr1 == {AW{1'b0}}) ? {DW{1'b0}} : gpr[rd_addr1] ;
  assign  rd_data2 = (rd_addr2 == {AW{1'b0}}) ? {DW{1'b0}} : gpr[rd_addr2] ;

endmodule

