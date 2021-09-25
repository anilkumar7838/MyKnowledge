// Swap using pointers
#include<stdio.h>
void swap(int *a,int *b)/*call by reference*/
{
    int temp=*a;//It change the value on same address pointed by pointer
    *a=*b;
    *b=temp;    
}
int main(){
    int a,b,*p,*q,*temp;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    p=&a;
    q=&b;
    printf("Before swapping \nFirstNumber is: %d\nSecondNumber is: %d\n",*p,*q);
    swap(&a,&b);
    // temp=p;//It change the address store in pointer variable
    // p=q;
    // q=temp;
    // printf("After swapping \nFirstNumber is: %d\nSecondNumber is: %d",*p,*q);
    printf("After swapping \nFirstNumber is: %d\nSecondNumber is: %d",a,b);
}
// important key point
// difference between a=&b and *a=&b
/*
  Example:   Address  value
          a  0x0001   0x0004
          b  0x0002   70
             0x0003   80
             0x0004   90
    at the moment a is 0x0004 and *a is 90.
    if you do a=&b, a will be 0x0002 and *a will be 70.
    but if you do *a=&b,a will not change,i.e. value at the address 0x0004,will change to 0x0002.
*/