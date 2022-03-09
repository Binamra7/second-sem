# BEGIN 0000
# ORG 0000
	   MVI A,02
	   MVI B,02
	   MVI C,00
	   SUB B
	   JM ZERO
	   INR C
	   HLT

ZERO:	   STA 2050
	   HLT
