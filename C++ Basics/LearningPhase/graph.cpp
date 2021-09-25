#include<iostream>
using namespace std;
class Graph{
	int **adjmat;
	int*deg;
	int v;
	public:
	Graph(int n){
		v=n;
		deg=new int[v];
		adjmat=new int*[v];
		for(int i=0;i<v;i++)
				adjmat[i]=new int [v];
	}
	void setmat()
	{
		char ch;
		cout<<"Enter y or Y if yes : "<<endl;
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				if(i<=j)
				{
	
				cout<<"does the path  ("<<i<<","<<j<<") exists? ";
				cin>>ch;
				if(ch=='y'||ch=='Y')
					adjmat[i][j]=1;
				else
					adjmat[i][j]=0;
				adjmat[j][i]=adjmat[i][j];
				}
				
			}
			cout<<endl;
		}
	}
	void getmat()
	{
		cout<<"Entered adjacency matrix "<<endl;
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				cout<<" "<<adjmat[i][j];
			}
			cout<<endl;
		}
	}
	void degree()
	{
		for(int i=0;i<v;i++)
		{
			deg[i]=0;
		}
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
				deg[i]+=adjmat[i][j];
		}
		
	}
	void isComplete()
	{

		int flag=0;
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				if(i!=j)
				{
					if(adjmat[i][j]==0)
						flag++;		
				}
					
			}
		}
		if(flag==0)
			cout<<"The given graph is COMPLETE "<<endl;
		else
			cout<<"The given graph is NOT COMPLETE "<<endl;
	}
	void isCyclic()
	{
		int flag=0;
		for(int i=0;i<v;i++)
		{
			if(deg[i]==2)
				flag++;
		}
		if(flag==v)
			cout<<"The given graph is CYCLIC "<<endl;
		else
			cout<<"The given graph is NOT CYCLIC "<<endl;;	
	}
	void isWheel()
	{
		int n=v-1;
		int flag1=0,flag2=0;
		for(int i=0;i<v;i++)
		{
			if(deg[i]==3)
				flag1++;
			else if(deg[i]==n&&flag2==0)
			{
				flag1++;
				flag2++;
			}
			
		}
		if(flag1==v)
			cout<<"The given graph is A WHEEL "<<endl;
		else
			cout<<"The given graph is NOT A WHEEL "<<endl;
	}
	void isQn()
	{
		int flag=1;
		for(int i=0;i<v;i++)
		{
			if(deg[i]!=v)
				flag=0;
		}
		if(flag!=0)
				cout<<"The given graph is an N-D HYPERCUBE "<<endl;
		else
			cout<<"The given graph is NOT an N-D HYPERCUBE"<<endl;
	}
	void isEuler()
	{
		int flag1=0,flag2=0;
		for(int i=0;i<v;i++)
		{
			if(deg[i]!=0&&deg[i]%2==0)
				flag1++;
			else if(deg[i]%2!=0&&flag2<2)
			{
				flag1++;
				flag2++;
			}
		}
		if(flag1==v-2&&flag2==2)
			cout<<"The given graph is A EULER PATH "<<endl;
		else
			cout<<"The given graph is NOT A EULER PATH "<<endl;
		if(flag1==v)	
			cout<<"The given graph is A EULER CIRCUIT "<<endl;
		else
			cout<<"The given graph is NOT A EULER CIRCUIT "<<endl;
	}
	void isHamiltonian()
	{
		int flag=0;
		for(int i=0;i<v;i++)
		{
			if(deg[i]<v/2)
				flag=1;
		}
		if(flag=0)
				cout<<"The given graph is an HAMILTONIAN CIRCUIT "<<endl;
		else
			cout<<"HAMILTONIAN CIRCUIT CANNOT be determined"<<endl;
	}
	void isTree()
	{
		int e=0;
		bool isEdgev=false,isIsolated=false;
		//vcheck if edges=v-1
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				if(i<=j)
				{
						if(adjmat[i][j]==1)
							e++;
				}
				
			}
		}
		if(e==v-1)
			isEdgev=true;
		//check if any isolated vertex
		for(int i=0;i<v;i++)
		{
			if(deg[i]==0)
				isIsolated=true;
		}
		if(isEdgev&!isIsolated)
			cout<<"The given graph is A TREE"<<endl;
		else
			cout<<"The given graph is NOT A TREE "<<endl;
			
	}
	void isSpanningConnected()
	{
		int t[v][v];
		int i,j,k;
		for(i=0;i<v;i++)
		{
			for(j=0;j<v;j++)
				t[i][j]=adjmat[i][j];
		}
		for(k=0;k<v;k++)
		{
			for(i=0;i<v;i++)
			{
				for(j=0;j<v;j++)
				{
					if(t[i][k]==1&&t[k][j]==1)
						t[i][j]=1;
				}
			}
		}
		for(i=0;i<v;i++)
		{
			for(j=0;j<v;j++)
			{
				if(t[i][j]==0)
				{
					cout<<"NO CONNECTED COMPONENTS.therefore,NO SPANNING TREE exists";
					return; ;
				}
			}
		}
		cout<<"HAS CONNECTED COMPONENTS. therefore,HAS A SPANNING TREE";
	}
	
};
int main()
{
	cout<<"Enter number of vertices: ";
	int n;
	cin>>n;
	Graph g1(n);
	g1.setmat();
	g1.getmat();
	g1.isComplete();
	g1.degree();
	g1.isCyclic();
	g1.isWheel();
	g1.isEuler();
	g1.isQn();
	g1.isHamiltonian();
	g1.isTree();
	g1.isSpanningConnected();
}
