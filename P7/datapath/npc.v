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
	inout [31:0] pc4,
	input [25:0] imm26,
	input Branch,
	input j,
	output reg [31:0] npc
    );
    wire [31:0] imm32=$signed(imm26[15:0]);
    always@*
    begin
    	npc=pc4;
    	if(j==1)
    		npc={pc4[31:28],imm26,2'b00};
    	else if(Branch==1)
			npc=npc+(imm32<<2);
	end
endmodule
