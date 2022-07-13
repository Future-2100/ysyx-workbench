module pc_gen (
  input   wire          clk ,
  input   wire          rstn,

  output  reg  [63:0]   pc 
);

  always@(posedge clk or negedge rstn) begin
    if(!rstn)
      pc <= 64'h80000000;
    else
      pc <= pc + 4 ;
  end
  

endmodule

