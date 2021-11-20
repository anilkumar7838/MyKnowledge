/*
    sell all wines with different cost
    and only select the end points(bottle)
    maximize the profit
    every day wine value increase by initial value
*/
#include<iostream>
using namespace std;


int maxProfit(int arr[],int n){
    int year=n;
    int dp[100][100]={0};
    for(int i=0;i<n;i++){
        dp[i][i]=arr[i]*year;
    }
    year--;

    for(int j=2;j<=n;j++){
        int st=0;
        int end=n-j;
        while(st<=end){
            int en=st+j-1;
            dp[st][en]=max(arr[st]*year+dp[st+1][en],arr[en]*year+dp[st][en-1]);
            st++;
        }
        year--;
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }cout<<endl;
    // }

    return dp[0][n-1];
}

int main(){
    int arr[]={2,3,5,1,4};
    int n=5;
    cout<<maxProfit(arr,n)<<endl;
    return 0;
}