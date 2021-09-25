// 1. Write a program to compute the sum of the first n terms of the following series: 
// S = 1 - 1 / (2 ^ 2) + 1 / (3 ^ 3) - ... 1 / (n ^ n) where ^ is exponentiation. 
// The number of terms n is to be taken from user through command line. If command line 
// argument is not found then prompt the user to enter the value of n.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc,char* argv[]){
    int i,j,n;
    float sum=0;
    if(argc<=1){
    printf("enter the number : ");
    scanf("%d",&n);
    }
    else{
        n=atoi(argv[1]);
    }
    // printf("%d\n",n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            sum+=(1/(pow(i,2)));
            // printf("sum: %f\n",sum);
        }
        if(i%2==0){
            sum-=(1/(pow(i,2)));
            // printf("sum: %f\n",sum);
        }
    }
    printf("sum: %f\n",sum);
   return 0;
}
