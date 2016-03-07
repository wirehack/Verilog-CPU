`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:36:40 11/28/2015 
// Design Name: 
// Module Name:    BE 
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
module BE_EN(
	input [1:0] A,
	input sb_ex_mem,
	input sh_ex_mem,
	input sw_ex_mem,
	output reg [3:0] BE
    );
	always@*
	begin
		if(sw_ex_mem==1)
			BE=4'b1111;
		else if(sh_ex_mem==1)
			BE=(A[1]==1) ? 4'b1100:4'b0011;
		else
			begin
				BE=4'b0000;
				BE[A]=1;
			end
	end
endmodule
