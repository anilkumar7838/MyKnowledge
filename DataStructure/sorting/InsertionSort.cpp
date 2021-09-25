#include<iostream>
using namespace std;

void insertionSort(int *a,int n){
    int key=0;
    int i,j;
    for(int i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 and a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
int main(){
    int n;
    int *a;
    cout<<"Enter the Size: ";
    cin>>n;
    a=new int[n];
    cout<<"Enter the Elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}