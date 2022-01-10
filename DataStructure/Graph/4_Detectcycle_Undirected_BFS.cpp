//Undirected using BFS
#include<iostream>
#include<queue>
#include<list>

using namespace std;
 
class Graph{
    int V;
    list<int>* adj;
public:
    Graph(int val){
        V=val;
        adj=new list<int>[val];
    }
    void addEdge(int u,int v,bool bidir=false){
        adj[u].push_back(v);
        if(bidir){
            adj[v].push_back(u);
        }

    }
    
    int detectCycle(int src){
        bool *visited;
        int *parent;
        visited=new bool[V];
        parent=new int[V];
        for(int i=0;i<V;i++){
            visited[i]=false;
        }
        visited[src]=true;
        queue<int> q1;
        parent[src]=-1;
        q1.push(src);
        while(!q1.empty()){
            int node=q1.front();
            q1.pop();
            for(auto p:adj[node]){
                if(visited[p] and parent[node]!=p){
                    return true;
                }
                if(!visited[p]){
                    q1.push(p);
                    parent[p]=node;
                    visited[p]=true;
                }
            }
        }
        return false;
    }
};

int main(){
    Graph g(5);
    g.addEdge(1,2,true);
    g.addEdge(2,3,true);
    g.addEdge(0,1,true);
    // g.addEdge(0,2,true);

    cout<<g.detectCycle(0)<<endl;

    return 0;
}