/*
Create an array of n elements and find Highest number and index; lowest number and index; mean ,median and mode of elements.
Not for same numbers.
*/
#include <stdio.h>
#include <stdlib.h>
void highest(int *a, int n)
{
    int h = a[0], i, pos = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            h = a[i];
            pos = i + 1;
        }
    }
    printf("Highest number among the elements is : %d at position %d\n", h, pos);
}
void lowest(int *a, int n)
{
    int l = a[0], i, pos = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] < l)
        {
            l = a[i];
            pos = i + 1;
        }
    }
    printf("Lowest number among the elements is : %d at position %d\n", l, pos);
}
void mean(int a[], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    //    printf("sum : %d\n",sum);
    printf("Mean of the given series is : %.2f\n", (float)sum / n);
}
void arrange(int *a, int n)
{
    int i, j;
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
void median(int a[], int n)
{
    arrange(a, n);
    int i;
    float avg;
    if (n % 2 == 0)
    {
        avg = (float)(a[n / 2 - 1] + a[n / 2]) / 2;
    }
    else
    {
        avg = (float)a[(n + 1) / 2 - 1];
    }
    printf("Median of a series is : %.2f\n", avg);
}
void mode(int a[], int n)
{
    int count[20], p, i, c = 1;
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (p = i; p < n; p++)
        {
            if (a[i] == a[p])
            {
                c++;
            }
        }
        count[i]=c;
    }
    int max=count[0];
    for(i=0;i<n;i++){
        if(max<count[i]){
            max=count[i];
        }
    }
    printf("Mode of a series is : ");
    for(i=0;i<n;i++){
        if(max==count[i]){
            printf("%d  ",a[i]);
        }
    }
}
int main()
{
    int i, n, *a;
    printf("Enter the terms : ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d",a[i]);
    }
    
     highest(a, n);
     lowest(a, n);
     arrange(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
     mean(a, n);
     median(a, n);
     mode(a, n);
    return 0;
}
