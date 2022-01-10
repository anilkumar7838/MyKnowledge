#include<iostream>
#include<vector>
using namespace std;

int linc_s(vector<int> arr,int n){
    int dp[n-1]={1};
    int best=-1;
    for(int i=1;i<n;i++){
        int j=i-1;
        while(j>=0){
            if(arr[i]<=arr[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
            j--;
        }
        best=max(best,dp[i]);
    }

    return best;   
}

int main(){
    vector<int> arr={12,23,21,32,43,45,343,545,654,65,4,3,32};
    // vector<int> arr={3,10,2,1,20};
    int n=arr.size();

    cout<<linc_s(arr,n);
    return 0;
}