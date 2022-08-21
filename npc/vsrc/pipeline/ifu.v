module ifu(
  input   wire            clk              ,
  input   wire            rstn             ,

  input   wire            jump_en          ,

  input   wire  [63:0]    jump_pc          ,
  output  wire  [63:0]    snxt_pc          ,
  output  wire  [63:0]    dnxt_pc          ,

  output  reg   [63:0]    pc               ,

  input   wire  [31:0]    instr            ,
  input   wire            instr_valid      ,
  input   wire            ifetch_en        ,

  output  reg   [63:0]    ifu_pc           ,
  output  reg   [31:0]    ifu_instr        ,
  output  reg   [63:0]    ifu_snxt_pc      ,
  output  reg             ifu_valid        ,

  input   wire            hazard_stop      ,
  input   wire            flush_nop
);


assign  snxt_pc = instr_pc + 4;

assign  dnxt_pc = (jump_en) ? jump_pc : 
                  (hazard_stop | !instr_valid) ? instr_pc : snxt_pc ;
                  

reg [63:0] instr_pc;
always@(posedge clk) begin
  if(!rstn)
    instr_pc <= 64'h80000000 ;
  else if( jump_en )
    instr_pc <= jump_pc  ;
  else if( instr_valid & hazard_stop )
    instr_pc <= instr_pc       ;
  else if( instr_valid )
    instr_pc <= snxt_pc  ;
end

always@(posedge clk) begin
  if(!rstn)
    pc <= 64'h80000000 ;
  else if( jump_en )
    pc <= jump_pc  ;
  else if( instr_valid & hazard_stop )
    pc <= pc       ;
  else if( ifetch_en )
    pc <= snxt_pc  ;
  /*
  else if( hazard_stop & ( !jump_en ) )
    pc <= pc ;
  else
    pc <= dnxt_pc;
  */
end

always@(posedge clk) begin
  if(!rstn) begin
    ifu_pc          <= 64'b0;
    ifu_instr       <= 32'b0;
    ifu_snxt_pc     <= 64'b0;
    ifu_valid       <=  1'b0;
  end else if (flush_nop) begin
    ifu_pc          <= instr_pc     ;
    ifu_instr       <= 32'h13 ;
    ifu_snxt_pc     <= snxt_pc;
    ifu_valid       <=  1'b0  ;
  end else if (hazard_stop) begin
    ifu_pc          <= ifu_pc   ;
    ifu_instr       <= ifu_instr;
    ifu_snxt_pc     <= ifu_snxt_pc;
    ifu_valid       <= ifu_valid;
  end else if (!instr_valid) begin
    ifu_pc          <= instr_pc;
    ifu_instr       <= 32'h13 ;
    ifu_snxt_pc     <= snxt_pc;
    ifu_valid       <=  1'b0  ;
  end else begin
    ifu_pc          <= instr_pc;
    ifu_instr       <= instr  ;
    ifu_snxt_pc     <= snxt_pc;
    ifu_valid       <=  1'b1  ;
  end
end

endmodule

