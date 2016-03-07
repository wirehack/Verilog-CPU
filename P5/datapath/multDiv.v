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
    reg [63:0] result;
    integer count;
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
			case(Op)
			2'b00:	begin result=$unsigned(D1)*$unsigned(D2); count=4; end
			2'b01:	begin result=$signed(D1)*$signed(D2); count=4; end
			2'b10:	begin result[31:0]=$unsigned(D1)/$unsigned(D2); result[63:32]=$unsigned(D1)%$unsigned(D2); count=9; end
			2'b11:	begin result[31:0]=$signed(D1)/$signed(D2); result[63:32]=$signed(D1)%$signed(D2); count=9; end
		endcase
		end
		else if(Busy)
		begin
			if(count==0)
				begin
					HI=result[63:32];
					LO=result[31:0];
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
