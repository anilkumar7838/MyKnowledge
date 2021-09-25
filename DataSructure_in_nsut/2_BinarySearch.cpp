#include<iostream>
using namespace std;

void binarySearch(int *a,int n){
    int x,first=0,last=n-1,count=0,mid;
    cout<<"Enter the element you want to find: ";
    cin>>x;
    while(first<=last){
        mid=(first+last)/2;
        if(a[mid]>x){
            last=mid-1;
        }
        if(a[mid]<x){
            first=mid+1;
        }
        if(a[mid]==x){
            count++;
            break;
        }
    }
    if(count){
        cout<<"The element "<<a[mid]<<" is found at position: "<<mid+1;
    }
    else{
        cout<<"The element is not found"<<endl;
    }
}

int main(){
    int *a,n;
    cout<<"Enter the size of a array: ";
    cin>>n;
    a=new int[n];
    cout<<"Enter the Sorted elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    binarySearch(a,n);
}