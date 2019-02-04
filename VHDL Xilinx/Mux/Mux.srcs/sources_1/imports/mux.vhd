LIBRARY ieee;
USE ieee.STD_LOGIC_1164.all;
----------------------------------------------
ENTITY mux IS
    PORT(
        inp : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
        oup : OUT STD_LOGIC;
        sel : IN INTEGER RANGE 0 TO 3);
END mux;
----------------------------------------------
ARCHITECTURE mux OF mux IS
BEGIN
     oup <=  inp(sel); 
END mux;
----------------------------------------------