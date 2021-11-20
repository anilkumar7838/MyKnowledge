#include<iostream>
#include<algorithm>
using namespace std;

int inf=(int)1e9;

int Reduce(int n){
    int dp[10000];
    dp[0]=0; dp[1]=0; dp[2]=1; dp[3]=1;
    for(int i=4;i<=n;i++){
        int q1=inf,q2=inf,q3=inf;
        if(n%3==0) q1=1+dp[i/3];
        if(n%2==0) q2=1+dp[i/2];
        q3=1+dp[i-1];
        dp[i]=min(q1,min(q2,q3));
    }
    return dp[n];
}

int main(){
    // int n=21;
    int n=10;
    cout<<"Ans: "<<Reduce(n)<<endl;   
}