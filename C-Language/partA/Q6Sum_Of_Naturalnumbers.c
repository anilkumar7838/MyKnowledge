#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the number of term to add:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum of %d natural number is: %d",n,sum);
}