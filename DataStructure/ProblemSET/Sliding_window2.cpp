// o(n)
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> nge(vector<int> a){     // important concept of next greater
    vector<int> v(a.size());
    stack<int> s;
    v[a.size()-1]=a.size();
    s.push(a.size()-1);
    for(int i=v.size()-2;i>=0;i--){
        while(!s.empty() and a[s.top()]<=a[i]){
            s.pop();
        }
        if(s.empty()){
            v[i]=a.size();
        }
        else{
            v[i]=s.top();
        }
        s.push(i);
    }
    return v;
}
int main(){
    int n,k;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the pair: ";
    cin>>k;
    vector<int> v1(n),v2(n);
    cout<<"Enter the element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    v2=nge(v1);
    int j=0;
    for(int i=0;i<=n-k;i++){
        if(j<i){
            j=i;
        }       
        while(v2[j]<i+k){
            j=v2[j];
        }
        cout<<v1[j]<<" ";
    }cout<<endl;
}