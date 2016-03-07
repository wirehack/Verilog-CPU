`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:01 11/13/2015 
// Design Name: 
// Module Name:    dm_4k 
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
module dm_8k(
	input [12:2] A,
	input [3:0] BE,
	input [31:0] WD,
	input We,
	input Clk,
	output [31:0] RD
    );
	reg[31:0] dm[2047:0];
	integer i;
	initial begin
		for(i=0;i<2048;i=i+1)
			dm[i]=0;
	end
	always@(posedge Clk)
	begin
		if(We==1)
		begin
			case(BE)
			4'b1111:	dm[A]=WD;
			4'b0011:	dm[A][15:0]=WD[15:0];
			4'b1100:	dm[A][31:16]=WD[15:0];
			4'b0001:	dm[A][7:0]=WD[7:0];
			4'b0010:	dm[A][15:8]=WD[7:0];
			4'b0100:	dm[A][23:16]=WD[7:0];
			4'b1000:	dm[A][31:24]=WD[7:0];
			endcase
		end
	end
	assign	RD=dm[A];
endmodule
