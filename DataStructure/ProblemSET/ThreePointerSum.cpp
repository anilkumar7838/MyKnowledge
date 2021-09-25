#include<iostream>
#include<vector>
using namespace std;
vector<int> ThreeSum(vector<int> v,int s){
    int i=0,j=0,k=v.size()-1,flag=0;
    vector<int> ans(3);
    for(auto& i: ans){
        i=-1;
    }
    for(int i=0;i<v.size();i++){
        while(j<k){
            int sum=v[i]+v[j]+v[k];
            if(s==sum){
                flag=1;
                ans[0]=i+1;
                ans[1]=j+1;
                ans[2]=k+1;
            }
            if(s>sum){
                j++;
            }
            else{
                k--;
            }
        }
    }
    if(flag==0){
        cout<<"target is not present in the list"<<endl;
    }
    return ans;
}
int main(){
    int n,s;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> v1(n),v2(3);
    for(auto& i: v1){
        cin>>i;
    }
    cout<<"Enter the target: ";
    cin>>s;
    v2=ThreeSum(v1,s);
    for(auto i: v2){
        cout<<i<<" ";
    }

return 0;
}   