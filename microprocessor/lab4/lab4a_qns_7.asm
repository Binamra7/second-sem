	   MVI A,AB
	   MVI B,CD
	   MVI L,00
	   SUB B
	   JM COMP
	   HLT

COMP:	   CMA
	   INR A
	   MOV H,A
	   INR L
	   MOV E,H
	   MOV A,E
	   RRC
	   RRC
	   RRC
	   RRC
	   RRC
	   ADI FF
	   MOV E,A
	   ADC H
	   RAR
	   RAR
	   MOV E,A
	   HLT
