#include<iostream>
#include<algorithm>
using namespace std;

int inf=(int)1e9;
int mem[10000]; //Memoize

int Reduce(int n){
    if(n==1){
        return 0;
    }
    int q1=inf,q2=inf,q3=inf;
    if(n%3==0) q1=1+Reduce(n/3);
    if(n%2==0) q2=1+Reduce(n/2);
    q3=1+Reduce(n-1);

    return min(q1,min(q2,q3));
}
int ReduceM(int n){
    if(n==1){
        return 0;
    }
    if(mem[n]!=-1){
        return mem[n];
    }
    int q1=inf,q2=inf,q3=inf;
    if(n%3==0) q1=1+ReduceM(n/3);
    if(n%2==0) q2=1+ReduceM(n/2);
    q3=1+Reduce(n-1);

    mem[n]= min(q1,min(q2,q3));
    return mem[n];
}

int main(){
    // int n=21;
    int n=10;
    cout<<"Ans: "<<Reduce(n)<<endl;
    fill(mem,mem+n+1,-1);
    cout<<"Ans: "<<ReduceM(n)<<endl;
}