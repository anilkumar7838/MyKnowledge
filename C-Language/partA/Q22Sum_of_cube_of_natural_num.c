#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i*i*i;
    }
    printf("Sum of cube of first %d natural numbers is : %d",n,sum);
}