#include<stdio.h>
#include<math.h>

int main()
{
    int n, sum = 0, c = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int temp = n;
    while (n != 0)
    {
    	int r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    printf("%d\n",sum);
    if (sum == temp)
    {
        printf("Number is a palindrome number");
    }
    else
    {
        printf("Number is not a palindrome number");
    }
}
