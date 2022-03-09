	   MVI A,47
	   MVI B,2F
	   ADD B
	   JC NEXT
	   STA 2050
	   OUT 2A
	   HLT

NEXT:	   CMA
	   ANI F0
	   MOV C,A
	   JPE HONK
	   HLT

HONK:	   STA 2050
	   OUT 2A
	   HLT
