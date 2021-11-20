//Memoization
#include<iostream>
using namespace std;

int mem[1000];

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int fibM(int n){
    if(n<=1){
        return n;
    }
    if(mem[n]!=-1){
        return mem[n];
    }
    mem[n]=fibM(n-1)+fibM(n-2);
    return mem[n];
}

int main(){
    int n=10;
    // cin>>n;
    for(int i=0;i<=n;i++){
        mem[i]=-1;
    }
    cout<<"Fibonacci of "<<n<<"th is: "<<fib(n)<<endl;
    cout<<"Fibonacci of "<<n<<"th is: "<<fibM(n)<<endl;
}