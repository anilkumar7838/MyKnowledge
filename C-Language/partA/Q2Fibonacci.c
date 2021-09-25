//This program is to print the nth term of fibonacci series
#include<stdio.h>
int swap(int a,int b){
    int temp =a+b;
    a=b;
    b=temp;
    return temp;
}
int main(){
    int n,firstNum=0,secondNum=1,num;
    printf("Enter the number of term : ");
    scanf("%d",&n);
    printf("Fibonacci series upto %d is:",n);
    if(n>=1){
        printf("0");
    }
    if(n>=2){
        printf(" 1");
    }
    for(int i=1;i<=(n-2);i++){
        num=firstNum+secondNum;
        firstNum=secondNum;
        secondNum=num;
        printf(" %d",num);
    }
}