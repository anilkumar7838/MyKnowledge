/*
    Write  a  menu  driven  program  to  perform  following  operations  on  strings  (without  using inbuilt string functions):
    a) Show address of each character in string
    b) Concatenate two strings. 
    c) Compare two strings 
    d) Calculate length of the string (use pointers) 
    e) Convert all lowercase characters to uppercase 
    f) Reverse the string 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//function for address
void address(char str[],int n){
    for(int i=0;i<n;i++){
        printf("Address of a Char at %d in a string :%u\n",i,&str[i]);
    }
}
//function for compare string
void compare(){
    char str1[30],str2[30];
    int m,n,count=0;
    printf("Enter your string1 :");
    scanf("%s",&str1);
    printf("Enter your string2 :");
    scanf("%s",&str2);
    m=strlen(str1);
    n=strlen(str2);
    for(int i=0;i<m;i++){
        if(m!=n){
            count=1;
            break;
        }
        if(str1[i]!=str2[i]){
            count =1;
        }
    }
    if(count==1){
        printf("strings are not equal.\n");
    }
    else{
        printf("strings are equal.\n");

    }
}
//function for concatenate two strings
void concatenate(){
    char str1[30],str2[30],*str;
    int m,n,s;
    printf("Enter your string1 :");
    scanf("%s",&str1);
    printf("Enter your string2 :");
    scanf("%s",&str2);
    m=strlen(str1);
    n=strlen(str2);
    s=m+n;
    str=malloc(s*sizeof(char));
    for(int i=0;i<m;i++){
        str[i]=str1[i];
    }
    for(int j=0;j<n;j++){
        str[j+m]=str2[j];
    }
    printf("After concatenation string is :%s\n",str);
}
// function to calculate length
void length(char* c){
    int j=0;
    while(*c!='\0'){
        c++;
        j++;
    }
    printf("the length of a string is :%d\n",j);
}
//function to convert lower case to upper case
void lowToup(){
    int n;
    char str[50];
    printf("Enter your string :");
    scanf("%s",&str);
    n=strlen(str);
    for(int i=0;i<n;i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
    }
    printf("after converting to uppercase :%s\n",str);
}
//function to reverse the string
void reverse(){
    int n;
    char str[50],c;
    printf("Enter your string :");
    scanf("%s",&str);
    n=strlen(str);
    for(int i=0,j=(n-1);i<(n/2);i++,j--){
        c=str[i];
        str[i]=str[j];
        str[j]=c;
    }
    printf("Reverse of a string :%s\n",str);
}
int main(){
    int choice;
    char ch;
    do{
    printf("<<<<<<<<STRING>>>>>>>>\n");
    printf("1) Show address of each character in string\n"
    "2) Concatenate two strings.\n" 
    "3) Compare two strings.\n"
    "4) Calculate length of the string (use pointers)\n" 
    "5) Convert all lowercase characters to uppercase\n"
    "6) Reverse the string \n");
    printf("Enter your choice.\n");
    scanf("%d",&choice);
      switch (choice)
      {
        case 1:{
            int n;
            char str[50];
            printf("Enter your string :");
            scanf("%s",&str);
            n=strlen(str);
            address(str,n);
            break;
        }
        case 2:{
            concatenate();
            break;
        }
        case 3:{
            compare();
            break;
        }
        case 4:{
            char str[50];
            printf("Enter your string :");
            scanf("%s",&str);
            length(str);
            break;
        }
        case 5:{
            lowToup();
            break;
        }
        case 6:{
            reverse();
            break;
        }
        default:{
            printf("Enter the valid choice!!!\n");
            break;
        }
      }
      printf("Do you wish to continue menu2.y/n\n");
      fflush(stdin);
      scanf("%c",&ch);
    }while(ch!='n');
}