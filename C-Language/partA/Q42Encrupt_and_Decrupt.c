#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void encrupt(char* c){
    while(*c!='\0'){
        *c+=1;
        printf("%c",*c);
        c++;
    }
}
void decrupt(char* c){
    while(*c!='\0'){
        *c-=1;
        printf("%c",*c);
        c++;
    }
}
int main(){
    char str[] = "Hello Guys Welcome to my home.";
    printf("Encrupted string is : ");
    encrupt(str);
    printf("\n");
    char ptr[]="Ifmmp!Hvzt!Xfmdpnf!up!nz!ipnf";
    printf("Decrupted string is : ");
    decrupt(ptr);
}