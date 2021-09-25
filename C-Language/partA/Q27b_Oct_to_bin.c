#include<stdio.h>
#include<math.h>

int main(){
    int n,oct=0,c,sum=0;
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
    while(sum!=0){ 
      int rem=sum%2;
      int t=pow(10,c);
      oct+= rem*t;
      sum/=2;
      c++;
    }
    printf("Octal to binary of %d is : %d",n,oct);
}