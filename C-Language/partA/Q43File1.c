#include<stdio.h>

int main(){
    FILE *ptr,*ptr2;
    char c;
    ptr=fopen("Sample.txt","w");
    fprintf(ptr,"This file is made by anil");//EOF IS NOT WORKING
    fclose(ptr);
    ptr2=fopen("Sample.txt","r");
    while(fscanf(ptr2,"%c",&c)!=EOF){
        printf("%c",c);
    }
}