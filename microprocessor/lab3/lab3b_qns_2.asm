	   MVI A,EF
	   MVI B,00
	   ANA B
	   JZ LOOP1
	   CMA
	   MOV D,A
	   HLT

LOOP1:	   JM LOOP2
	   MVI B,08
	   ADD B
	   MOV D,A
	   HLT

LOOP2:	   CMA
	   MOV D,A
	   HLT
