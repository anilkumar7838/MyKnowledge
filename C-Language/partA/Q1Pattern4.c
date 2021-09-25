/*
    This Program is to Print the Pattern of type:
            *
          * *
        * * *
      * * * *
    * * * * *
*/
#include<stdio.h>
 
int main(){
    int n;
    printf("Enter the Number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=i;k<n;k++){
                printf("  ");
            }
        for(int j=i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
}