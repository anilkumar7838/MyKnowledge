#include<stdio.h>
#include<math.h>

int main(){
    int n,sum=0;
    printf("Enter the binary number : ");
    scanf("%d",&n);
    int k=n;
    for(int i=0;;i++){
      if(n<10){
      sum+=n*pow(2,i);
      break;
      }
      sum+=n%10*pow(2,i);
      n/=10;
    }
    n=k;
    printf("Binary to decimal of %d is : %d",n,sum);
}