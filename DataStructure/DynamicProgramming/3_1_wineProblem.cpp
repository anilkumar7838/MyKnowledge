/*
    sell all wines with different cost
    and only select the end points(bottle)
    maximize the profit
    every day wine value increase by initial value
*/
#include<iostream>
using namespace std;

int mem[100][100];

int maxProfitM(int arr[],int day,int st,int en){
    if(st>en){
        return 0;
    }
    if(mem[st][en]!=-1){
        return mem[st][en]; 
    }
    int ans1=arr[st]*day+maxProfitM(arr,day+1,st+1,en);
    int ans2=arr[en]*day+maxProfitM(arr,day+1,st,en-1);
    int ans=max(ans1,ans2);
    mem[st][en]=ans;
    return ans;
}

int maxProfit(int arr[],int day,int st,int en){
    if(st>en){
        return 0;
    }
    int value1=arr[st]*day+maxProfit(arr,day+1,st+1,en);
    int value2=arr[en]*day+maxProfit(arr,day+1,st,en-1);
    return max(value1,value2);
}

int main(){
    int arr[]={2,3,5,1,4};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mem[i][j]=-1;
        }
    }
    cout<<maxProfit(arr,1,0,4)<<endl;
    cout<<maxProfitM(arr,1,0,4)<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << mem[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}