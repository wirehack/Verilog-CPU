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
    input [31:2] NextPC,
    input Clk,
    input Reset,
    output reg [31:2] Instr
    );
    initial
    	Instr=32'h00003000>>2;
	always@(posedge Clk or posedge Reset)
	begin  
    	if(Reset==1)
        	Instr=32'h00003000;
		else
			Instr=NextPC;
	end
endmodule
