#include<stdio.h>
#include<math.h>

int main(){
    int n,sum=0;
    printf("Enter the Octal number : ");
    scanf("%d",&n);
    int k=n;
    for(int i=0;;i++){
      if(n<10){
      sum+=n*pow(8,i);
      break;
      }
      sum+=n%10*pow(8,i);
      n/=10;
    }
    n=k;
    printf("Octal to decimal of %d is : %d",n,sum);
}