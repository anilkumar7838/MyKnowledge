#include<iostream>
#include<set>
// #include<Muti>
#include<unordered_set>
using namespace std;

int main(){
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(3);

    // for(auto i: s){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // // reverse
    // for(auto i=s.rbegin(); i!=s.rend(); i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;
    set<int,greater<int>> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(3);

    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;
}
 