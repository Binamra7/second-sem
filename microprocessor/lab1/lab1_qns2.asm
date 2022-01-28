;Wirte a program to copy the contents of register D into memory location 9000H.

MVI D,07H; load register D with the data 007H
MOV A,D; copy the content of D to A
STA 9000H;store the content of A to 9000H
HLT