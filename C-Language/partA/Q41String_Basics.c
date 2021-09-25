#include<stdio.h>
#include<string.h>
// #include<stdlib.h>

int main(){
    // char str[]={'a','n','i','l','\0'};     // you can use any initialisation

    // or

    // char str[]="Anil Bhai";
    // char*ptr=str;

    // or               these two are same

    // char *ptr="Anil Bhai";

    // printing
    // while(*ptr!='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    // }

    /* printing using %s */

    // char *c="Harry";
    // printf("String is: %s",c);
    
    // now input 
    // char s[34];
    // printf("enter your name : ");
    // scanf("%s",s);                      // not for space
    // printf("Your name is : %s",s);

    // now for space we use gets() and puts()
    // char s[34];
    // printf("enter your name : ");
    // gets(s);
    // puts(s);                             //prints the string places the cursor on the next line
    // printf("Your name is : %s",s);

    // for re-initialisation
    // char str[]="Anil Bhai";      //not possible
    // char* str="Anil Bhai";          
    // str="Ajay bhai";
    // puts(str);

    char str[]="Hey, how are you doing?";
    char* pch;
    pch=strtok(str," ");
    while(pch!=NULL){
        printf("%s\n",pch);
        pch=strtok(NULL," ");   // important
    }
    return 0;
}