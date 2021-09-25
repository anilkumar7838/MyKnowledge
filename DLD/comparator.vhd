-- Code your design here
library IEEE;
use IEEE.std_logic_1164.all;

entity comparator2Bit is
port(
	a: in Bit_vector;
    b: in Bit_vector;
    x: out Bit;
    y: out Bit;
    z: out Bit);
end comparator2Bit;

architecture str of comparator2Bit is
begin
	process(a, b) is
    begin
    	x<=((a(1) xnor b(1)) and (a(0) xnor b(0)));
        
        y<=((a(1) and (not b(1)))) or ((a(1) xnor b(1)) and (a(0) and (not b(0))));
        
        z<=((not a(1)) and b(1)) or ((a(1) xnor b(1)) and ((not a(0)) and b(0)));
        
    end process;
end str;

-- Code your testbench here

library IEEE;
use IEEE.std_logic_1164.all;
 
entity testbench is
-- empty
end testbench; 

architecture tb of testbench is

-- DUT component
component comparator2Bit is
port(
 	a: in Bit_vector;
    b: in Bit_vector;
    x: out Bit;
    y: out Bit;
    z: out Bit);
end component;

signal a_in,b_in : Bit_vector(0 to 1);
signal x_out ,y_out ,z_out : Bit;

begin

  -- Connect DUT
  DUT: comparator2Bit port map(a_in, b_in, x_out, y_out, z_out);

  process
  begin
    a_in <= b"00";
    b_in <= b"00";
    wait for 1 ns;
    assert(x_out = '1' and y_out = '0' and z_out = '0') report "Fail 0 0 0/0 0" severity error;
    a_in <= b"00";
    b_in <= b"01";
    wait for 1 ns;
    assert(x_out = '0' and y_out = '0' and z_out = '1') report "Fail 0 0 0/0 0" severity error;
    a_in <= b"00";
    b_in <= b"10";
    wait for 1 ns;
    assert(x_out = '0' and y_out = '0' and z_out = '1') report "Fail 0 0 0/0 0" severity error;
    a_in <= b"00";
    b_in <= b"11";
    wait for 1 ns;
    assert(x_out = '0' and y_out = '0' and z_out = '1') report "Fail 0 0 0/0 0" severity error;
    a_in <= b"01";
    b_in <= b"00";
    wait for 1 ns;
    assert(x_out = '0' and y_out = '1' and z_out = '0') report "Fail 0 0 0/0 0" severity error;
    a_in <= b"01";
    b_in <= b"01";
    wait for 1 ns;
    assert(x_out = '1' and y_out = '0' and z_out = '0') report "Fail 0 0 0/0 0" severity error;
    a_in <= b"01";
    b_in <= b"10";
    wait for 1 ns;
    assert(x_out = '0' and y_out = '0' and z_out = '1') report "Fail 0 0 0/0 0" severity error;
    a_in <= b"01";
    b_in <= b"11";
    wait for 1 ns;
    assert(x_out = '0' and y_out = '0' and z_out = '1') report "Fail 0 0 0/0 0" severity error;
    a_in <= b"10";
    b_in <= b"00";
    wait for 1 ns;
    assert(x_out = '0' and y_out = '1' and z_out = '0') report "Fail 0 0 0/0 0" severity error;
    a_in <= b"10";
    b_in <= b"01";
    wait for 1 ns;
    assert(x_out = '0' and y_out = '1' and z_out = '0')
report "Fail 0 0 0/0 0" severity error;
    a_in<=b"10";
    b_in<=b"10";
    wait for 1ns;
    assert(x_out='1' and y_out ='0' and z_out='0')    report "Fail 0 0 0/0 0" severity error;
    a_in<=b"10";
    b_in<=b"11";
    wait for 1ns;
    assert(x_out='0' and y_out ='0' and z_out='1')    report "Fail 0 0 0/0 0" severity error;
    a_in<=b"11";
    b_in<=b"00";
    wait for 1ns;
    assert(x_out='0' and y_out ='1' and z_out='0')    report "Fail 0 0 0/0 0" severity error;
    a_in<=b"11";
    b_in<=b"01";
    wait for 1ns;
    assert(x_out='0' and y_out ='1' and z_out='0')    report "Fail 0 0 0/0 0" severity error;
    a_in<=b"11";
    b_in<=b"10";
    wait for 1ns;
    assert(x_out='0' and y_out ='1' and z_out='0')    report "Fail 0 0 0/0 0" severity error;
    a_in<=b"11";
    b_in<=b"11";
    wait for 1ns;
    assert(x_out='1' and y_out ='0' and z_out='0')    report "Fail 0 0 0/0 0" severity error;
    
    -- Clear inputs
    a_in <= b"00";
    b_in <= b"00";

    assert false report "Test done." severity note;
    wait;
  end process;
end tb;