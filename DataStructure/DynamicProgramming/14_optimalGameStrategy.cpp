#include<iostream>
#include<cstring>

using namespace std;

int dp[100][100];

int optimalGameStrategy(int arr[],int n){
    for(int i=0;i<n;i++){
        dp[i][i]=arr[i];
    }

    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;j++,i++){
            dp[i][j]=max((arr[i]+min(dp[i+2][j],dp[i+1][j-1])),(arr[j]+min(dp[i][j-2],dp[i+1][j-1])));
        }     
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }     
    //     cout<<endl;
    // }
    return dp[0][n-1];
}

int main(){
    int arr[]={2,7,4,6,1,5,3};
    // int arr[]={2,7,4,6};
    int n=4;
    memset(dp,0,sizeof(dp));
    // memset(dp,0,sizeof(dp));
    cout<<optimalGameStrategy(arr,n);

    return 0;
}