#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Even numbers up to %d term is: ",n);
    for(int i=1;i<=(2*n);i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}