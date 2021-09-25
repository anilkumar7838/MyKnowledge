#include<stdio.h>

int gcd(int x,int y){
    if(x==y){
        return x;
    }
    if(x%y==0){
        return y;
    }
    if(y%x==0){
        return x;
    }
    if(x>y){
        return gcd(x%y,y);
    }
    if(x<y){
        return gcd(x,y%x);
    }
}
int main(){
    int a,b;
    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);
    int hcf=gcd(a,b);
    printf("HCF is : %d\n",hcf);
    int lcm = a*b/hcf;
    printf("LCM is : %d",lcm);
    // if(a>b){
    //     for(int i=0;;i++){
    //         a%=b;
    //         if(a==b){
    //             printf("Hcf of two numbers is : %d",a);
    //             break;
    //         }
    //     }
    // }
    // else{
    //     for(int i=0;;i++){
    //         b%=a;
    //         if(a%b==0){
    //             printf("Hcf of two numbers is : %d",a);
    //             break;
    //         }
    //     }
    // }

}