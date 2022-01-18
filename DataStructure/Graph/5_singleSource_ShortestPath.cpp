//Single source shortest path (BFS Approach)

#include<iostream>
#include<limits>
#include<map>
#include<queue>
#include<list>
using namespace std;

template <typename T>
class Graph{
    map<T,list<T>> adj;
    public:
    Graph(){}

    void addEdge(T u,T v,bool bidir=true){
        adj[u].push_back(v);
        if(bidir){
            adj[v].push_back(u);
        }
    }

    void SSSp(T src){
        queue<T> q;
        map<T,int> dist;

        for(auto p : adj){
            dist[p.first]=INT32_MAX;
            // cout<<p.first<<" ";
        }
        
        q.push(src);
        dist[src]=0;
        // int parent=src;
        while(!q.empty()){
            T node = q.front();
            q.pop();

            for(auto p:adj[node]){
                if(dist[p]==INT32_MAX){
                    dist[p]=dist[node]+1;
                    q.push(p);
                }
            }
        }

        for(auto i: adj){
            cout<<i.first<<": "<<dist[i.first]<<endl;
        }
        cout<<endl;

    }

};


int main(){
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(3,4);

    int src=0;
    g.SSSp(src);
    return 0;
}