#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game(){
    char c;
    char ch,com;
    int n;
    do{
        srand(time(0));
        n=rand()%10+1;
        printf("N: %d\n",n);
        printf("Enter your choice:");
        fflush(stdin);
        scanf("%c",&ch);
        if(n<=4){
            com='w';
        }
        if(4>n<7){
            com='s';
        }
        if(n>=7){
            com='g';
        }
        if(ch=='s'&&com=='w'){
            printf("Computer Choose: Water\n");
            printf("####You Won####\n");
        };
        if(ch=='s'&&com=='g'){
            printf("Computer Choose: Gun\n");
            printf("####You Lose####\n");
        };
        if(ch=='s'&&com=='s'){
            printf("Computer Choose: Snake\n");
            printf("####Match is Draw####\n");
        };
        if(ch=='w'&&com=='w'){
            printf("Computer Choose: Gun\n");
            printf("####Match is Draw####\n");
        };
        if(ch=='g'&&com=='g'){
            printf("Computer Choose: Gun\n");
            printf("####Match is Draw####\n");
        };
        if(ch=='w'&&com=='s'){
            printf("Computer Choose: Snake\n");
            printf("####You Lose####\n");
        };
        if(ch=='w'&&com=='g'){
            printf("Computer Choose: Gun\n");
            printf("####You Won####\n");
        };
        if(ch=='g'&&com=='s'){
            printf("Computer Choose: Snake\n");
            printf("####You Won####\n");
        };
        if(ch=='g'&&com=='w'){
           printf("Computer Choose: Water\n");
           printf("####You Lose####\n");
        };
        if(ch!='s'&&ch!='w'&&ch!='g'){
            printf("Warning::Wrong Input!!!!!");
        }
        printf("Do you wish to continue y/n : ");
        fflush(stdin);
        scanf("%c",&c);
    }while(c!='n');
    
}
int main(){
    printf("************* SNAKE WATER GUN *****************\n");
    printf("In this game press:\n's' for snake\n'w' for water\n'g' for gun\n");
    // scanf("%c",&ch);
    game();
}
