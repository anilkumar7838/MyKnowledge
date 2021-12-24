#include <iostream>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
    bool *DFS(int v);
    Graph revgraph();
    bool isConnected();
};
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}
void Graph::BFS(int s)
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++){
        visited[i] = false;
    }
    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    list<int>::iterator i;
    while (!queue.empty()){
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
        for (i = adj[s].begin(); i != adj[s].end(); ++i){
            if (!visited[*i]){
            visited[*i] = true;
            queue.push_back(*i);
            }
        }
    }
}

void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i){
        if (!visited[*i])
        DFSUtil(*i, visited);
    }
}

bool *Graph::DFS(int v){
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++){
        visited[i] = false;
    }
    DFSUtil(v, visited);
    return visited;
}

Graph Graph::revgraph(){
    Graph f(V);
    for (int i = 0; i < V; i++){
    list<int>::iterator it;
        for (it = this->adj[i].begin(); it != this->adj[i].end(); ++it){
            f.addEdge(*it, i);
        }
    }
    return f;
}

bool Graph::isConnected()
{
    Graph g2 = this->revgraph();
    bool *v1 = this->DFS(0);
    bool *v2 = g2.DFS(0);
    cout << endl;
    for (int i = 0; i < V; i++){
        if (!(v1[i] || v2[i])){
            return false;
        }
    }
    return true;
}

int main(){
    Graph g(5);
    g.addEdge(0, 1);
    // g.addEdge(1,0);
    g.addEdge(0, 2);
    // g.addEdge(2,0);
    g.addEdge(1, 2);
    // g.addEdge(2,1);
    g.addEdge(1, 3);
    // g.addEdge(3,1);
    g.addEdge(1, 4);
    // g.addEdge(4,1);
    g.addEdge(2, 3);
    // g.addEdge(3,2);
    g.addEdge(3, 4);
    // g.addEdge(4,3);

    cout << "Following is Breadth First Traversal "<< "(starting from vertex 0) \n";
    g.BFS(0);
    cout << endl;
    
    // g.DFS(0);
    if (g.isConnected()){
        cout << "Graph is connected" << endl;
    }
    else{
        cout << "Graph is not connected" << endl;
    }
    return 0;
}