#include<iostream>
#include<queue>
#include<map>
#include<list>

using namespace std;

template <typename T>
class Graph{
    map<T,list<T>> AdjList;
    public:
    Graph(){}

    void addEdge(T u,T v,bool bidir=false){
        AdjList[u].push_back(v);
        if(bidir){
            AdjList[v].push_back(u);      
        }
    }

    void dfsHelper(T src,map<T,bool> &visited){
        cout<<src<<" ";
        visited[src]=true;
        for(T p: AdjList[src]){
            if(!visited[p]){
                dfsHelper(p,visited);
            }
        }
    }

    void  dfsPrint(T src){
        map<T,bool> visited;
        dfsHelper(src,visited);
    }

    void  bfsPrint(T src){
        map<T,bool> visited;
        queue<T> q;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            T node=q.front();
            q.pop();
            cout<<node<<" "; 
            for(T p:AdjList[node]){
                if(!visited[p]){
                    q.push(p);
                    visited[p]=true;
                }
            } 
        }
    }

    void PrintAdj(){
        for(auto i:AdjList){
            cout<<i.first<<"->";
            for(auto p: i.second){
                cout<<p<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph<string> g;

    g.addEdge("1","2",true);
    g.addEdge("1","4",true);
    g.addEdge("2","3",true);
    g.addEdge("2","5",true);
    g.addEdge("3","4",true);
    g.addEdge("4","5",true);
    g.addEdge("5","1",true);
    g.addEdge("5","6",true);
    // cout<<"AdjacencyList: "<<endl;
    // g.PrintAdj();
    // cout<<endl;

    g.dfsPrint("1");
    // g.bfsPrint("1");

}