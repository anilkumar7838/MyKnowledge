-- Code your design here
library IEEE
use IEEE.std._logic_1164.all;

entity or_gate is
port(
  a: in std_logic;
  b: in std_logic;
  q: out_std_logic);
end or_gate;

architecture rtl of or_gate is
begin
  process(a,b) is 
  begin
    q<=a or b;
  end process;
end rtl;

// testbench
-- Code your testbench here
library IEEE;
use IEEE.std_logic_1164.all;

entity testbench is
--empty
end testbench;

architecture tb of testbench
is

--DUT component
component or_gate is
port(
  a: in std_logic;
  b: in std_logic;
  q: out std_logic);
end component;

signal a_in,b_in,q_out:
std_logic;
begin
  
  --connect DUT 
  DUT: or_gate port 
  map(a_in, b_in,q_out);
    
      process
      begin
        a_in <='0';
        b_in <='0';
        wait for 1 ns;
        assert(q_out='0') report
        "Fail 0/0" severity error;
        
        a_in <='0';
        b_in <='1';
        wait for 1 ns;
        assert(q_out='1') report
        "Fail 0/1" severity error;
        
        a_in <='1';
        b_in <='0';
        wait for 1 ns;
        assert(q_out='1') report
        "Fail 1/0" severity error;
      
      	a_in <='1';
        b_in <='1';
        wait for 1
          ns;
        assert(q_out='1') report
        "Fail 1/1" severity error;
        
        --clear inputs 
        a_in <='0';
        b_in <='0';
        
        assert false report 
     "Test done." severity note;
        wait;
      end process;
     end tb;
