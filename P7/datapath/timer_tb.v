`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:29:56 12/11/2015
// Design Name:   COCOTimer
// Module Name:   D:/ISEProject/P7/datapath/timer_tb.v
// Project Name:  P7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: COCOTimer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module timer_tb;

	// Inputs
	reg CLK_I;
	reg RST_I;
	reg [3:2] ADD_I;
	reg WE_I;
	reg [31:0] DAT_I;

	// Outputs
	wire [31:0] DAT_O;
	wire IRQ;

	// Instantiate the Unit Under Test (UUT)
	COCOTimer uut (
		.CLK_I(CLK_I), 
		.RST_I(RST_I), 
		.ADD_I(ADD_I), 
		.WE_I(WE_I), 
		.DAT_I(DAT_I), 
		.DAT_O(DAT_O), 
		.IRQ(IRQ)
	);

	initial begin
		// Initialize Inputs
		CLK_I = 0;
		RST_I = 0;
		ADD_I = 0;
		WE_I = 0;
		DAT_I = 0;

		// Wait 100 ns for global reset to finish
		#10;
		// Add stimulus here
        WE_I=1;
        ADD_I=2'b01;
        DAT_I=20;
        #10
        WE_I=0;
        #300
		WE_I=1;
		ADD_I=2'b00;
		DAT_I={28'b0,1'b1,2'b01,1'b1};
		#10
		WE_I=0;
	end
    always #5 CLK_I=~CLK_I;
endmodule

