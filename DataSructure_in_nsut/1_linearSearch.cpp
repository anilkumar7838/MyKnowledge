#include<iostream>
using namespace std;

int main(){
    int *a,n,x;
    cout<<"enter the size: ";
    cin>>n;
    a=new int[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // search
    cout<<"Enter the element you want to search: ";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<"Element "<<a[i]<<" is found at: "<<(i+1)<<endl;
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"Element is not found"<<endl;
    }
    return 0;
}