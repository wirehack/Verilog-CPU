`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:49 10/17/2015 
// Design Name: 
// Module Name:    multiplexer 
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
module multiplexer(
    input D0,
    input D1,
    input D2,
    input D3,
    input A0,
    input A1,
    output Y,
    output NY
    );
    reg Y,NY;
    always@*
    begin
    case({A1,A0})
        2'b00: Y=D0;
        2'b01: Y=D1;
        2'b10: Y=D2;
        2'b11: Y=D3;
    endcase
    assign NY=~Y;
    end


endmodule
