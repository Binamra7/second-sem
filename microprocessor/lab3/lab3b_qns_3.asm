	   MVI A,AB
	   ORI 7F
	   JPE ODD
	   JM MINUS
	   MOV D,A
	   MVI E,5F
	   MOV A,E
	   CMA
	   MOV E,A
	   MOV A,D
	   SUB E
	   MOV E,A
	   HLT

MINUS:	   CMA
	   INR A
	   STA 1050
	   HLT

ODD:	   JNC NOCARRY
	   CMA
	   MOV B,A
	   HLT

NOCARRY:	   CMA
	   MVI B,45
	   ADC B
	   STA 30FA
	   HLT
