#include <iostream>
#include <set>
#include <list>
#include <unordered_map>

using namespace std;

template <typename T>
class Graph
{
    unordered_map<T, list<pair<T, int>>> adj;

public:
    Graph() {}

    void addEdge(T u, T v, int dist, bool bidir = true)
    {
        adj[u].push_back({v, dist});
        if (bidir)
        {
            adj[v].push_back({u, dist});
        }
    }

    void PrintAdj()
    {
        for (auto i : adj)
        {
            T node = i.first;
            cout << node << "->";
            for (auto p : adj[node])
            {
                cout << p.first << ",";
            }
            cout << endl;
        }
    }

    void DijikstraAlgo(T src)
    {
        unordered_map<T, int> dist;
        set<pair<T, int>> s;

        for (auto p : adj)
        {
            cout << "*";
            dist[p.first] = INT32_MAX;
        }
        s.insert({src, 0});
        dist[src] = 0;

        while (!s.empty())
        {
            auto x = (*s.begin());
            s.erase(x);

            for (auto p : adj[x.first])
            {
                if (dist[x.first] + p.second < dist[p.first])
                {
                    s.erase({p.first, dist[p.first]});
                    dist[p.first] = dist[x.first] + p.second;
                    s.insert({p.first, dist[p.first]});
                }
            }
        }
        for (auto p : dist)
        {
            cout << p.first << " " << p.second << endl;
        }
    }
};

int main()
{
    Graph<string> g;
    g.addEdge("Amritsar", "delhi", 1);
    g.addEdge("Amritsar", "jaipur", 4);
    g.addEdge("jaipur", "delhi", 2);
    g.addEdge("jaipur", "mumbai", 8);
    g.addEdge("bhopal", "agra", 2);
    g.addEdge("mumbai", "bhopal", 3);
    g.addEdge("agra", "delhi", 1);
    // g.PrintAdj();
    // cout<<endl;
    g.DijikstraAlgo("Amritsar");

    return 0;
}