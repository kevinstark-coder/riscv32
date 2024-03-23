/* INSERT NAME AND PENNKEY HERE */

`timescale 1ns / 1ns

// quotient = dividend / divisor

module divider_unsigned_pipelined (
    input wire clk, rst,
    input  wire [31:0] i_dividend,
    input  wire [31:0] i_divisor,
    output wire [31:0] o_remainder,
    output wire [31:0] o_quotient
);
    
    // TODO: your code here

    // stage 1 
    logic [31:0] divided_1[16:0];
    logic [31:0] remainder_1[16:0];
    logic [31:0] quotient_1[16:0];
    logic [31:0] quotient;
    logic [31:0] remainder;

    assign divided_1[0] = i_dividend;
    assign remainder_1[0] = 0;
    assign quotient_1[0] = 0;
      genvar i;
      for (i = 0; i <16; i = i+1) begin
          divu_1iter d1(
            .i_dividend(divided_1[i]), 
            .i_divisor(i_divisor), 
            .i_quotient(quotient_1[i]), 
            .i_remainder(remainder_1[i]), 
            .o_dividend(divided_1[i+1]), 
            .o_quotient(quotient_1[i+1]), 
            .o_remainder(remainder_1[i+1])
            );
      end
   
      // stage 2
      logic [31:0] divided_2[16:0];
      logic [31:0] remainder_2[16:0];
      logic [31:0] quotient_2[16:0];
  
      assign divided_2[0] = divided_1[16];
      assign remainder_2[0] = remainder_1[16];
      assign quotient_2[0] = quotient_1[16];
        for (i = 0; i <16; i = i+1) begin
            divu_1iter d1(
              .i_dividend(divided_2[i]), 
              .i_divisor(i_divisor), 
              .i_quotient(quotient_2[i]), 
              .i_remainder(remainder_2[i]), 
              .o_dividend(divided_2[i+1]), 
              .o_quotient(quotient_2[i+1]), 
              .o_remainder(remainder_2[i+1]) 
              );
        end

        always @(posedge clk) begin   //复位信号不要加入到敏感列表中
            if(rst) begin
                for (int j=0; j<17; j=j+1)begin
                    divided_1[j] <= 32'd0;
                    remainder_1[j] <= 32'd0;
                    quotient_1[j] <= 32'd0;
                end
               
                
            end  //rstn 信号与时钟 clk 同步
            else begin
                quotient <= quotient_1[16];
                remainder <= remainder_1[16];
                
            end
        end

        always @(posedge clk) begin   //复位信号不要加入到敏感列表中
            if(rst) begin
                for (int j=0; j<17; j=j+1)begin
                    divided_2[j] <= 32'd0;
                    remainder_2[j] <= 32'd0;
                    quotient_2[j] <= 32'd0;
                end
                
            end  //rstn 信号与时钟 clk 同步
            else begin
                quotient <= quotient_2[16];
                remainder <= remainder_2[16];
                
            end
        end

        assign o_quotient = quotient;
        assign o_remainder = remainder;

endmodule


module divu_1iter (
    input  wire [31:0] i_dividend,
    input  wire [31:0] i_divisor,
    input  wire [31:0] i_remainder,
    input  wire [31:0] i_quotient,
    output wire [31:0] o_dividend,
    output wire [31:0] o_remainder,
    output wire [31:0] o_quotient
);

  // TODO: copy your code from HW2A here
    wire [31:0] temp_remainder;
    wire [31:0] temp_quotient;
    
    assign temp_remainder = (i_remainder << 1) | (i_dividend >> 31 & 32'h1);
    assign temp_quotient = (temp_remainder < i_divisor) ? (i_quotient << 1) : (i_quotient << 1 | 32'h1);
    
    assign o_dividend = i_dividend << 1;
    assign o_remainder = (temp_remainder < i_divisor) ? (temp_remainder) : (temp_remainder - i_divisor);
    assign o_quotient = temp_quotient;


endmodule
