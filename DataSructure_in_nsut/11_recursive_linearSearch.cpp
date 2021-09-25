#include<iostream>
using namespace std;
int recursive_linearSearch(int *a,int n,int idx,int item){
    if(idx>=n){
        return 0;
    }
    if(a[idx]==item){
        return idx+1;
    }
    recursive_linearSearch(a,n,idx+1,item);
}
int main(){
    int *a,n,x;
    cout<<"enter the size: ";
    cin>>n;
    a=new int[n];
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element you want to find"<<endl;
    cin>>x;
    int ans= recursive_linearSearch(a,n,0,x);
    if(ans==0){
        cout<<"element not find"<<endl;
    }
    else{
        cout<<"The element "<<x<<" is find at pos: "<<ans<<endl;
    }
}