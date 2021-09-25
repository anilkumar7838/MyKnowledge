// Anilkumar (2020UCD2101)
#include<stdio.h>
int length(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    char ch[20][50];
    int i=0,j=0;
    printf("Enter the string: ");
   
    for(j=0;j<20;j++){
        gets(ch[j]);
        if(length(ch[j])==0){
            printf("Break\n");
            break;
        }
    }
    
    //For print 
    printf("Answer: ");
    for(i=0;i<j;i++){
        int x=length(ch[i]);
        for(int k=0;k<x;k++){
            printf("%c",ch[i][k]);
        }
        printf("\n");
    }
    
    return 0;
}