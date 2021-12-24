#include<iostream>
#include<set>
#include<vector>

using namespace std;

const int inf =1e7;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> dist(n+1,inf);
    vector<vector<pair<int,int>>> graph(n+1);
    for(int i=0;i<n;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    
    int src;
    cin>>src;
    dist[src]=0;
    set<pair<int ,int>> s;
    s.insert({0,src});

    while(!s.empty()){
        auto x=*(s.begin());
        s.erase(x);
        for(auto it: graph[x.second]){
            // cout<<"*"<<it.second<<endl;   
            if(dist[it.first]>dist[x.second]+it.second){
                s.erase({dist[it.first],it.first});
                dist[it.first]=dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(dist[i]<inf){
            cout<<dist[i]<<" "; 
        }
        else{
            cout<<"-1"<<" ";
        }
    }
}
/*

4 4
1 2 24 
1 4 20
3 1 3
4 3 12
1

*/