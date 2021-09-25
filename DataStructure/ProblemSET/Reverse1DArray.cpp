#include<iostream>
using namespace std;
void reverse(int *a,int li,int hi){
    while(li<hi){
        int temp=a[li];
        a[li]=a[hi];
        a[hi]=temp;
        li++;
        hi--;        
    }
}
void rotate1D(int *a,int k){
    int n=(sizeof(a)/sizeof(a[0]));
    cout<<n;
    k%=n;
    if(k<0){
        return;
    }
    // reverse parts
    reverse(a,0,n-k-1);
    reverse(a,n-k,n-1);
    //reverse whole array
    reverse(a,0,n-1);
}
int main(){
    int n,*a,k;
    cout<<"Enter the size: ";
    cin>>n;
    a=new int[n];
    cout<<"Enter the element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number of rotation: ";
    cin>>k;
    rotate1D(a,k);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}