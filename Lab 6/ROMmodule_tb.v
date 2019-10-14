`timescale 1ns / 1ps
//Jianjian Song
//ECE433 Fall 2019
//Date: September 30, 2019

module ROMmodule_tb;

	// Inputs
	reg clka;
	reg [5:0] addra;

	// Outputs
	wire [6:0] douta;

	// Instantiate the Unit Under Test (UUT)
	ROM50x7bitsJJS uut (
		.clka(clka), 
		.addra(addra), 
		.douta(douta)
	);

		initial begin  clka = 0; addra = 0; end
	always #4 clka = ~clka; 
	
	initial fork
	#0 addra=0;	#15 addra=1;	#43 addra=2;	#63 addra=3;  #87 addra=4;	
	#98 addra=5;	#103 addra=6;	
	#120 $stop;
	join
      
endmodule

