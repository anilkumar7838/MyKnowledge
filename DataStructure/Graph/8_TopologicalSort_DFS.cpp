// DFS Approach
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
    void DFSHelper(T src,map<T,bool>& visited,list<T> &ordering){
        visited[src]=true;
        for(auto p:adj[src]){
            if(!visited[p]){
                DFSHelper(p,visited,ordering);
            }
        }
        ordering.push_front(src);
        return;
    }

    void DFSTopologicalSort(){
        map<T,bool> visited;
        list<T> ordering;

        for(auto i:adj){
            if(!visited[i.first]){
                DFSHelper(i.first,visited,ordering);
            }
        }

        for(auto p:ordering){
            cout<<p<<" ";
        }


    }
};

int main(){
    Graph<string> g;
    g.addEgde("English","Programming Logic");   
    g.addEgde("Maths","Programming Logic");   
    g.addEgde("Programming Logic","Html");   
    g.addEgde("Programming Logic","Python");   
    g.addEgde("Programming Logic","Java");   
    g.addEgde("Programming Logic","JS");   
    g.addEgde("Python","Web dev");   
    g.addEgde("Html","Css");   
    g.addEgde("Css","JS");   
    g.addEgde("JS","Web dev");   
    g.addEgde("Java","Web dev");   
    g.DFSTopologicalSort();
    return 0;
}