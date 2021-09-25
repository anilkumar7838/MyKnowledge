/*
    Find duplicate terms in an array and print only unique terms
    4 2 1 2 1 3          Duplicate - 1,2         4 2 1 3
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,*a,count=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    printf("Enter the element: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(int k=j;k<n-1;k++){
                    a[k]=a[k+1];
                }
               n--;
               j--;
            }
        }
    }
    printf("Array is : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}