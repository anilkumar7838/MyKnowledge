#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Series is : ");
    for(int i=1;i<=n;i++){
        printf("%d ",i*i);
    }
}