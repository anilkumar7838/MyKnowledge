// for directed graph
#include<iostream>
#include<map>
#include<stack>
#include<list>
#include<vector>
using namespace std;


class Graph{
    int size;
    list<int>* l;
public:
    Graph(int val){
        size=val;
        l=new list<int>[size];
    }
    void addEdge(int u,int v,bool bidir=false){
        l[u].push_back(v);
        if(bidir){
            l[v].push_back(u);
        }
    }
    void printAdj(){
        for(int i=0;i<size;i++){
            cout<<i<<"->";
            for(auto p: l[i]){
                cout<<p<<",";
            }
        }
    cout<<endl;
    }

    int dfsApproach(int src,map<int,bool>& visited,map<int,bool> &st){
        visited[src]=true;
        st[src]=true;
        for(auto p:l[src]){
            if(!visited[p] and dfsApproach(p,visited,st) || st[p]){
                return 1;
            }
        }
        st[src]=false;
        return 0;
    }

    int detectCycle(int src){

        map<int ,bool> visited;
        map<int ,bool> st;
        bool cycledetected;
        for(int i=src;i<size;i++){
            if(!visited[i]){
                cycledetected=dfsApproach(i,visited,st);
            }
            if(cycledetected){
                return true;
            }
        }
        return false;

    }
};

int main(){
    Graph g(5);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,0);
    // g.addEdge(0,1);

    cout<<g.detectCycle(1);
    return 0;
}