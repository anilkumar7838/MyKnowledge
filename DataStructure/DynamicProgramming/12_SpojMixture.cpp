// brute force

#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

long long dp[100][100];

long long sum(int arr[],int i,int j){
    long long ans=0;
    for(int k=i;k<=j;k++){
        ans+=arr[k];
        ans%=100;
    }
    return ans;
}

long long  minSmoke(int arr[],int st,int en){
    if(st>=en){
        return 0;
    }
    if(dp[st][en]!=-1){
        return dp[st][en];
    }
    dp[st][en]=INT_MAX;
    for(int k=st;k<=en;k++){
        cout<<st<<en<<" ";
        dp[st][en]= min(dp[st][en],minSmoke(arr,st,k)+minSmoke(arr,k+1,en)+(sum(arr,st,k)*sum(arr,k+1,en)));
    }
    cout<<dp[0][0]<<endl;
    return dp[st][en];
}

int main(){
    int n=3;
    // cin>>n;
    // arr[n]={60,40,20,30};
    int arr[]={40,60,20};

    memset(dp,-1,sizeof(dp));
    cout<<minSmoke(arr,0,n-1);
    // cout<<endl;
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }     
    //     cout<<endl;
    // }
    return 0;
}