/*
 * C++ Program to Find Transitive Closure of a Graph
 */
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void transitiveClosure(int &a[],int n)
{
    int b[n][n], i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
        }
    }
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                b[i][j] = b[i][j] || (b[i][k] && b[k][j]);
            }
        }
    }
    printSolution(b,n);
}
void printSolution(int n,int b[][n])
{
    cout<<"Following matrix is transitive closure of the given graph\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }
}
int main()
{
	int n,**a;
    cout<<"enter the size of square matrix"<<endl;
    cin>>n;
    a = new int*[n];
    for(int i=0;i<n;i++){
    	a[i]=new int[n];
    }
    cout<<"enter 1 or 0 for your ordered pair";
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cout<<"{"<<i<<","<<j<<"}"<<endl;
    		cin>>a[i][j];
	    }
    }
   int graph[4][4] = { {1, 1, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 1, 1},
                       {0, 0, 0, 1}
                     };
    transitiveClosure(graph,n);
}
