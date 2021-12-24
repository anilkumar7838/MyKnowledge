#include<bits/stdc++.h>
using namespace std;

const int N=1e3+2;
int val[N];
int wt[N];
int dp[N][N];

int knapsack(int n, int w){
    if(w<=0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    if(wt[n-1]>w){
        return knapsack(n-1,w);
    }

    dp[n][w]= max(knapsack(n-1,w),knapsack(n-1,w-wt[n-1]) + val[n-1]);
    return dp[n][w];
}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the weights: ";
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    cout<<"Enter the price: ";
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    int w;
    cout<<"Enter the capacity: ";
    cin>>w;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    cout<<"Ans: "<<knapsack(n,w)<<endl;
    return 0;
}