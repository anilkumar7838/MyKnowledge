#include<stdio.h>

int main(){
    float p,r,t,total=1;
    printf("Enter the principal:");
    scanf("%f",&p);
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the time in years:");
    scanf("%f",&t);
    float si=(p*r*t)/100;
    for(int i=0;i<t;i++){
        total*=(1+(r/100));
        printf("TOTAL: %f\n",total);
    }
    float ci=p*total;
    printf("The simple interest is: %.2f\n",si);
    printf("The compound interest is: %.2f\n",ci);
}