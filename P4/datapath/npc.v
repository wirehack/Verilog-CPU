`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:21 11/14/2015 
// Design Name: 
// Module Name:    npc 
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
module npc(
	input [31:2] pcAddr,
	input [25:0] imm26,
	input [31:0] imm32,
	input [31:0] regAddr,//jr reg
	input IfBeq,
	input Zero,
	input jr,
	input jal,
	output reg [31:2] npc,
	output [31:0] pc4
    );
    assign pc4={pcAddr,2'b00}+4;
    always@*
    begin
    	npc=pc4>>2;
    	if(IfBeq==1&&Zero==1)
    		begin
				npc=npc+imm32[30:0];
			end
		else if(jr==1)
			npc=regAddr>>2;
		else if(jal==1)
			npc={pc4[31:28],imm26};
	end
endmodule
