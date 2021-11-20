#include<iostream>
using namespace std;


int maxProfit(int arr[],int n){
    int dp[100]={0},ans=0;
    // dp[0]=arr[0];
    for(int i=1;i<n;i++){
        ans=0;
        for(int j=1;j<=i;j++){
            // cout<<" * "<<dp[j-1]<<" "<<arr[i-j];
            ans=max(ans,dp[j-1]+arr[i-j]);
        }
        cout<<endl;
        dp[i]=ans;
    }
    return dp[n-1];
}

int main()
{
    int arr[]={2,3,2,5};
    int n=5;
    cout<<"Ans: "<<maxProfit(arr,n)<<endl;
}