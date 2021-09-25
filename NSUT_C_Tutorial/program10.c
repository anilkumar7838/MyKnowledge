#include<stdio.h>

int main(){
    char str[45],c;
    printf("Enter the string: ");
    gets(str);
    // puts(str);
    // printf("%s",str);
    for(c='A';c<='z';c++){
        int i=0,count=0;
        while(str[i]!='\0'){
            if(str[i]==c){
                count++;
            }
            i++;
        }
        if(count>0){
            printf("%c is %d times.\n",c,count);
        }
    }
    return 0;
}