/*
    This Program is to Print the Pattern of type:
    * * * * *
    * * * *
    * * *
    * *
    * 
*/
#include<stdio.h>
 
int main(){
    int n;
    printf("Enter the Number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=(n-1);j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}