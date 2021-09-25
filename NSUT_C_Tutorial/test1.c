// Create a string with words separated by ',' and replace the commas with spaces, for example replace all commas in "denyse, Marie ,smith,21,london,uk with spaces. now print the resulting string.
#include<stdio.h>

int main(){
    int i=0;
    char ans[100];
    printf("Enter the string: ");
    gets(ans);
    puts(ans);
    while(ans[i]!='\0'){
        if(ans[i]==','){
            ans[i]=' ';
        }
        i++;
    }
    puts(ans);
    return 0;
}