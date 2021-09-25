/*
    A sorted array(a) .Find index i such that a[i]=i;
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,*a;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    printf("Enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==i+1){
            printf("The index of array which is equal to its element in it is: %d",a[i]);
        }
    }
}