//Anilkumar(2020UCD2101)
#include<stdio.h>
int main(){
    int c_blank=0,c_tabs=0,c_newlines=0;
    int c;
    printf("Enter the terms with space tabs new lines (press ctrl+Z) to exit.\n");
    while((c=getchar())!=EOF){
        if(c==' '){
            ++c_blank;
        }
        if(c=='\t'){
            ++c_tabs;
        }
        if(c=='\n'){
            ++c_newlines;
        }
    }
    printf("*******OUTPUT*******\n");
    printf("Blank lines: %d\n",c_blank);
    printf("Lines with tabs: %d\n",c_tabs);
    printf("new lines: %d\n",c_newlines);
    return 0;
}