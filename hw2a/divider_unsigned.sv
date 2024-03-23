/* INSERT NAME AND PENNKEY HERE */

`timescale 1ns / 1ns

// quotient = dividend / divisor

module divider_unsigned (
    input  wire [31:0] i_dividend,
    input  wire [31:0] i_divisor,
    output wire [31:0] o_remainder,
    output wire [31:0] o_quotient
);
    
    wire [31:0] dividend[32],remainder[32],quotient[32];
    //wire [31:0] next_dividend,next_remainder,next_quotient;
    
    divu_1iter u_div0(
    .i_dividend(i_dividend),
    .i_divisor(i_divisor),
    .i_remainder(32'b0),
    .i_quotient(32'b0),
    .o_dividend(dividend[0]),
    .o_remainder(remainder[0]),
    .o_quotient(quotient[0])
    );

    genvar i;
    generate
        for(i=0;i<31; i=i+1) begin : div
            divu_1iter u_div(
            .i_dividend(dividend[i]),
            .i_divisor(i_divisor),
            .i_remainder(remainder[i]),
            .i_quotient(quotient[i]),
            .o_dividend(dividend[i+1]),
            .o_remainder(remainder[i+1]),
            .o_quotient(quotient[i+1])
            );
    end
    endgenerate

    assign o_remainder = remainder[31];
    assign o_quotient = quotient[31];

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
    reg [31:0] remainder,dividend,quotient;
    always@(*) 
    begin
        remainder = (i_remainder << 1) | ((i_dividend >> 31) & 32'b1);
        dividend = i_dividend;
        quotient = i_quotient;
        if(remainder < i_divisor) 
        begin
            quotient = quotient << 1;
        end
        else 
        begin
            //quotient = quotient <<1 + 1'b1;
            quotient = quotient <<1 | 32'h1;
            remainder = remainder - i_divisor;
        end
        dividend = dividend << 1;
    end
    assign o_dividend = dividend;
    assign o_remainder = remainder;
    assign o_quotient = quotient;
  /*
    for (int i = 0; i < 32; i++) {
        remainder = (remainder << 1) | ((dividend >> 31) & 0x1);
        if (remainder < divisor) {
            quotient = (quotient << 1);
        } else {
            quotient = (quotient << 1) | 0x1;
            remainder = remainder - divisor;
        }
        dividend = dividend << 1;
    }
    */


endmodule
