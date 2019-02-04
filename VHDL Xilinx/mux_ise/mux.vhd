----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:58:48 06/19/2014 
-- Design Name: 
-- Module Name:    mux - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mux is
    Port ( inp : in  STD_LOGIC_VECTOR (3 downto 0);
           sel : in  INTEGER RANGE 0 to 3;
           oup : out  STD_LOGIC);
end mux;

architecture Behavioral of mux is

begin
		with sel select
		oup <= inp(0) when 0,
				 inp(1) when 1,
				 inp(2) when 2,
				 inp(3) when 3;

end Behavioral;

