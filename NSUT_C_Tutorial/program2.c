// Anilkumar (2020UCD2101)
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int rs=n>>1;
    printf("number after applying right shift=%d\n",rs);
    printf("%d when divided by 2 is also %d\n",n,rs);

    int ls=n<<1;
    printf("number after applying left shift=%d\n",ls);
    printf("%d when multiplied by 2 is also %d\n",n,ls);

    return 0;
}