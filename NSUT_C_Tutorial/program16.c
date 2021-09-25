#include<stdio.h>
#include<stdlib.h>
// #include<string.h>

int main(){
    char *ch;
    int n;
    printf("Enter the size of string: ");
    scanf("%d",&n);
    int t=n,i=0;
    ch=(char*)malloc(sizeof(char)*(n));
    printf("Enter the string (not more than size): ");
    fflush(stdin);
    gets(ch);
    printf("reverse: ");
    for(int i=n-1;i>=0;i--){
        printf("%c",ch[i]);
    }
    return 0;
}