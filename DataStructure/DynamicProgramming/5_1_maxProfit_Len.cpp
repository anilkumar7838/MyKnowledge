// cutting rod

#include<iostream>
using namespace std;

int mem[100],cnt1=0,cnt2=0;

int maxProfit(int arr[],int n){
    ++cnt1;
    if(n==0){
        return 0;
    }
    int ans=0;
    for(int i=1;i<n;i++){
        ans=max(ans,arr[i-1]+maxProfit(arr,n-i));
    }
    return ans;
}

int maxProfitM(int arr[],int n){
    ++cnt2;
    if(n==0){
        return 0;
    }
    if(mem[n-1]!=-1){
        return mem[n-1];
    }
    int ans=0;
    for(int i=1;i<n;i++){
        ans=max(ans,arr[i-1]+maxProfitM(arr,n-i));
    }
    mem[n-1]=ans;
    return mem[n-1];
}

int main(){
    // int arr[]={2,3,2,5};//profit
    int arr[]={1,4,2,3,4,5,6,7,8,9,0,1,3,3,4,5,12,7,3,2,5};//profit
    int n=21;

    cout<<"Ans: "<<maxProfit(arr,n)<<endl;
    cout<<cnt1<<endl;
    for(int i=0;i<n;i++){
        mem[i]=-1;
    }
    cout<<"Ans: "<<maxProfitM(arr,n)<<endl;
    for (int j = 0; j <n; j++){
        cout << mem[j] << " ";
    }
    cout<<endl;
    cout<<cnt2<<endl;
    // cout<<"\nDiff in Calls: "<<cnt<<endl;
    return 0;
}