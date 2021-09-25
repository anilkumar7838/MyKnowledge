/*
    This Program is to Print the Pattern of type:
    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=i;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}