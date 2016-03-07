`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:25:00 12/06/2015 
// Design Name: 
// Module Name:    C0 
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
module CP0(
	input clk,
	input rst,
	input [4:0] A1,
	input [4:0] A2,
	input [31:0] DIn,
	input [31:2] PC,
	//input [6:2] ExcCode,
	input [5:0] HWInt,
	input We,
	//input EXLSet,
	input EXLClr,
	output IntBeq,
	output [31:2] EPCOut,
	output [31:0] DOut
    );
    //SR reg
    reg [15:10] im;
    reg exl,ie;
    //cause reg
    reg [15:10] hwint_pend;
    //EPC reg
    reg [31:2] EPC;
    //PRId reg
    reg [31:0] PRId;
    assign DOut=(A1==12) ? {16'b0,im,8'b0,exl,ie} :
    			(A1==13) ? {16'b0,hwint_pend,10'b0} :
    			(A1==14) ? {EPC,2'b0} :
    			(A1==15) ? PRId :
    			32'b0;
    assign IntBeq=(|(HWInt[5:0] & im[15:10])) & ie & !exl;
    assign EPCOut= (We&&A2==5'b01110) ? DIn[31:2] : EPC;
    always@(posedge clk or posedge rst)
    begin
    	if(rst)//?
    	begin
    		im=6'b0;//im=6'b111111;
    		exl=0;
    		ie=0;//ie=1;
    		hwint_pend=0;
    		PRId=0;
    		EPC=0;
    	end
    	if(We)
    	begin
    		case(A2)
    			5'b01100:	{im,exl,ie}={DIn[15:10],DIn[1],DIn[0]};
    			//5'b01101:	hwint_pend=DIn[15:10];
    			5'b01110:	EPC=DIn[31:2];
    			//5'b01111:	PRId=DIn[31:0];
    		endcase
		end
		if(IntBeq)
		begin
			if({PC,2'b00}<32'h0000_4180)
				EPC=PC;
			exl=1;
			hwint_pend=HWInt;
		end
		else if(EXLClr)
			exl=0;
	end

endmodule
