`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:59:32 10/25/2015 
// Design Name: 
// Module Name:    GPR 
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
module GPR(
    input Clk,
    input Reset,
    input [4:0] RS1,
    input [4:0] RS2,
    input [4:0] RD,
    input RegWrite,
    input [31:0] WData,
    output [31:0] RData1,
    output [31:0] RData2
    );
    reg[31:0] register[31:0];
    integer i;
    assign RData1=register[RS1];
    assign RData2=register[RS2];
    always@(posedge Clk or posedge Reset)
    begin
        if(Reset==1)
        begin
            for(i=0;i<=31;i=i+1)
                register[i]=0;
        end
        else if(RegWrite==1)
            register[RD]=WData;
    end
endmodule
