DATA SEGMENT 
   A DW 0019H
   ANS DW ?    
ENDS DATA 
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
        MOV AX,A
        MOV DS,AX
        MOV AX,19h
        MOV CX,0000h
        MOV BX,0FFFFH
     L1:ADD BX,02
        INC CX
        SUB AX,BX
        JNZ L1
        MOV ANS,CX
        HLT    
        
ENDS CODE
END START
