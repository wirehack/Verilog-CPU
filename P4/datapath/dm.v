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
module dm_4k(
	input [11:2] addr,
	input [31:0] din,
	input we,
	input clk,
	output [31:0] dout
    );
	reg[31:0] dm[1023:0];
	integer i;
	initial begin
		for(i=0;i<1024;i=i+1)
			dm[i]=0;
			$readmemh("data.txt",dm); 
	end
	always@(posedge clk)
	begin
		if(we==1)
			dm[addr]=din;
		else
	end
	assign	dout=dm[addr];
endmodule
