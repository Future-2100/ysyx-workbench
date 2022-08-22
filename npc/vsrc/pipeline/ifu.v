module ifu(
  input   wire            clk              ,
  input   wire            rstn             ,

  input   wire            jump_en          ,

  input   wire  [63:0]    jump_pc          ,
  output  wire  [63:0]    snxt_pc          ,
  output  wire  [63:0]    dnxt_pc          ,

  output  reg   [63:0]    pc               ,

  input   wire  [31:0]    instr            ,
  input   wire            update           ,
  input   wire            ifu_update       ,

  output  reg   [63:0]    ifu_pc           ,
  output  reg   [31:0]    ifu_instr        ,
  output  reg   [63:0]    ifu_snxt_pc      ,
  output  reg             ifu_valid        ,

  input   wire            hazard_stop      ,
  input   wire            flush_nop
);


assign  snxt_pc = pc + 4;

assign  dnxt_pc = (jump_en) ? jump_pc : 
                  ( hazard_stop ) ? pc : snxt_pc ;
                  

always@(posedge clk) begin
  if(!rstn)
    pc <= 64'h80000000 ;
  else if( ifu_update & jump_en )
    pc <= jump_pc  ;
  else if( ifu_update & hazard_stop )
    pc <= pc       ;
  else if( ifu_update )
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
    ifu_instr <= 32'b0;
  end
  else if ( ifu_update & flush_nop ) begin
    ifu_instr <= 32'h13;
  end
  else if ( ifu_update & hazard_stop ) begin
    ifu_instr <= ifu_instr;
  end
  else if ( ifu_update ) begin
    ifu_instr <= instr;
  end
end


always@(posedge clk) begin
  if(!rstn) begin
    ifu_pc          <= 64'b0;
    ifu_snxt_pc     <= 64'b0;
    ifu_valid       <=  1'b0;
  end else if (update & flush_nop) begin
    ifu_pc          <= pc     ;
    ifu_snxt_pc     <= snxt_pc;
    ifu_valid       <=  1'b0  ;
  end else if (update & hazard_stop) begin
    ifu_pc          <= ifu_pc   ;
    ifu_snxt_pc     <= ifu_snxt_pc;
    ifu_valid       <= ifu_valid;
  end else if( update )begin
    ifu_pc          <= pc     ;
    ifu_snxt_pc     <= snxt_pc;
    ifu_valid       <= 1'b1   ;
  end /*else begin
    ifu_pc          <= ifu_pc     ;
    ifu_instr       <= ifu_instr  ;
    ifu_snxt_pc     <= ifu_snxt_pc;
    ifu_valid       <= 1'b0       ;
  end
  */
end

endmodule

