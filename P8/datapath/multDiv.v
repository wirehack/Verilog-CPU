`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:18:31 11/29/2015 
// Design Name: 
// Module Name:    multDiv 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module multDiv(
	input Clk,
	input Rst,
	input [31:0] D1,
	input [31:0] D2,
	input HiLo,
	input [1:0] Op,
	input Start,
	input We,
	output reg Busy,
	output reg [31:0] HI,
	output reg [31:0] LO
    );
    initial
    	Busy=0;
    wire [63:0] unsigned_mult_result,signed_mult_result,unsigned_div_result,signed_div_result;
    reg [1:0] Operation;
    reg [31:0] data1,data2;
    reg [7:0] count;
    //unsigned_multiplier unsigned_multiplier(.clk(Clk),.ce(Busy&&Operation==2'b00),.a(data1),.b(data2),.p(unsigned_mult_result));
    //signed_multiplier signed_multiplier(.clk(Clk),.ce(Busy&&Operation==2'b01),.a(data1),.b(data2),.p(signed_mult_result));
    //unsigned_divider unsigned_divider(.ce(Busy&&Operation==2'b10),/*.rfd(),*/.clk(Clk),.dividend(data1),.quotient(unsigned_div_result[31:0]),
    //.divisor(data2),.fractional(unsigned_div_result[63:32]));
    //signed_divider signed_divider(.ce(Busy&&Operation==2'b11),/*.rfd(),*/.clk(Clk),.dividend(data1),.quotient(signed_div_result[31:0]),
    //.divisor(data2),.fractional(signed_div_result[63:32]));
	always@(posedge Clk or posedge Rst)
	begin
		if(Rst)
		begin
			Busy=0;
			count=0;
			HI=0;
			LO=0;
		end
		else if(Start)
		begin
			Busy=1;
			data1=D1;
			data2=D2;
			Operation=Op;
			case(Op)
			2'b00:	begin  count=6; end
			2'b01:	begin  count=6; end
			2'b10:	begin  count=42; end
			2'b11:	begin  count=45; end
		endcase
		end
		else if(Busy)
		begin
			if(count==0)
				begin
					case(Operation)
					2'b00:	begin  	HI=unsigned_mult_result[63:32];	LO=unsigned_mult_result[31:0]; end
					2'b01:	begin   HI=signed_mult_result[63:32];	LO=signed_mult_result[31:0]; end
					2'b10:	begin   HI=unsigned_div_result[63:32];	LO=unsigned_div_result[31:0]; end
					2'b11:	begin   HI=signed_div_result[63:32];	LO=signed_div_result[31:0]; end
					endcase
					Busy=0;
				end
			else
				count=count-1;
		end
		else if(We)
			case(HiLo)
				1'b0:	LO=D1;
				1'b1:	HI=D1;
			endcase
	end
endmodule
