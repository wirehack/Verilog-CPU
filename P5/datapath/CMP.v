`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:26:59 11/28/2015 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
	input [31:0] A,
    input [31:0] B,
    input [2:0] Op,
    output reg Br
    );
    always@*
    begin
    	case(Op)
    		3'b110:	if(A==B) Br=1;
    				else Br=0;
    		3'b001:	if(A!=B) Br=1;
    				else Br=0;
			3'b010:	if(A<=0) Br=1;
    				else Br=0;
			3'b011:	if(A>0) Br=1;
    				else Br=0;
    		3'b100:	if(A<0) Br=1;
    				else Br=0;
    		3'b101:if(A>=0) Br=1;
    				else Br=0;
    		default:Br=0;
    	endcase
    end
endmodule
