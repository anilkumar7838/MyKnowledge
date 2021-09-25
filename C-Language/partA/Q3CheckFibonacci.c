// Enter the number to check whether it is came in fibonacci series or not
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,temp,a=0,b=1;
    bool check=false;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n==0&&n==1){
        check=true;
    }
    for(int i=1;;i++){
        temp=a+b;
        a=b;
        b=temp;
        if(temp>n){
            break;
        }
        if(temp==n){
            check=true;
        }
    }
    if(check){
        printf("Number is occur in the fibonacci series");
    }
    else{
        printf("Number is not occur in the fibonacci series");
    }
}