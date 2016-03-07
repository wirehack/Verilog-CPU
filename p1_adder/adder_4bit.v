`timescale 1ns / 1ps
`include "adder_1bit.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:03:52 10/27/2015 
// Design Name: 
// Module Name:    adder_4bit 
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
module adder_4bit(
    input [3:0] A,
    input [3:0] B,
    input C0,
    output [3:0] SUM,
    output Overflow
    );
    wire C1,C2,C3;
    adder_1bit adder1(A[0],B[0],C0,SUM[0],C1),
    adder2(A[1],B[1],C1,SUM[1],C2),
    adder3(A[2],B[2],C2,SUM[2],C3),
    adder4(A[3],B[3],C3,SUM[3],Overflow);
endmodule
