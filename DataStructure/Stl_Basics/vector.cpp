#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    vector<int>::iterator itr;
    for(itr=v.begin();itr<v.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    for(auto element : v) {
        cout<<element<<" ";
    }cout<<endl;

    v.pop_back();//  1 2 3
    vector<int> v2(3,4);   // means: 4 4 4
    swap(v,v2);
	cout<<"vector 1: ";
     for(auto element : v) {
         cout<<element<<" ";
     }cout<<endl;
     cout<<"vector 2: ";
     for(auto element : v2) {
         cout<<element<<" ";
     }cout<<endl;
	cout<<"vector 2: ";
	sort(v2.begin(),v2.end());
	for(auto element : v2) {
         cout<<element<<" ";
     }cout<<endl;
    return 0;
}
