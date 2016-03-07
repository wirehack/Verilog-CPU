`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:17:21 12/24/2015
// Design Name:   multDiv
// Module Name:   D:/ISEProject/P8/datapath/multDiv_tb.v
// Project Name:  P8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multDiv
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module multDiv_tb;

	// Inputs
	reg Clk;
	reg Rst;
	reg [31:0] D1;
	reg [31:0] D2;
	reg HiLo;
	reg [1:0] Op;
	reg Start;
	reg We;

	// Outputs
	wire Busy;
	wire [31:0] HI;
	wire [31:0] LO;

	// Instantiate the Unit Under Test (UUT)
	multDiv uut (
		.Clk(Clk), 
		.Rst(Rst), 
		.D1(D1), 
		.D2(D2), 
		.HiLo(HiLo), 
		.Op(Op), 
		.Start(Start), 
		.We(We), 
		.Busy(Busy), 
		.HI(HI), 
		.LO(LO)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Rst = 1;
		D1 = 0;
		D2 = 0;
		HiLo = 0;
		Op = 0;
		Start = 0;
		We = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		Rst=0;
		Op=2'b11;
		D1=32'hffffff41;
		D2=32'h25;
		Start=1;
		#20
		Start=0;
	end
	always #10 Clk=~Clk;
      
endmodule

