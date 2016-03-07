`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:03 11/20/2015 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
	input clk,
	input rst,
	input IntBeq,
	input [2:0] MemtoReg_in,
	input RegWrite_in,
	input [31:0] dmOut_in,
	input [31:0] ALUS_in,
	input [4:0] WReg_in,
	input [31:0] pc8_in,
	input [2:0] load_ext_op_in,
	input [31:0] HILO_in,
	input [31:0] CP0Out_in,
	input j_branch_type_in,
	output reg j_branch_type_out,
	output reg [31:0] CP0Out_out,
	output reg [31:0] HILO_out,
	output reg [2:0] load_ext_op_out,
	output reg [2:0] MemtoReg_out,
	output reg RegWrite_out,
	output reg [31:0] dmOut_out,
	output reg [31:0] ALUS_out,
	output reg [4:0] WReg_out,
	output reg [31:0] pc8_out
    );
    initial
    begin
	MemtoReg_out=0;
	RegWrite_out=0;
	ALUS_out=0;
	dmOut_out=0;
	WReg_out=0;
	pc8_out=0;
	load_ext_op_out=0;
	HILO_out=0;
	CP0Out_out=0;
	j_branch_type_out=0;
	end
    	
    always@(posedge clk /*or posedge rst*/)
    begin
    if(rst)
    begin
	MemtoReg_out=0;
	RegWrite_out=0;
	ALUS_out=0;
	dmOut_out=0;
	WReg_out=0;
	pc8_out=0;
	load_ext_op_out=0;
	HILO_out=0;
	CP0Out_out=0;
	j_branch_type_out=0;
	end
	else if(IntBeq)
	begin
	MemtoReg_out=0;
	RegWrite_out=0;
	ALUS_out=0;
	dmOut_out=0;
	WReg_out=0;
	pc8_out=pc8_in;
	load_ext_op_out=0;
	HILO_out=0;
	CP0Out_out=0;
	j_branch_type_out=0;
	end
	else
	begin
	MemtoReg_out=MemtoReg_in;
	RegWrite_out=RegWrite_in;
	ALUS_out=ALUS_in;
	dmOut_out=dmOut_in;//careful
	WReg_out=WReg_in;
	pc8_out=pc8_in;
	load_ext_op_out=load_ext_op_in;
	HILO_out=HILO_in;
	CP0Out_out=CP0Out_in;
	j_branch_type_out=j_branch_type_in;
	end
end
endmodule
