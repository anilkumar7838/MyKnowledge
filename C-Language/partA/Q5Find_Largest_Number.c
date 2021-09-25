#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,n,num;
    printf("Enter the Number of terms: ");
    scanf("%d",&n);
    a=(int*) malloc(n*sizeof(int));
    printf("Enter the numbers: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    num=a[0];
    for(int i=1;i<n;i++){
        if(num<a[i]){
            num=a[i];
        }
    }
    printf("The largest number out of %d number is: %d",n,num);

}