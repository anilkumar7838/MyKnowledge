#include<iostream>
#include<queue>
#include<map>
#include<list>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> adj;
    public:
    Graph(){}

    void addEgde(T u,T v,bool bidir=false){
        adj[u].push_back(v);
        if(bidir){
            adj[v].push_back(u);
        }
    }
    void DFSHelper(T src,map<T,bool>& visited){
        cout<<src<<" ";
        visited[src]=true;
        for(auto p:adj[src]){
            if(!visited[p]){
                DFSHelper(p,visited);
            }
        }
        return;
    }

    void DFS(T src){
        map<T,bool> visited;
        int components=1;
        DFSHelper(src,visited);

        for(auto i:adj){
            if(!visited[i.first]){
                components++;
                cout<<endl;
                DFSHelper(i.first,visited);
            }
        }
        cout<<endl;
        cout<<"Components is: "<<components<<endl;
    }
};

int main(){
    Graph<string> g;
    //component 1    
    g.addEgde("delhi","Rajasthan");
    g.addEgde("delhi","UP");
    g.addEgde("UP","Bihar");

    //component 2    
    g.addEgde("Mumbai","tamilNadu");
    g.addEgde("Mumbai","Odissa");

    //component 3    
    g.addEgde("Andamann & Nicobar","Lakshawdeep");

    string src="delhi";
    g.DFS(src);
    return 0;
}