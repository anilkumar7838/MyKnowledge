#include<stdio.h>

int length(char str[])
{
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int Function(char str1[],char str2[]){
    int i=0;
    while(str1[i]!='\0'){
        for(int j=0;j<length(str2);j++){
            if(str1[i]==str2[j]){
                return i+1;
            }
        }
        i++;
    }
    return -1;
}

int main(){
    char str1[30],str2[30];
    printf("Enter the string 1: ");
    gets(str1);
    printf("Enter the string 2: ");
    gets(str2);
    printf("%d",Function(str1,str2));
    return 0;
}