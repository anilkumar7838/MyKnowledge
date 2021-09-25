//7. Write a program to calculate GCD of two numbers (i) with recursion (ii) without recursion.
#include<stdio.h>

int iterative_gcd(int a,int b){
    do{
        if(a%b==0){
            return b;   
        }
        if(b%a==0){
            return a;
        }
        if(a>b){
            a%=b;  
        }
        if(b>a){
            b%=a;
        }    
    }while(a!=b);
    return a;
}
int recursive_gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    if(b%a==0){
        return a;
    }
    if(a>b){
        return recursive_gcd(a%b,b);
    }
    if(b>a){
        return recursive_gcd(a,b%a);
    }
    if(a==b){
        return  a;
    }
}
int main(){
    int choice,n,a,b;
    char c;
    do{
        printf("<<<<<<<< Calculate GCD >>>>>>\n"
        "1.with recursion\n"
        "2. without recursion\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{
                printf("Enter the two numbers :");
                scanf("%d",&a);
                scanf("%d",&b);
                n=recursive_gcd(a,b);
                printf("GCD is :%d\n",n);
                break;
            }
            case 2:{
                printf("Enter the two numbers :");
                scanf("%d",&a);
                scanf("%d",&b);
                n=iterative_gcd(a,b);
                printf("GCD is :%d\n",n);
                break;
            }
            default:{
                printf("Enter a valid choice!!!!\n");
                break;
            }
        }
        printf("Do you wish to continue. y/n :\n");
        fflush(stdin);
        scanf("%c",&c);
    }while(c!='n');
}