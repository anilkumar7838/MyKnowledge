#include<iostream>
#include<map>
#include<list>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> adjList;
public:
    Graph(){
    }

    void addEdge(T u,T v,bool bidir=true){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
        }
    }

    void print(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto en:i.second){
                cout<<en<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph<string> g;
    g.addEdge("Putin","trump",false);
    g.addEdge("Putin","modi",false);
    g.addEdge("Putin","pope",false);
    g.addEdge("modi","trump");
    g.addEdge("modi","yogi");
    g.addEdge("yogi","Prabhu",false);
    g.addEdge("Prabhu","modi",false);
    g.print();

    return 0;
}