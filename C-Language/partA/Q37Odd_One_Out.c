/*
    Array of size n out which n-1 elements are same and one is different. Find the odd 
    one out.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,*a,count=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    printf("Enter the element : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]!=a[j]){
                count++;
                if(count>1){
                    printf("Odd one out is: %d\n",a[i]);
                    break;
                }
            }
        }
        count=0;
    }
}