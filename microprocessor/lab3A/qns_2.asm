# BEGIN 0000
# ORG 0000
	   MVI C,00
	   LHLD 2020
	   MOV D,H
	   MOV E,L
	   LHLD 2030
	   DAD D
	   JC LOOP
	   STA 2050
	   HLT

LOOP:	   INR C
	   MOV D,A
	   STA 2050
	   MOV A,C
	   MOV B,A
	   HLT
