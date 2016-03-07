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
    input Rst,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input We,
    input [31:0] WD,
    output [31:0] RD1,
    output [31:0] RD2
    );
    reg[31:0] register[31:0];
    integer i;
    assign RD1=(A3==A1&&A3!=0&&We)? WD : register[A1];
    assign RD2=(A3==A2&&A3!=0&&We)? WD : register[A2];
    initial
     begin
            for(i=0;i<=31;i=i+1)
                register[i]=0;
      end
    always@(posedge Clk or posedge Rst)
    begin
        if(Rst==1)
        begin
            for(i=0;i<=31;i=i+1)
                register[i]=0;
        end
        else if(We==1&&A3!=0)
            register[A3]=WD;
    end
endmodule
