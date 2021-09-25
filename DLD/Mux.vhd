-- Code your design here
library IEEE;
use IEEE.std_logic_1164.all;


-- and gate
entity andgate is
port(
	a_and :in Bit;
	b_and :in Bit;
	c_and : out Bit);
end andgate;

architecture atr of andgate is
begin
	process(a_and,b_and) is
    begin
    	c_and<=a_and and b_and;
    end process;
end atr;


-- orgate
entity orgate is
port(
	a_or :in Bit;
	b_or :in Bit;
	c_or : out Bit);
end orgate;

architecture otr of orgate is
begin
	process(a_or,b_or) is
    begin
    	c_or <= a_or or b_or;
    end process;
end otr;    



-- not gate
entity notgate is
port(
	a_not :in Bit;
	b_not :out Bit);
end notgate;

architecture ntr of notgate is
begin
	process(a_not) is
    begin
    	b_not<=(not a_not) ;
    end process;
end ntr;



-- 2*1 MUX
entity Mux_2x1 is
port(
	a_mux1 :in Bit;
	b_mux1 :in Bit;
    s_mux1 :in Bit;
	x_mux1 : out Bit);
end Mux_2x1;

architecture Mutr of Mux_2x1 is
signal sum1,sum2,t_not: Bit;
component notgate is
port(
	a_not :in Bit;
	b_not :out Bit);
end component;

component andgate is
port(
	a_and :in Bit;
	b_and :in Bit;
	c_and : out Bit);
end component;
component orgate is
port(
	a_or :in Bit;
	b_or :in Bit;
	c_or : out Bit);
end component;

begin
	and1: andgate port map(a_mux1,s_mux1,sum1);
    not1: notgate port map(s_mux1,t_not);
    and2: andgate port map(t_not,b_mux1,sum2);
    or1: orgate port map(sum1,sum2,x_mux1);
end Mutr;

-- 16*1 Mux
entity Mux_16x1 is
port(
	I: in Bit_vector;
	s: in Bit_vector;
	out1 : out Bit);
end Mux_16x1;

architecture mtr of Mux_16x1 is
signal opt1: Bit_vector(0 to 7);
signal opt2: Bit_vector(0 to 3);
signal opt3: Bit_vector(0 to 1);
component Mux_2x1 is
port(
	a_mux1 :in Bit;
	b_mux1 :in Bit;
    s_mux1 :in Bit;
	x_mux1 : out Bit);
end component;
begin
	mux1: Mux_2x1 port map(I(0),I(1),s(0),opt1(0));
    mux2: Mux_2x1 port map(I(2),I(3),s(0),opt1(1));
    mux3: Mux_2x1 port map(I(4),I(5),s(0),opt1(2));
    mux4: Mux_2x1 port map(I(6),I(7),s(0),opt1(3));
    mux5: Mux_2x1 port map(I(8),I(9),s(0),opt1(4));
    mux6: Mux_2x1 port map(I(10),I(11),s(0),opt1(5));
    mux7: Mux_2x1 port map(I(12),I(13),s(0),opt1(6));
    mux8: Mux_2x1 port map(I(14),I(15),s(0),opt1(7));
    
    mux9: Mux_2x1 port map(opt1(0),opt1(1),s(1),opt2(0));
    mux10: Mux_2x1 port map(opt1(2),opt1(3),s(1),opt2(1));
    mux11: Mux_2x1 port map(opt1(4),opt1(5),s(1),opt2(2));
    mux12: Mux_2x1 port map(opt1(6),opt1(7),s(1),opt2(3));
    
    mux13: Mux_2x1 port map(opt2(0),opt2(1),s(2),opt3(0));
    mux14: Mux_2x1 port map(opt2(2),opt2(3),s(2),opt3(1));
    
    mux15: Mux_2x1 port map(opt3(0),opt3(1),s(3),out1);
end mtr;

-- Code your testbench here
library IEEE;
use IEEE.std_logic_1164.all;
 
entity testbench is
-- empty
end testbench;

architecture tb of testbench is
component Mux_16x1 is
port(
	I: in Bit_vector;
	s: in Bit_vector;
	out1 : out Bit);
end component;

signal I1: Bit_vector(0 to 15);
signal s1: Bit_vector(0 to 3);
signal opt: Bit;

begin 
DUT: Mux_16x1 port map(I1,s1,opt);

process
	begin
    I1 <= b"0000000000000000";
    s1 <= b"0000";
    wait for 1 ns;
    assert(opt='0') report "Fail 0" severity error;
    
    I1 <= b"0000000000000001";
    s1 <= b"0000";
    wait for 1 ns;
    assert(opt='1') report "Fail 0" severity error;
    
    I1 <= b"0000000000000010";
    s1 <= b"1000";
    wait for 1 ns;
    assert(opt='1') report "Fail 0" severity error;
    
    I1 <= b"0000000000000100";
    s1 <= b"0100";
    wait for 1 ns;
    assert(opt='1') report "Fail 0" severity error;
    
    I1 <= b"0000000000001000";
    s1 <= b"1100";
    wait for 1 ns;
    assert(opt='1') report "Fail 0" severity error;
    
    I1 <= b"0000000000010000";
    s1 <= b"0010";
    wait for 1 ns;
    assert(opt='1') report "Fail 0" severity error;
    
    --clear inputs
    I1 <= b"0000000000000000";
    s1 <= b"0000";
    
    assert false report "Test done." severity note;
    wait;
    end process;
end tb;