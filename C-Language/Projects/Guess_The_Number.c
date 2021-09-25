#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num1,num2,count=1;
    srand(time(0));
    num1 = rand()%100+1;  // Generates a random number between 1 and 100
////     printf("The number is %d\n",num1);
    printf("************Welcome to Guess Number Game**************\n");
    printf("Enter your number From 1 to 100.\n");
    scanf("%d",&num2);
    do{
        if(num1>num2){
            printf("Enter Higher number please.\n");
            scanf("%d",&num2);
            count++;
        }
        else if(num1<num2){
            printf("Enter lower number please.\n");
            scanf("%d",&num2);
            count++;
        }

    }while(num1!=num2);

    if(num1==num2){
        printf("You Guessed the Number in %d Attempt.\n",count);
    }

    return 0;
}
