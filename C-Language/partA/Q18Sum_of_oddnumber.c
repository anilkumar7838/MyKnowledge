#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=(2*n-1);i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("Sum of %d odd numbers is : %d",n,sum);
}