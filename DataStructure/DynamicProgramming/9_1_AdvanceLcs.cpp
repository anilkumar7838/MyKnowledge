// brute force
#include<iostream>
#include<vector>

using namespace std;

int memo[100][100][10];

int lcs_kMemo(vector<int> arr1,vector<int> arr2,int k,int i,int j){
    if(i>=arr1.size() || j>=arr2.size()){
        return 0;
    }
    if(memo[i][j][k]!=0){
        return memo[i][j][k];
    }
    int res=0;
    
    if(arr1[i]==arr2[j]){
        res = (lcs_kMemo(arr1,arr2,k,i+1,j+1)+1);
    }else{
        if(k>0){
            res=(lcs_kMemo(arr1,arr2,k-1,i+1,j+1)+1);
        }
        res=max(res,max(lcs_kMemo(arr1,arr2,k,i+1,j),lcs_kMemo(arr1,arr2,k,i,j+1)));
    }
    return memo[i][j][k]=res; 
}




int lcs_k(vector<int> arr1,vector<int> arr2,int k,int i,int j){
    if(i>=arr1.size() || j>=arr2.size()){
        return 0;
    }
    int res=0;
    if(arr1[i]==arr2[j]){
        // cout<<arr1[i]<<" ";
        res = (lcs_k(arr1,arr2,k,i+1,j+1)+1);
    }else{
        if(k>0){
            res=(lcs_k(arr1,arr2,k-1,i+1,j+1)+1);
        }
        res=max(res,max(lcs_k(arr1,arr2,k,i+1,j),lcs_k(arr1,arr2,k,i,j+1)));
    }
    return res; 

}

int main(){
    vector<int> arr1={1,2,3,4,5};
    vector<int> arr2={5,2,4,3,1};
    int k=1;
    // cout<<lcs_k(arr1,arr2,k,0,0);
    cout<<lcs_kMemo(arr1,arr2,k,0,0);
}
