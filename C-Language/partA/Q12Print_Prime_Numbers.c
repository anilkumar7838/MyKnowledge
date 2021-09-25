#include<stdio.h>
#include<math.h>

int main(){
    int n,c=0,i;
    printf("Enter the number of term : ");
    scanf("%d",&n);
    if(n>=1){
        printf("Prime numbers are : 2 ");
        c=1;
    }
    if(n>=3){
        for(int j=3;;j++){
            for(i=2;i<j;i++){
                if(j%i==0){
                    break;
                }
            }
            if(i==j){
                printf("%d ",j);
                c++;
            }
            if(c==n){
                break;
            }
        }
    }
}