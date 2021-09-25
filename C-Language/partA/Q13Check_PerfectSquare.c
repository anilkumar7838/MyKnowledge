#include<stdio.h>

int main(){
    int n,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n/i==i){
            c=1;
            break;
        }
    }
    if(c==1){
        printf("The number is Perfect Square.");
    }
    else{
        printf("The number is not a Perfect Square.");
    }
}