#include<iostream>
#include<list>
using namespace std;

class Node{
    int V;
    list<int> *l;
    public:
    Node(int v){
        V=v;
        l=new list<int>[v];
    }

    void addEdge(int u,int v, bool bidir=true){
        l[u].push_back(v);
        if(bidir){
            l[v].push_back(u);
        }
    }

    void printAdjList(){
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(int vertex: l[i]){
                cout<<vertex<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    Node n(5);
    n.addEdge(0,1);
    n.addEdge(0,4);
    n.addEdge(4,3);
    n.addEdge(1,4);
    n.addEdge(1,2);
    n.addEdge(2,3);
    n.addEdge(1,3);
    
    n.printAdjList();
    return 0;
}