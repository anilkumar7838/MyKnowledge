#include<stdio.h>

int main(){
    FILE *ptr;
    char str[50];
    char ch;

    printf("Please Enter the file name: ");
    scanf("%s",str);
    ptr=fopen(str,"w");
    printf("Enter the string: ");
    ch=fgetc(stdin);
    while(ch!='$'){
        fputc(ch,ptr);
        ch=fgetc(stdin);
    }
    fclose(ptr);
    return 0;
}