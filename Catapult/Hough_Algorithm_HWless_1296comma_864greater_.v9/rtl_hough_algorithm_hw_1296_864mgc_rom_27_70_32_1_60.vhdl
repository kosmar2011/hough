-- ----------------------------------------------------------------------
--  HLS HDL:        VHDL Netlister
--  HLS Version:    10.5a/871028 Production Release
--  HLS Date:       Tue Apr 14 07:55:32 PDT 2020
-- 
--  Generated by:   user2@edatools.ee.duth.gr
--  Generated date: Wed Jul  7 20:22:51 2021
-- ----------------------------------------------------------------------

-- 
LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
LIBRARY mgc_hls;

PACKAGE hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60_pkg IS 
  COMPONENT hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60
    PORT (
      addr : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
      data_out : OUT STD_LOGIC_VECTOR(31 DOWNTO 0)
    );
  END COMPONENT;
END hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60_pkg;

PACKAGE BODY hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60_pkg IS
END hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60_pkg;

LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
LIBRARY mgc_hls;

USE mgc_hls.hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60_pkg.all;
LIBRARY std;
USE std.textio.all;
USE ieee.std_logic_textio.all;

ENTITY hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60 IS
    PORT (
      addr : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
      data_out : OUT STD_LOGIC_VECTOR(31 DOWNTO 0)
    );
END hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60;

ARCHITECTURE v9 OF hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60 IS
  -- Start of SIF_NL_VHDL::nhl_rom_body
  -- Constants for ROM dimensions
  CONSTANT n_width    : INTEGER := 32;
  CONSTANT n_size     : INTEGER := 70;
  CONSTANT n_addr_w   : INTEGER := 7;
  CONSTANT n_inreg    : INTEGER := 0;
  CONSTANT n_outreg   : INTEGER := 0;
  -- Define data types for ROM storage;
  SUBTYPE  word  IS std_logic_vector((n_width)-1 DOWNTO 0);
  TYPE     table IS ARRAY (0 to n_size-1) of word;

  SIGNAL mem : table := table'(
    word'("10000000000000000000000000000000"),
    word'("01001011100100000001010001110110"),
    word'("00100111111011001110000101101101"),
    word'("00010100010001000100011101010000"),
    word'("00001010001011000011010100001100"),
    word'("00000101000101110101111110000101"),
    word'("00000010100010111101100001111001"),
    word'("00000001010001011111000101010100"),
    word'("00000000101000101111100101001101"),
    word'("00000000010100010111110010111010"),
    word'("00000000001010001011111001100000"),
    word'("00000000000101000101111100110000"),
    word'("00000000000010100010111110011000"),
    word'("00000000000001010001011111001100"),
    word'("00000000000000101000101111100110"),
    word'("00000000000000010100010111110011"),
    word'("00000000000000001010001011111001"),
    word'("00000000000000000101000101111100"),
    word'("00000000000000000010100010111110"),
    word'("00000000000000000001010001011111"),
    word'("00000000000000000000101000101111"),
    word'("00000000000000000000010100010111"),
    word'("00000000000000000000001010001011"),
    word'("00000000000000000000000101000101"),
    word'("00000000000000000000000010100010"),
    word'("00000000000000000000000001010001"),
    word'("00000000000000000000000000101000"),
    word'("00000000000000000000000000010100"),
    word'("00000000000000000000000000001010"),
    word'("00000000000000000000000000000101"),
    word'("00000000000000000000000000000010"),
    word'("00000000000000000000000000000001"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000"),
    word'("00000000000000000000000000000000")
  );
BEGIN

  -- Reading ROM
  PROCESS(addr)
    VARIABLE idx_addr : INTEGER;
  BEGIN
    idx_addr := conv_integer(unsigned(addr(6 DOWNTO 0)));
    IF idx_addr >= 0 AND idx_addr < 70 THEN
      data_out <= mem(idx_addr);
    ELSE
      idx_addr := conv_integer(unsigned(addr(n_addr_w-2 DOWNTO 0)));
      data_out <= mem(idx_addr);
    END IF;
  END PROCESS;

END v9;


