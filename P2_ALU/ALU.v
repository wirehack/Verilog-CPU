`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:02:58 10/24/2015 
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
    input [31:0] ALU_DA,
    input [31:0] ALU_DB,
    input [2:0] ALUOp,
    output reg [31:0] ALU_DC,
    output reg ALU_Zero
    );
    always@*
    begin
        case(ALUOp)
            3'b000: ALU_DC= ALU_DA+ ALU_DB;
            3'b001: ALU_DC= ALU_DA- ALU_DB;
            3'b010: ALU_DC= ALU_DA& ALU_DB;
            3'b100: ALU_DC= ALU_DA| ALU_DB;
            3'b101: ALU_DC= ALU_DA^ ALU_DB;
        endcase
        if(ALU_DC==0)
            ALU_Zero=1;
        else
            ALU_Zero=0;
    end
endmodule
