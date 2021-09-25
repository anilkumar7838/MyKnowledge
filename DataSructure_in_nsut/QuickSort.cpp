//Time Compexity : 
// best case: O(nlogn)
// worst case: O(n^2)
#include<iostream>
using namespace std;

void Swap(int *a,int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partition(int* arr,int l,int r){
    int pivot=arr[r];
    int i=-1;
    for(int j=0;j<r;j++){
        if(arr[j]<pivot){
            i++;
            Swap(arr,i,j);
        }
    }
    Swap(arr,i+1,r);
    return i+1;
}
void QuickSort(int *arr,int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);
        QuickSort(arr,l,pi-1);
        QuickSort(arr,pi+1,r);
    }
}

int main(){
    int n,*arr;
    cout<<"Enter the size: ";
    cin>>n;
    arr=new int[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int arr[]={2,4,6,3,4,1,7,9,4,5};
    QuickSort(arr,0,n-1);
    cout<<"After sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}