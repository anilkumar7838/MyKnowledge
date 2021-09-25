/*
    An arrsy of size n has element from 1 to n where 1 element is missing and 1 element is repeating Find both element.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n,j,c=1,*a,b[20];
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements from 1 to %d : ",n);
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for( i=0;i<n;i++){
        b[i]=i+1;
    }
    for( i=0;i<n-1;i++){              // for sorting 
        for( j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
        }
    }
    for(i=0;i<n-1;i++){                   //find one repeating element
        for( j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("The repeating element is : %d\n",a[i]);
                break;
            }
        }
    }
    for( i=0;i<n;i++){                 // for missing element 
        for( j=0;j<n;j++){
            if(b[i]==a[j]){
                c=0;
                break;
            }
       }
       if(c==1){
           printf("The missing element is : %d",b[i]);
           break;
       }
       c=1;
    }

}
