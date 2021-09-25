#include<stdio.h>
#include<math.h>

int main(){
    int n,c=1,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int k=n;
    while(n!=0){ 
      int rem=n%2;
      sum+= rem*c;
      n/=2;
      c=c*10;
    }
    n=k;
    printf("Decimal to Binary of %d is : %d",n,sum);
}