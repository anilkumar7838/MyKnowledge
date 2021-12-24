#include <iostream>
#include <iomanip> 
using namespace std;

#define n 5
#define INF 10000

void print_matrix(int matrix[][n]) 
  {
    for (int i = 0; i < n; i++) 
    {
      for (int j = 0; j < n; j++) 
      {
          if(matrix[i][j]==INF)
            cout<<setw(5)<<"INF"<<setw(3);
          else
            cout<<setw(5)<<matrix[i][j]<<setw(3);
      }
      cout<<endl;
    }
  }
void print_path(int path[][n],int v,int u)
{
    if (path[v][u] == v) {
        return;
    }
    print_path(path, v, path[v][u]);
    cout << path[v][u] << ", ";
}

void print_solution(int cost[][n], int path[][n])
{
    
    for (int v = 0; v < n; v++)
    {
        for (int u = 0; u < n; u++)
        {
            if (u != v && path[v][u] != -1)
            {
                cout << "The shortest path from " << v+1 << " to " << u+1 << " is ["
                    << v << ", ";
                print_path(path, v, u);
                cout << u << "]" << endl;
            }
        }
    }
    
}

void floyd_warshall(int adjMatrix[][n])
{
 
    int cost[n][n];
    int path[n][n];
    
    for (int v = 0; v < n; v++)
    {
        for (int u = 0; u < n; u++)
        {
            
            cost[v][u] = adjMatrix[v][u];
 
            if (v == u) {
                path[v][u] = 0;
            }
            else if (cost[v][u] != INF) {
                path[v][u] = v;
            }
            else {
                path[v][u] = -1;
            }
        }
    }
 
    
    for (int k = 0; k < n; k++)
    {
        for (int v = 0; v < n; v++)
        {
            for (int u = 0; u < n; u++)
            {
                
                if (cost[v][k] != INF && cost[k][u] != INF
                    && cost[v][k] + cost[k][u] < cost[v][u])
                {
                    cost[v][u] = cost[v][k] + cost[k][u];
                    path[v][u] = path[k][u];
                }
            }
 
          
            if (cost[v][v] < 0)
            {
                cout << "Negative-weight cycle found!!";
                return;
            }
        }
    }
 
    print_matrix(cost);
    print_solution(cost, path);
}
  

int main(){
    int graph[n][n] =   {   {0, 6, 8, INF, -4},
                            {INF, 0, INF, 1, 7},
                            {INF, 4, 0, INF, INF},
                            {2, INF, -5, 0, INF},
                            {INF, INF, INF, 3, 0}
                        };

    print_matrix(graph);  
    cout<<endl<<endl;  
    floyd_warshall(graph);
}