#include<stdio.h>

int main(){
    int n,fact=1,c=0,pos=0;
    printf("Enter the number : ");
    scanf("%d",&n);
     for(int i=1;;i++){
        fact*=i;
        pos=i;
        if(n==fact){
            c=1;
            break;
        }
        if(fact>n){
            break;
        }
    }
    if(c==1){
        printf("%d is the factorial of %d.",n,pos);
    }
    else{
        printf("It is not a factorial number.");
    }
}