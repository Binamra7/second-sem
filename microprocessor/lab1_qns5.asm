;Write a program to swap the contents of register B and C.


MVI B,05H; load immediately to register B
MVI C,08H; load immediately to register C
MOV A,B; store the value of B to A
MOV B,C; copy the value of C to B
MOV C,A; copy the value of A to C
HLT; stop the program

