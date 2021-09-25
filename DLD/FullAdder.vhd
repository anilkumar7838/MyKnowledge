To develop a VHDL code for a full adder. (Using Structural modeling 
-- Simple Full_Adder design
library IEEE;
use IEEE.std_logic_1164.all;

entity andgate is
port(
	a_and: in Bit;
    b_and: in Bit;
    c_and: out Bit);
end andgate;

architecture str of andgate is
begin
	process(a_and, b_and) is
    begin
    	c_and <= a_and and b_and;
    end process;
end str;

entity xorgate is
port(
	a_xor: in Bit;
    b_xor: in Bit;
    c_xor: out Bit);
end xorgate;

architecture xor_arc of xorgate is
begin
	process(a_xor, b_xor) is
    begin
    	c_xor <= a_xor xor b_xor;
    end process;
end xor_arc;

entity half_adder is
port(
	a_ha: in Bit;
    b_ha: in Bit;
    y_ha: out Bit;
    z_ha: out Bit);
end half_adder;

architecture ha_str of half_adder is
component xorgate is
port(
	a_xor: in Bit;
    b_xor: in Bit;
    c_xor: out Bit);
end component;
component andgate is
port(
	a_and: in Bit;
    b_and: in Bit;
    c_and: out Bit);
end component;
begin
  XOR1: xorgate port map(a_ha, b_ha, z_ha);
  AND1: andgate port map(a_ha, b_ha, y_ha);
end ha_str;

entity full_adder is
port(
  a: in Bit;
  b: in Bit;
  c: in Bit;
  sum: out Bit;
  carry: out Bit);
end full_adder;

architecture rtl of full_adder is
signal sum1, carry1, carry2: Bit;
component half_adder is
port(
	a_ha: in Bit;
    b_ha: in Bit;
    y_ha: out Bit;
    z_ha: out Bit);
end component;
begin
  HA1: half_adder port map(a, b, carry1, sum1);
  HA2: half_adder port map(sum1, c, carry2, sum);
  process(carry1, carry2) is
  begin
    carry <= carry1 or carry2;
  end process;
end rtl;

-- Testbench for OR gate
library IEEE;
use IEEE.std_logic_1164.all;
 
entity testbench is
-- empty
end testbench; 

architecture tb of testbench is

-- DUT component
component full_adder is
port(
  a: in Bit;
  b: in Bit;
  c: in Bit;
  sum: out Bit;
  carry: out Bit);
end component;

signal a_in, b_in, c_in, sum_out, carry_out: Bit;

begin

  -- Connect DUT
  DUT: full_adder port map(a_in, b_in, c_in, sum_out, carry_out);

  process
  begin
    a_in <= '0';
    b_in <= '0';
    c_in <= '0';
    wait for 1 ns;
    assert(sum_out='0' and carry_out='0') report "Fail 0 0 0/0 0" severity error;
  
    a_in <= '0';
    b_in <= '0';
    c_in <= '1';
    wait for 1 ns;
    assert(sum_out='1' and carry_out='0') report "Fail 0 0 1/1 0" severity error;
    
    a_in <= '0';
    b_in <= '1';
    c_in <= '0';
    wait for 1 ns;
    assert(sum_out='1' and carry_out='0') report "Fail 0 1 0/1 0" severity error;

    a_in <= '0';
    b_in <= '1';
    c_in <= '1';
    wait for 1 ns;
    assert(sum_out='0' and carry_out='1') report "Fail 0 1 1/0 1" severity error;
    
    a_in <= '1';
    b_in <= '0';
    c_in <= '0';
    wait for 1 ns;
    assert(sum_out='1' and carry_out='0') report "Fail 1 0 0/1 0" severity error;
    
    a_in <= '1';
    b_in <= '0';
    c_in <= '1';
    wait for 1 ns;
    assert(sum_out='0' and carry_out='1') report "Fail 1 0 1/0 1" severity error;
    
    a_in <= '1';
    b_in <= '1';
    c_in <= '0';
    wait for 1 ns;
    assert(sum_out='0' and carry_out='1') report "Fail 1 1 0/0 1" severity error;

    a_in <= '1';
    b_in <= '1';
    c_in <= '1';
    wait for 1 ns;
    assert(sum_out='1' and carry_out='1') report "Fail 1 1 1/1 1" severity error;
    
    -- Clear inputs
    a_in <= '0';
    b_in <= '0';
    c_in <= '0';

    assert false report "Test done." severity note;
    wait;
  end process;
end tb;
