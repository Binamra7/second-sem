;Write a program to swap the contents of register B and C.


MVI B,05H;
MVI C,08H;
MOV A,B;
MOV B,C;
MOV C,A;
HLT

