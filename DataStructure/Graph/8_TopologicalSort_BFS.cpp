// Khann's Algo (BFS approach)
#include <iostream>
#include <queue>
#include <map>
#include <list>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> adj;

public:
    Graph() {}

    void addEgde(T u, T v, bool bidir = false)
    {
        adj[u].push_back(v);
        if (bidir)
        {
            adj[v].push_back(u);
        }
    }

    void DFSTopologicalSort()
    {
        map<T, bool> visited;
        map<T, int> indegree;
        queue<T> q;

        for (auto p : adj)
        {
            indegree[p.first] = 0;
            visited[p.first] = false;
        }
        for (auto i : adj)
        {
            for (auto p : adj[i.first])
            {
                indegree[p]++;
            }
        }

        for (auto p : adj)
        {
            T node = p.first;
            if (indegree[node] == 0)
            {
                q.push(node);
                visited[node] = true;
            }
        }

        while (!q.empty())
        {
            T node = q.front();
            cout << node << " ";
            q.pop();
            for (auto p : adj[node])
            {
                if (!visited[p])
                {
                    indegree[p]--;
                    if (indegree[p] == 0)
                    {
                        q.push(p);
                        visited[p] = true;
                    }
                }
            }
        }
    }
};

int main()
{
    Graph<string> g;
    g.addEgde("English", "Programming Logic");
    g.addEgde("Maths", "Programming Logic");
    g.addEgde("Programming Logic", "Html");
    g.addEgde("Programming Logic", "Python");
    g.addEgde("Programming Logic", "Java");
    g.addEgde("Programming Logic", "JS");
    g.addEgde("Python", "Web dev");
    g.addEgde("Html", "Css");
    g.addEgde("Css", "JS");
    g.addEgde("JS", "Web dev");
    g.addEgde("Java", "Web dev");
    g.DFSTopologicalSort();
    return 0;
}