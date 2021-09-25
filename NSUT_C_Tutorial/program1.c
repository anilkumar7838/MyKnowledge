// Anilkumar (2020UCD2101)
#include<stdio.h>

int main(){
    int a,b;
    printf("Give A and B (0 or 1)\n");
    scanf("%d %d",&a,&b);
    if(a == 0 && b == 0 || a == 1 && b == 1){
        printf("0\n");
    }
    else if(a == 0 && b == 1 || a == 1 && b == 0){
         printf("1\n");
    }
    else{
        printf("Error: Enter the correct operand");
    }

    return 0;
}
