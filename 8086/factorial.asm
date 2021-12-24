DATA SEGMENT 
   A DW 5
   ANS DW ?    
ENDS DATA 
CODE SEGMENT
    ASSUME DS:DATA,CS:CODE
START:
        MOV AX,A
        MOV DS,AX
        MOV AX,5
        MOV BX,AX
   FACT:DEC BX
        MUL BX
        CMP BX,1
        JNZ FACT
        MOV ANS,AX
        HLT    
        
ENDS CODE
END START
