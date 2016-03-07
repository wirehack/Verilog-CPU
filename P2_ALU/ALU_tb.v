`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:08:05 10/24/2015
// Design Name:   ALU
// Module Name:   D:/ISEProject/P2_ALU/ALU_tb.v
// Project Name:  P2_ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [31:0] ALU_DA;
	reg [31:0] ALU_DB;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] ALU_DC;
	wire ALU_Zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.ALU_DA(ALU_DA), 
		.ALU_DB(ALU_DB), 
		.ALUOp(ALUOp), 
		.ALU_DC(ALU_DC), 
		.ALU_Zero(ALU_Zero)
	);

	initial begin
		// Initialize Inputs
		ALU_DA = 0;
		ALU_DB = 0;
		ALUOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
        #50
        ALU_DA=32'b10010110101011001011001001010101;
        ALU_DB=32'b00110110100010111101110101101001;
        ALUOp=3'b000;//add
        #50
        ALU_DA=32'b10010110101011001011001001010101;
        ALU_DB=32'b00110110100010111101110101101001;
        ALUOp=3'b001;//subtract
        #50
        ALUOp=3'b010;
        ALU_DA=32'b10010110101011001011001001010101;
        ALU_DB=32'b00110110100010111101110101101001;//&
        #50
        ALU_DA=32'b10010110101011001011001001010101;
        ALU_DB=32'b00110110100010111101110101101001;
        ALUOp=3'b0100;//|
        #50
        ALU_DA=32'b10010110101011001011001001010101;
        ALU_DB=32'b00110110100010111101110101101001;
        ALUOp=3'b101;//^
	end
      
endmodule

