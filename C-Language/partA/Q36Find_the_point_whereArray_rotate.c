/*
    A sorted array is rotated around some point which needs to be determined.
    3 7 9 11 1 2         Output 2
    Not for unsorted Array.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,*a,c=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    printf("Enter the element : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            for(int j=i+1;j<n;j++){
                if(a[j]<a[j+1])
                {
                    c=a[j+1];
                }
            }
        }
    }
                    printf("The point of rotation of an array is: %d\n",c);
}