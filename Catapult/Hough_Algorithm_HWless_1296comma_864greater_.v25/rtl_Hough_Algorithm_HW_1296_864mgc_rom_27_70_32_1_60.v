// ----------------------------------------------------------------------
//  HLS HDL:        Verilog Netlister
//  HLS Version:    10.5a/871028 Production Release
//  HLS Date:       Tue Apr 14 07:55:32 PDT 2020
// 
//  Generated by:   user2@edatools.ee.duth.gr
//  Generated date: Wed Jul  7 20:56:22 2021
// ----------------------------------------------------------------------

// 
module Hough_Algorithm_HW_1296_864mgc_rom_27_70_32_1_60 (addr, data_out
);
  input [6:0]addr ;
  output [31:0]data_out ;


  // Constants for ROM dimensions
  parameter n_width    = 32;
  parameter n_size     = 70;
  parameter n_numports = 1;
  parameter n_addr_w   = 7;
  parameter n_inreg    = 0;
  parameter n_outreg   = 0;

  // Declare storage for memory elements
  wire [31:0] mem [69:0];

  // Declare output registers
  reg [31:0] data_out_t;

  // Initialize ROM contents
  // pragma attribute mem rom_block TRUE
  assign mem[0] = 32'b10000000000000000000000000000000;
  assign mem[1] = 32'b01001011100100000001010001110110;
  assign mem[2] = 32'b00100111111011001110000101101101;
  assign mem[3] = 32'b00010100010001000100011101010000;
  assign mem[4] = 32'b00001010001011000011010100001100;
  assign mem[5] = 32'b00000101000101110101111110000101;
  assign mem[6] = 32'b00000010100010111101100001111001;
  assign mem[7] = 32'b00000001010001011111000101010100;
  assign mem[8] = 32'b00000000101000101111100101001101;
  assign mem[9] = 32'b00000000010100010111110010111010;
  assign mem[10] = 32'b00000000001010001011111001100000;
  assign mem[11] = 32'b00000000000101000101111100110000;
  assign mem[12] = 32'b00000000000010100010111110011000;
  assign mem[13] = 32'b00000000000001010001011111001100;
  assign mem[14] = 32'b00000000000000101000101111100110;
  assign mem[15] = 32'b00000000000000010100010111110011;
  assign mem[16] = 32'b00000000000000001010001011111001;
  assign mem[17] = 32'b00000000000000000101000101111100;
  assign mem[18] = 32'b00000000000000000010100010111110;
  assign mem[19] = 32'b00000000000000000001010001011111;
  assign mem[20] = 32'b00000000000000000000101000101111;
  assign mem[21] = 32'b00000000000000000000010100010111;
  assign mem[22] = 32'b00000000000000000000001010001011;
  assign mem[23] = 32'b00000000000000000000000101000101;
  assign mem[24] = 32'b00000000000000000000000010100010;
  assign mem[25] = 32'b00000000000000000000000001010001;
  assign mem[26] = 32'b00000000000000000000000000101000;
  assign mem[27] = 32'b00000000000000000000000000010100;
  assign mem[28] = 32'b00000000000000000000000000001010;
  assign mem[29] = 32'b00000000000000000000000000000101;
  assign mem[30] = 32'b00000000000000000000000000000010;
  assign mem[31] = 32'b00000000000000000000000000000001;
  assign mem[32] = 32'b00000000000000000000000000000000;
  assign mem[33] = 32'b00000000000000000000000000000000;
  assign mem[34] = 32'b00000000000000000000000000000000;
  assign mem[35] = 32'b00000000000000000000000000000000;
  assign mem[36] = 32'b00000000000000000000000000000000;
  assign mem[37] = 32'b00000000000000000000000000000000;
  assign mem[38] = 32'b00000000000000000000000000000000;
  assign mem[39] = 32'b00000000000000000000000000000000;
  assign mem[40] = 32'b00000000000000000000000000000000;
  assign mem[41] = 32'b00000000000000000000000000000000;
  assign mem[42] = 32'b00000000000000000000000000000000;
  assign mem[43] = 32'b00000000000000000000000000000000;
  assign mem[44] = 32'b00000000000000000000000000000000;
  assign mem[45] = 32'b00000000000000000000000000000000;
  assign mem[46] = 32'b00000000000000000000000000000000;
  assign mem[47] = 32'b00000000000000000000000000000000;
  assign mem[48] = 32'b00000000000000000000000000000000;
  assign mem[49] = 32'b00000000000000000000000000000000;
  assign mem[50] = 32'b00000000000000000000000000000000;
  assign mem[51] = 32'b00000000000000000000000000000000;
  assign mem[52] = 32'b00000000000000000000000000000000;
  assign mem[53] = 32'b00000000000000000000000000000000;
  assign mem[54] = 32'b00000000000000000000000000000000;
  assign mem[55] = 32'b00000000000000000000000000000000;
  assign mem[56] = 32'b00000000000000000000000000000000;
  assign mem[57] = 32'b00000000000000000000000000000000;
  assign mem[58] = 32'b00000000000000000000000000000000;
  assign mem[59] = 32'b00000000000000000000000000000000;
  assign mem[60] = 32'b00000000000000000000000000000000;
  assign mem[61] = 32'b00000000000000000000000000000000;
  assign mem[62] = 32'b00000000000000000000000000000000;
  assign mem[63] = 32'b00000000000000000000000000000000;
  assign mem[64] = 32'b00000000000000000000000000000000;
  assign mem[65] = 32'b00000000000000000000000000000000;
  assign mem[66] = 32'b00000000000000000000000000000000;
  assign mem[67] = 32'b00000000000000000000000000000000;
  assign mem[68] = 32'b00000000000000000000000000000000;
  assign mem[69] = 32'b00000000000000000000000000000000;


  // Combinational ROM read block
  always@(*)
  begin
    if ( addr >= 'd0 && addr < 'd70)
    begin
      data_out_t <= mem[ addr ];
    end
    else
    begin
      data_out_t <= mem[ {1'b0, addr[5:0]} ];
    end
  end

  // Output register assignment
  assign data_out = data_out_t;

endmodule


