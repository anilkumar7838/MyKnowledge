#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main(){
/*
    7
    b batman
    a apple
    b boat
    a angry
    c cat
    d dog
    e elephant
*/    
    multimap<char,string> m;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));

    }
    
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    auto it=m.begin();
    m.erase(it);
    // m.erase('b'); // delete all with key-'b'

    // auto it2=m.lower_bound('b'); //batman
    // auto it3=m.upper_bound('d'); // elephant
    // cout<<it3->second<<" ,"<<endl;
    // for(auto it4=it2;it4!=it3;it4++){
    //     cout<<it4->second<<" ,"<<endl;
    // }

    auto f =m.find('c');
    int f =m.count('c');












    // insert

    // pair<string,int> p;
    // p.first="Apple";
    // p.second=34;
    // m.insert(p);

    // m["Banana"]=20;

    // string fruits;
    // cin>>fruits;
    
    // //search
    // auto it=m.find(fruits);
    // if(it!=m.end()){
    //     cout<<"Price of Fruit is: "<<m[fruits]<<endl;
    // }
    // else{
    //     cout<<"Fruit is not Present"<<endl;
    // }

    // cout<<m.count(fruits)<<endl; //count the key-value pair

    // if(m.count("Banana")){
    //     cout<<"Price of Fruit is: "<<m[fruits]<<endl;
    // }
    // else{
    //     cout<<"Fruit is not Present"<<endl;
    // }
    // //update
    // m[fruits] +=30;
    // m["Pineapple"]=230;
    // m["Lichi"]=250;

    // // erase
    // // m.erase(fruits); // enter a key;

    // // Sort in lexographical-->start with capital letter
    // for(auto it=m.begin(); it!=m.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    
    return 0;
}