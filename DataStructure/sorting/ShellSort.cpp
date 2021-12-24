#include<iostream>
using namespace std;


void shellSort(int arr[],int n){
    for(int gap=n/2;gap>0;gap/=2){
        for(int i=gap;i<n;i++){
            int temp=arr[i];
            int j=i;
            for(;(j>=gap and arr[j-gap]>temp); j-=gap){
                arr[j]=arr[j-gap];
            }
            arr[j]=temp;
        }
    }
}

int main(){
    int arr[]={12,34,56,75,32,21,35,47,9};
    shellSort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;

}
