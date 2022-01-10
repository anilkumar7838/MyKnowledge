#include<iostream>
#include<map>
#include<list>
#include<queue>

using namespace std;

template<typename T>
class Graph{
    map<T,list<int>> adj;
    public:
    Graph(){}
    void addEdge(int u,int v,bool bidir=false){
        adj[u].push_back(v);
        if(bidir){
            adj[v].push_back(u);
        }
    }

    int SSSp(T src,T dest){
        queue<int> q;
        map<T,int> dist; 
        map<T,int> parent; 
        for(auto p:adj){
            dist[p.first]=INT32_MAX;
        }
        q.push(src);
        dist[src]=0;
        parent[src]=-1;
        while(!q.empty()){
            T node = q.front();
            q.pop();
            for(auto p:adj[node]){
                if(dist[p]==INT32_MAX){
                    dist[p]=dist[node]+1;
                    parent[p]=node;
                    q.push(p);
                }
            }
        }
        // for(auto i: adj){
        //     cout<<i.first<<": "<<dist[i.first]<<endl;
        // }
        for(int i=dest;i>src;){
            cout<<i<<" <-- "; 
            i=parent[i]  ;
        }
        cout<<src<<endl;

        return dist[dest];
    }

};



int main(){
    Graph<int> g;
    int board[50]={0};

    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=-10;
    board[32]=-2;
    board[34]=-22;


    for(int u=0;u<=36;u++){
        for(int v=1;v<=6;v++){
            int cost=u+v+board[u+v];
            g.addEdge(u,cost);
        }

    }

    cout<<g.SSSp(0,36);
}