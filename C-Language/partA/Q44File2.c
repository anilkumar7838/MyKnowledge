#include<stdio.h>

int main(){
    FILE *ptr,*ptr2;
    char c;
    ptr=fopen("Sample1.txt","w");
    fputs("This file is made by anil",ptr);//Use fputs for string
    fclose(ptr);
    ptr2=fopen("Sample1.txt","r");
    c=fgetc(ptr2);
    while(c!=EOF){
        printf("%c",c);
        c=fgetc(ptr2);
    }
}