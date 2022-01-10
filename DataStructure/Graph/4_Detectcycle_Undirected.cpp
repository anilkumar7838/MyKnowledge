//Undirected using BFS
#include<iostream>
#include<map>
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

    int detectCycleHelper(int src,bool *visited,int parent){
        visited[src]=true;
        for(auto p: adj[src]){
            if(!visited[p]){
                if(detectCycleHelper(p,visited,src)){
                    return true;
                }
            }
            else if(p!=parent){
                return true;
            }
        }
        return false;
    }

    int detectCycle(){
        bool *visited;
        int temp=0;
        visited=new bool[V];
        for(int i=0;i<V;i++){
            visited[i]=false;
        }
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(detectCycleHelper(i,visited,-1)){
                    return 1;
                }
            }   
        }
        return 0;
    }
};

int main(){
    Graph g(5);
    g.addEdge(1,2,true);
    g.addEdge(2,3,true);
    g.addEdge(0,1,true);
    g.addEdge(0,2,true);

    cout<<g.detectCycle()<<endl;

    return 0;
}