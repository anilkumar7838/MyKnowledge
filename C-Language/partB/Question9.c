#include<stdio.h>

int main(){
    FILE *ptr,*ptr2;
    char c;
    ptr=fopen("Sample.txt","r");
    ptr2=fopen("Sample2.txt","w");
    c=fgetc(ptr);
    while(c!=EOF){
        if(c!=' '){
            fputc(c,ptr2);
        }
        c=fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptr2);
}