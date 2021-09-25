#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,j,*a;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before arrange in ascending order : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
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
    printf("After arrange in ascending order : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}