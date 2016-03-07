`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:27:46 11/13/2015 
// Design Name: 
// Module Name:    im_4k 
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
module im_8k(
	input [12:2] addr,
	output [31:0] dout
    );
	reg[31:0] im[2047:0];
	integer i;
	initial begin
		for(i=0;i<2048;i=i+1)
			im[i]=0;
		$readmemh("code.txt",im);
		$readmemh("exception.txt",im,1120,2047);
	end	
	assign dout=im[addr];
endmodule
