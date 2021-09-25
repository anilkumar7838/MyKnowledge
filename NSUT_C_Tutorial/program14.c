#include<stdio.h>

char* reverse(char *s){
    static char ans[30];
    static int i=0;
    if(*s!='\0'){
       reverse(s+1);
       ans[i]=*s;
       i++;
    }
    return ans;
}

int main(){
    char str[30];
    char *s;
    printf("Enter the string: ");
    gets(str);
    printf("Reverse is: ");
    s=reverse(str);
    puts(s);
    return 0;

}