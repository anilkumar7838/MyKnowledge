#include<bits/stdc++.h>
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

    int dfsHelper(T src,T end,map<T,bool> &visited,int count){
        static int minim=INT16_MAX,check=0;
        // cout<<src<<" ";
        if(src==end){
            check=1;
            return count;
        }
        count++;
        visited[src]=true;
        for(T p: AdjList[src]){
            if(!visited[p]){
                minim=min(minim,dfsHelper(p,end,visited,count));
            }
        }
        if(check==1){
            return minim;
        }else{
            return -1;
        }
    }

    void dfs(T src,T end){
        map<T,bool> visited;
        int count=0;
        cout<<dfsHelper(src,end,visited,count)<<endl;
    }

};

int main(){
	int n,x;
  	cin>>n;
    Graph<int> g;
    fflush(stdin);
    char ch;
  	for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        if(s.length()==0){
            i--;
            continue;
        }
      	stringstream ss(s);
      	string word;
        while(ss>>word){
            g.addEdge(i+1,atoi(word.c_str()));    
        }
    }

  	int st,en;
  	cin>>st>>en;
  	g.dfs(st,en);
  	
	return 0;
}