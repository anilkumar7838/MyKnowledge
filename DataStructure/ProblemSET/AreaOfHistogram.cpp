// Brute force
#include<iostream>
using namespace std;

int main(){
    int n,area=0,len=0,*a;
    cout<<"Enter the size"<<endl;
    cin>>n;
    a=new int[n];
    cout<<"Enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){       //    O(n^2)
        int minh=INT_MAX;
        for (int j=i;j<n;j++){
            minh=min(minh,a[j]);
            len=j-i+1;
            area=max(area,minh*len);
        }
    }
    cout<<"Maximum Area is: "<<area;
return 0;
}