#include<bits/stdc++.h>
using namespace std;
int N=1e3+2;

vector<vector<int>> adj(N);
vector<bool> vis(N);

void dfs(int node){
    vis[node]=1;
    cout<<node<<" ";
    vector<int> :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(vis[*it]);
        else{
            dfs(*it);
        }
    }
}

void bfs(int st){
    queue<int> q;
    q.push(st);
    vis[st]=true;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";

        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }
        }
    }
}

int main(){
    int n,m;
    cout<<"Enter size of nodes and edges"<<endl;
    cin>>n>>m;
    cout<<"Enter Vertex: "<<endl;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(int x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<"BFS : ";
    bfs(1);
    cout<<endl;
    // cout<<"DFS : ";
    // dfs(1);
    // cout<<endl;    

    return 0;
}