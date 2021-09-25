/*
    A sorted array of size n and anumber k. Find two numbers a,b in the array such that a+b=k.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,k,sum=0,flag=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    int *a=malloc(n*sizeof(int));
    printf("Enter the element : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number : ");
    scanf("%d",&k);
    printf("The numbers whose sum equal to %d is : \n",k);
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=(a[i]+a[j]);
            if(sum==k){
                flag++;
                printf("%d and %d\n",a[i],a[j]);
            }
        }
        sum=0;
    }
    if(flag==0){
        printf("No pair is found.");
    }
}