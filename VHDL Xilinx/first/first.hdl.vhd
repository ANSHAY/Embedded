LIBRARY ieee;

ENTITY first IS
	PORT(a,b:IN BIT;
		  c:OUT BIT);
END first;
		 
ARCHITECTURE first OF first IS
BEGIN
	c<=a AND b;
END first;