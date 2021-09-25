#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> stock(vector<int> v){
    stack<pair<int,int>> s1;
    vector<int> ans;
    for(int i=0;i<v.size();i++){
    int count=1;
        while(!s1.empty() && v[i]>=s1.top().first)
        {
            count+=s1.top().second;
            s1.pop();
        }
        s1.push({v[i],count});
        ans.push_back(count);
    }
    return ans;
}
int main(){
    vector<int> v1={100,80,60,70,60,75,85};
    vector<int> v2;
    v2=stock(v1);
    for(auto ele: v2){
        cout<<ele<<" ";
    }
    cout<<endl;
return 0;
}