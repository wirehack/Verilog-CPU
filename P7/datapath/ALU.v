`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:30 11/13/2015 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] Op,
    output reg [31:0] C,
    output Over
    );
    assign Over=(A[31]!=C[31])? 1:0;
    always@*
    begin
    case(Op)
	4'b0000:	C=A&B;
	4'b0001:	C=A|B;
	4'b0010:	C=A+B;
	4'b0011:	C=A^B;
	4'b0110:	C=A-B;
	4'b0111:	C=$signed(A)<$signed(B)? 32'b1:32'b0;
	4'b1000:	C=$unsigned(A)<$unsigned(B) ? 32'b1:32'b0;
	4'b1001:	C=$signed(B)>>>(A[4:0]);
	4'b1010:	C=B;
	4'b1100:	C=~(A|B);
	4'b1101:	C=B<<(A[4:0]);
	4'b1110:	C=B>>(A[4:0]);
	endcase
	end
endmodule
