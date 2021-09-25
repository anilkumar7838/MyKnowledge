#include<iostream>
using namespace std;
int MiniPos(int *a,int n,int idx){
        int small=a[idx],pos=idx;
        for(int j=idx+1;j<n;j++){
            if(small>a[j]){
                small=a[j];
                pos=j;
            }
        }
    return pos;
}
void selectionSort(int *a,int n){
    for(int i=0;i<n-1;i++){
        int pos=MiniPos(a,n,i);
        int temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
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
    selectionSort(arr,n);
    cout<<"After sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
