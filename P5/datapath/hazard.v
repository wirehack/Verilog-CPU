`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:46:00 11/22/2015 
// Design Name: 
// Module Name:    hazard 
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
module hazard(
	input [4:0] rt_id_ex,
	input [4:0] rs_id_ex,
	input [4:0] rs_if_id,
	input [4:0] rt_if_id,
	input [4:0] WReg_ex_mem,
	input [4:0] WReg,
	input MemWrite,
	input load_id_ex,
	input load_ex_mem,
	input Branch,
	input jr,
	input jalr,
	input RegWrite_id_ex,
	input Busy,
	input MultDiv,
	input Start,
	output reg en
    );
    always@*
    begin
	if(load_id_ex && rt_id_ex!=0 && (rt_id_ex==rs_if_id || (rt_id_ex==rt_if_id&& MemWrite==0)))// load + R or I type instruction or load + beq
		en=0;
	else if((Branch||jr||jalr)&& load_ex_mem && WReg_ex_mem!=0 && (WReg_ex_mem==rs_if_id || WReg_ex_mem==rt_if_id))// load+beq or jr stage 2
		en=0;
	else if((Branch||jr||jalr)&& RegWrite_id_ex &&WReg!=0 && (WReg==rs_if_id || WReg==rt_if_id))//R or I type instruction + beq or jr
		en=0;
	else if((Busy||Start)&&MultDiv)
		en=0;	
	else
		en=1;
	end

endmodule
