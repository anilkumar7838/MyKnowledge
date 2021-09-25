/*This program is to print the sum of digit of the number
    ,sum of first and last digit number 
    and reverse of a number.
    without using array or string.
    n%10
*/
#include<stdio.h>

int main(){
    long int n,sum=0,ls;
    printf("Enter the number : ");
    scanf("%ld",&n);
    printf("Reverse number is : ");
    long int fs=n%10;
    if(n>10){
        do{
        printf("%ld",n%10);
        sum+=n%10;
        n/=10;  
        }while(n>10);
    }
    sum+=n;
    ls=n;
    printf("%ld\n",n);
    printf("Sum of first and last digit is : %ld\n",fs+ls);
    printf("Sum of all digit is : %ld",sum);
}