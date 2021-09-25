#include<stdio.h>

#define swap(t,x,y) t= x; x = y; y = t;

int main(){
    int x=12,y=23,t;
    printf("Before Swap: %d %d\n",x,y);
    swap(t,x,y);
    printf("After Swap: %d %d\n",x,y);
    return 0;

}