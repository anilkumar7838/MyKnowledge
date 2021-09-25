// best case: O(n) and worst case: O(n^2)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    // vector<int> v={0,1,0,2,0,1,2,3,0,2,0,1,0,3};
    vector<int> nge(v.size());
    stack<int> s;

    //next greater or equal
    s.push(v.size()-1);
    nge[v.size()-1]=v.size();
    for(int i=v.size()-2;i>=0;i--){
        while(!s.empty() and v[i]>v[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nge[i]=v.size();
        }
        else{
            nge[i]=s.top();
        }
        s.push(i);
    }

    // for(int i=0;i<v.size();i++){
    //    cout<<nge[i]<<" ";
    // }
    // cout<<endl;

    //code
    int i=0,ans=0;
    int count=0;
    while(i<v.size()){
        if(nge[i]==v.size()){
            i++;
        }
        else{
            for(int k=i+1;k<nge[i];k++){
                count=v[i]-v[k];
                ans+=(count);
            }
            i=nge[i];
        }
    }
    cout<<ans;
    return 0;
}
