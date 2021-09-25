// Time complexity: O(N)
#include<iostream>
using namespace std;
void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void DNFsort(int arr[],int en){
    int mid=0;
    int st=0;
    while(mid<=en){
        if(arr[mid]==0){
            swap(arr,st,mid);
            st++;
            mid++;
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr,mid,en);
            en--;
        }
    }
}

int main(){
    int arr[]={1,0,0,1,2,2,0,1,2,2,1,0};
    DNFsort(arr,11);
    for(int i=0;i<12;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
return 0;
}