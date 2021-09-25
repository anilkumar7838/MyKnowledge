//5. Write a program to merge two ordered arrays to get a single ordered array.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,p,s,*a,*b,*c;
    printf("Enter the size of an array1 :");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    printf("Enter the elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of an array2 :");
    scanf("%d",&p);
    b=malloc(p*sizeof(int));
    printf("Enter the elements of array :\n");
    for(int i=0;i<p;i++){
        scanf("%d",&b[i]);
    }
    // merge(a,b);
    s=p+n;
    c=malloc(s*sizeof(int));
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int j=0;j<p;j++){
        c[j+n]=b[j];
    }
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(c[i]>c[j]){
                int temp =c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("Array after sorting: ");
    for(int i=0;i<s;i++){
        printf("%d",c[i]);
    }
}