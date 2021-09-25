#include<iostream>
using namespace std;

int gcd_iterative(int a,int b){
    do{
        if(a>b){
            if(a%b==0){
                return b;
            }
            else{
                a%=b;
            }
        }
        else if(a<b){
            if(b%a==0){
                return a;
            }
            else{
                b%=a;
            }
        }
    }while(a!=b);
    return a;
}

int gcd_recurr(int a,int b){
    if(a%b==0){
        return b;
    }
    else if(b%a==0){
        return a;
    }
    if(a>b){
        return gcd_recurr(a%b,b);
    }
    if(a<b){
        return gcd_recurr(a,b%a);

    }
    if(a==b){
        return a;
    }
}

int main(){
int a,b;
cout<<"*******This program is to find GCD**********"<<endl;
cout<<"Enter the two numbers: "<<endl;
cin>>a>>b;

cout<<"GCD(iterative) of "<<a<<" and "<<b<<" is: "<<gcd_iterative(a,b)<<endl;
cout<<"GCD(Recurrsive) of "<<a<<" and "<<b<<" is: "<<gcd_recurr(a,b)<<endl;
return 0;
}