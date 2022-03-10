	   MVI A,A9
	   MVI B,D7
	   SUB B
	   JNC STOP
	   RAL
	   RAL
	   RAL
	   RAL
	   RAL
	   SBI A9

STOP:	   HLT
