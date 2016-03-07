`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:19:35 10/17/2015
// Design Name:   multiplexer
// Module Name:   D:/ISEProject/Multiplexer/multiplexer_tb.v
// Project Name:  Multiplexer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplexer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module multiplexer_tb;

	// Inputs
	reg D0;
	reg D1;
	reg D2;
	reg D3;
	reg A0;
	reg A1;

	// Outputs
	wire Y;
	wire NY;

	// Instantiate the Unit Under Test (UUT)
	multiplexer uut (
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.A0(A0), 
		.A1(A1), 
		.Y(Y), 
		.NY(NY)
	);

	initial begin
		// Initialize Inputs
		D0 = 0;
		D1 = 1;
		D2 = 0;
		D3 = 1;
		A0 = 0;
		A1 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
        fork
            A0=0;
            A1=0;
        join
        #100 fork
            A0=1;
            A1=0;
        join
        #100 fork
            A0=0;
            A1=1;
        join
        #100 fork
            A0=1;
            A1=1;
        join
        
	end
      
endmodule

