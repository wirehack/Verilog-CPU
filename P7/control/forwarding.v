`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:42 11/21/2015 
// Design Name: 
// Module Name:    forwarding 
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
module forwarding(
	input [4:0] rs_id_ex,
	input RegWrite_ex_mem,
	input RegWrite_mem_wb,
	input [4:0] WReg_ex_mem,
	input [4:0] WReg_mem_wb,
	input [4:0] rt_id_ex,
	input MemWrite_ex_mem,
	input jr,
	input jalr,
	input jalr_ex_mem,
	input jal_ex_mem,
	input Branch,
	input mfhi_lo_ex_mem,
	input mfc0_ex_mem,
	input mfc0_mem_wb,
	input CP0We_id_ex,
	input [4:0] rs_if_id,
	input [4:0] rt_if_id,
	output reg [2:0] forwardA,
	output reg [2:0] forwardB,
	output reg forwardC,
	output reg [2:0] forwardD,
	output reg [2:0] forwardE
    );
	always@*
	begin
		if(RegWrite_ex_mem && (jalr_ex_mem||jal_ex_mem) && WReg_ex_mem!=0 && WReg_ex_mem==rs_id_ex)//jalr or jal pc+8
			forwardA=3'b011;
		else if(RegWrite_ex_mem && mfhi_lo_ex_mem && WReg_ex_mem!=0 && WReg_ex_mem==rs_id_ex)
			forwardA=3'b100;
		else if(RegWrite_ex_mem && WReg_ex_mem!=0 && WReg_ex_mem==rs_id_ex) 
			forwardA=3'b010;
		else if(RegWrite_mem_wb && WReg_mem_wb!=0 && WReg_mem_wb==rs_id_ex)
			forwardA=3'b001;
		else
			forwardA=3'b000;
		if(RegWrite_ex_mem && (jalr_ex_mem||jal_ex_mem) && WReg_ex_mem!=0 && WReg_ex_mem==rt_id_ex)
			forwardB=3'b011;
		else if(RegWrite_ex_mem && mfhi_lo_ex_mem && WReg_ex_mem!=0 && WReg_ex_mem==rt_id_ex)
			forwardB=3'b100;
		else if(RegWrite_ex_mem && WReg_ex_mem!=0 && WReg_ex_mem==rt_id_ex)
			forwardB=3'b010;
		else if(RegWrite_mem_wb && WReg_mem_wb!=0 && WReg_mem_wb==rt_id_ex)
			forwardB=3'b001;
		else
			forwardB=3'b000;
		if(MemWrite_ex_mem && RegWrite_mem_wb && WReg_mem_wb!=0 && WReg_ex_mem==WReg_mem_wb)//lw.rt=sw.rt
			forwardC=1;
		else
			forwardC=0;
		//beq and jr forwarding
		if((Branch||jr||jalr)&&(jal_ex_mem==1||jalr_ex_mem==1)&&RegWrite_ex_mem&&WReg_ex_mem!=0 && WReg_ex_mem==rs_if_id)
			forwardD=3'b011;//pc+8
		else if((Branch||jr||jalr)&&RegWrite_ex_mem && mfhi_lo_ex_mem && WReg_ex_mem!=0 && WReg_ex_mem==rs_if_id)
			forwardD=3'b100;//mfhi mflo
		else if((Branch||jr||jalr)&&RegWrite_ex_mem&& WReg_ex_mem!=0 && WReg_ex_mem==rs_if_id)
			forwardD=3'b010;//alus
		else if((jr||Branch||jalr)&&RegWrite_mem_wb&& WReg_mem_wb!=0 && WReg_mem_wb==rs_if_id)
			forwardD=3'b001;//wregdata
		else
			forwardD=3'b000;
		if(Branch&&(jal_ex_mem==1||jalr_ex_mem==1)&&RegWrite_ex_mem&&WReg_ex_mem!=0 && WReg_ex_mem==rt_if_id)
			forwardE=3'b011;//pc+8
		else if(Branch&&RegWrite_ex_mem && mfhi_lo_ex_mem && WReg_ex_mem!=0 && WReg_ex_mem==rt_if_id)
			forwardE=3'b100;
		else if(Branch&&RegWrite_ex_mem&& WReg_ex_mem!=0 && WReg_ex_mem==rt_if_id)
			forwardE=3'b010;//alus
		else if(Branch&&RegWrite_mem_wb&& WReg_mem_wb!=0 &&WReg_mem_wb==rt_if_id)
			forwardE=3'b001;
		else
			forwardE=3'b000;
	end
endmodule
