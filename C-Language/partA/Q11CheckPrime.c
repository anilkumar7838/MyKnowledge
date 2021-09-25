#include<stdio.h>
#include<math.h>

int main(){
    int n,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<=1){
        c=0;
    }
    if(n==2||n==3){
        c=1;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i!=0){
            c=1;
        }
    }
    if(c==1){
            printf("The number is Prime.");
    }
    else{
        printf("The number is not Prime.");
    }
}