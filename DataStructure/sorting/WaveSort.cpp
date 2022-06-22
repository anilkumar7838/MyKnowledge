// Time Complexity: O(N);
#include<iostream>
using namespace std;

void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void WaveSort(int arr[],int n){
    for(int i=1;i<n;i+=2){      //O(n)
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1] and i<=n-2){
            swap(arr,i,i+1);
        }
    }
}

int main(){
int arr[]={1,2,2,2,5,6,7};
WaveSort(arr,7);
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}