#include<iostream>
#include<vector>
using namespace std;

int linc_s(vector<int> arr,int n){
    int count[n]={1};
    int ans=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                count[i]+=1;
            }
        }
        ans=max(ans,count[i]);
    }

    return ans;
}

int main(){
    // vector<int> arr={3,10,2,1,20};
    vector<int> arr={12,23,21,32,43,45,343,545,654,65,4,3,32};
    int n=arr.size();

    cout<<linc_s(arr,n);
    return 0;
}