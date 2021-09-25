/*
    Create an array of n element find and return the position of an element x.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*a,x;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("enter the elements : ");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
      if(a[i]==x){
          printf("The element %d is found at position %d in a series : ",x,i+1);
          break;
      }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}