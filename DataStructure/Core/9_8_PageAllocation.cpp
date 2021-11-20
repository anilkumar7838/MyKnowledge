#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[],int n, int k,int min){
    int sum=0,st=1;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        if((arr[i]+sum)>min){
            sum=arr[i];
            st++;
            if(st>k){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}

int pageAlloc(int arr[],int n,int k){
    int sum=0;
    if(n<k){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int lt=0,rt=sum,ans=INT32_MAX;
    while(lt<=rt){
        int mid=(lt+rt)/2;
        if(isPossible(arr,n,k,mid)){
            ans=min(ans,mid);
            rt=mid-1;
        }else{
            lt=mid+1;
        }

    }
    return ans;
}

int main(){
    int arr[]={12,34,56,78,89,90};
    // int arr[]={12,34,56,78,90,42,53};
    // int arr[]={12,34,67,90};
    // int arr[]={12,34,56,78,89,90};
    int n=6,k=2;

    cout<<pageAlloc(arr,n,k);
    return 0;

}
