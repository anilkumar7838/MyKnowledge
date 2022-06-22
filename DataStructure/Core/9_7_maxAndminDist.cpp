#include<iostream>
#include<algorithm>
using namespace std;

bool isFeasible(int mid ,int arr[],int n,int k){
    int pos=arr[0],ele=1;
    for(int i=0;i<n;i++){
        if(arr[i]-pos>mid){
            pos=arr[i];
            ele++;
            if(ele==k){
                return true;
            }
        }
    }
    return false;
}

int min_maxDistance(int arr[],int n,int k){
    sort(arr,arr+n);
    int lt=1,rt=arr[n-1],ans=-1;

    while(lt<rt){
        int mid=(lt+rt)/2;
        if(isFeasible(mid,arr,n,k)){
            ans=max(ans,mid);  
            lt=mid+1;
        }else{
            rt=mid;
        }
    }
}

int main(){
    int arr[]={1,2,5,7,8,11,12};
    // int arr[]={1,2,8,4,9};
    int n=7;  // size
    int k=3;  // pair
    cout<<min_maxDistance(arr,n,k)<<endl;
}