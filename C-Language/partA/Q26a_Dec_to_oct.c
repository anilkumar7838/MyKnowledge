#include<stdio.h>
#include<math.h>

int main(){
    int n,c=0,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){ 
      int rem=n%8;
      double k=pow(10,c);
      sum += rem*k;
      n/=8;
      c++;
    }
    n=temp;
    printf("Decimal to Octal of %d is : %d",n,sum);
}
