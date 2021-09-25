#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char getDigit(int n){
    if(n>=0 && n<=9){
        return n+'0';
    }
    else{
        return n+'A'-10;
    }
}

void itob(int n,char **c,int b){
    char *temp=(char *)malloc(100*sizeof(char));
    int i=0;
    while(n!=0){
        temp[i] = getDigit(n%b);
        n/=b;
        i++;
    }
    temp[i]='\0';
    *c = strrev(temp);
}
int main()
{
    char *c;
    int n;
    int b;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the base:");
    scanf("%d",&b);
    itob(n,&c,b);
    printf("Number after conversion to base %d is: %s",b,c);
    return 0;
}