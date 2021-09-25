//Write  a  program  that  prints  a  table  indicating  the  number  of  occurrences  of  each  alphabet  in the ///text entered as command line arguments.
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(int argc, char* argv[]){
    //Data types
    int i=0,n;
    char c,*ptr;
    //code
    if(argc<=1){
        printf("No command line arguments is passed.\n");
    }
    // for (int i=0; i<argc ;i++){
    //     printf("argv is: %s \n",argv[i]);
    // }
    for(c='A';c<='z';c++){
        ptr=argv[1];
        int count=0;
        while( *ptr !='\0'){
            if(*ptr==c){
                count++;
            }
            ptr++;    
        }
        if(count>0){
        printf("%c is %d times.\n",c,count);
        }
    }
}