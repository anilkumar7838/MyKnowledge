#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main(){
    map<string,int> m;
    // insert
    m.insert(make_pair("Mango",45));

    pair<string,int> p;
    p.first="Apple";
    p.second=34;
    m.insert(p);

    m["Banana"]=20;

    string fruits;
    cin>>fruits;
    
    //search
    auto it=m.find(fruits);
    if(it!=m.end()){
        cout<<"Price of Fruit is: "<<m[fruits]<<endl;
    }
    else{
        cout<<"Fruit is not Present"<<endl;
    }

    cout<<m.count(fruits)<<endl; //count the key-value pair

    if(m.count("Banana")){
        cout<<"Price of Fruit is: "<<m[fruits]<<endl;
    }
    else{
        cout<<"Fruit is not Present"<<endl;
    }
    //update
    m[fruits] +=30;
    m["Pineapple"]=230;
    m["Lichi"]=250;

    // erase
    // m.erase(fruits); // enter a key;

    // Sort in lexographical-->start with capital letter
    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}