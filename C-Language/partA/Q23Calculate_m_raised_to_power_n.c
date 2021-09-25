#include<stdio.h>

int main(){
    int n,m,ans=1;
    printf("Enter the value of base : ");
    scanf("%d",&m);
    printf("Enter the value of power : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans*=m;
    }
    printf("%d raised to the power %d is : %d",m,n,ans);
}