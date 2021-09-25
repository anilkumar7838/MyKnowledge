/*
    Merge two sorted arrays in a single sorted array.
*/
#include<stdio.h>
#include<stdlib.h>
void sort(int*a,int n){
    int i,j; 
    for (i = 0; i < (n - 1); i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
int main(){
    int i,j,n,n1,n2,*a,*b,*c;
    printf("Enter the size of 1st array : ");
    scanf("%d",&n1);
    a=malloc(n1*sizeof(int));
    printf("Enter the elements of array1 : ");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of 2nd array : ");
    scanf("%d",&n2);
    b=malloc(n2*sizeof(int));
    printf("Enter the elements of array2 : ");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    n=n1+n2;
    c=malloc(n*sizeof(int));
    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(j=0;j<n;j++){
        c[j+n1]=b[j];
    }
    sort(c,n);
    printf("After merging :\nThe arrays is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}