`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:51 11/13/2015 
// Design Name: 
// Module Name:    pc 
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
module pc(
    input [31:0] NextPC,
    input Clk,
    input Reset,
    input en,
    input IntBeq,
    output reg [31:0] pcAddr
    );
    initial
    	pcAddr=32'h00003000;
	always@(posedge Clk /*or posedge Reset*/)
	begin
		if(IntBeq)
			pcAddr=NextPC;
    	else if(Reset)
        	pcAddr=32'h0000_3000;
		else if(en)
			pcAddr=NextPC;
	end
endmodule
