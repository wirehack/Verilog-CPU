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
    output reg [31:0] pcAddr
    );
    initial
    	pcAddr=32'h00003000;
	always@(posedge Clk or posedge Reset)
	begin  
    	if(Reset==1)
        	pcAddr=32'h00003000;
        else if(en==0)
        	pcAddr=pcAddr;
		else
			pcAddr=NextPC;
	end
endmodule
