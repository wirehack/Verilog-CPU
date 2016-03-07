`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:56:03 11/20/2015 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
	input clk,
	input rst,
	input en,
	input [31:0] Instr_in,
	input [31:0] pc8_in,
	input [31:0] pc4_in,
	output reg [31:0] Instr_out,
	output reg [31:0] pc8_out,
	output reg [31:0] pc4_out
    );
    initial
    fork
    	Instr_out=0;
    	pc8_out=0;
    	pc4_out=0;
    	join
    always@(posedge clk or posedge rst)
    begin
    	if(rst==1)
    	fork
    	Instr_out=0;
    	pc8_out=0;
    	pc4_out=0;
    	join
    	else if(en==0)
    		begin
    		end
    	else
    		fork
    			Instr_out=Instr_in;
    			pc8_out=pc8_in;
    			pc4_out=pc4_in;
    		join
    end


endmodule
