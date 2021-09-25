#include<stdio.h>
#include<math.h>

int main(){
    int n,oct=0,c,sum=0;
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
    while(sum!=0){ 
      int rem=sum%8;
      int t=pow(10,c);
      oct+= rem*t;
      sum/=8;
      c++;
    }
    printf("Binary to Octal of %d is : %d",n,oct);
}