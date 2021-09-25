#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=v.size(),sum=0,*left,*right;
    left=new int[n];
    right=new int[n];
    //left
    left[0]=v[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],v[i]);   
    }
    //right
    right[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(v[i],right[i+1]);
    }
    // sum
    for(int i=0;i<n;i++){
        sum+=(min(left[i],right[i])-v[i]);
    }
    cout<<sum<<endl;
}