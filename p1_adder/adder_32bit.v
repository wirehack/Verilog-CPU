`timescale 1ns / 1ps
`include "adder_8bit.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:20:02 10/27/2015 
// Design Name: 
// Module Name:    adder_32bit 
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
module adder_32bit(
    input [31:0] A,
    input [31:0] B,
    input C0,
    output [31:0] SUM,
    output Overflow
    );
    adder_8bit adder1(A[7:0],B[7:0],C0,SUM[7:0],C1),
    adder2(A[15:8],B[15:8],C1,SUM[15:8],C2),
    adder3(A[23:16],B[23:16],C2,SUM[23:16],C3),
    adder4(A[31:24],B[31:24],C3,SUM[31:24],Overflow);

endmodule