#include<stdio.h>

int main(){
    FILE *ptr1,*ptr2;
    char ch[30][50];
    // char temp;
    int j=0;
    ptr1=fopen("input1.txt","r");
    ptr2=fopen("output.txt","w");
    for(int i=0;ch[i][j]!='\0';i++){
        ch[i][j]=fgetc(ptr1);
        while(ch[i][j]!='\n'){
            printf("%c",ch[i][j]);
            ch[i][j]=fgetc(ptr1);
        }
        printf("\n");
        j++;
    }
    return 0;

}