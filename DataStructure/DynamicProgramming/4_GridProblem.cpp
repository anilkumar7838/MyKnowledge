#include<iostream>
using namespace std;

int minCost(int arr[][100],int m,int n){
    int dp[100][100]={};
    dp[0][0]=arr[0][0];
    //base case
    for(int i=1;i<m;i++){
        dp[0][i]=dp[0][i-1]+arr[0][i];
    }
    for(int j=1;j<n;j++){
        dp[j][0]=dp[j-1][0]+arr[j][0];
    }
    // main
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=min(dp[i-1][j]+arr[i][j],dp[i][j-1]+arr[i][j]);
        }
    }
    return dp[m-1][n-1];
}

int main(){
    int arr[100][100]={
        {1,2,3},
        {4,8,2},
        {1,5,3}
    };
    cout<<"Ans: "<<minCost(arr,3,3)<<endl;
}