// for dp
// not complete yet 
#include<iostream>
#include<vector>

using namespace std;


int lcs_k(vector<int> arr1,vector<int> arr2,int k,int i,int j){
    int dp[100][100][10]={-1};
    

}

int main(){
    vector<int> arr1={1,2,3,4,5};
    vector<int> arr2={5,2,4,3,1};
    int k=1;
    // cout<<lcs_k(arr1,arr2,k,0,0);
    cout<<lcs_k(arr1,arr2,k,0,0);
}
