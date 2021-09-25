#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,j,*a,flag=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements : ");
    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
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
    int c=1;
    printf("Missing element is : ");
    for(i=0;i<n;i++){
        if(a[i]!=c){
            printf("%d ",c);
            break;
        }
        c++;
    }

}
