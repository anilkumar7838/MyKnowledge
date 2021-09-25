#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],i,n;
	cout<<"enter the size"<<endl;
	cin>>n;
	cout<<"enter the ordered pair"<<endl;
    for(i=0;i<n;i++)
    {
	    for(int j=0;j<2;j++)
	   {
	    	cin>>a[i][j];
	   }
	     
    }
    cout<<"(";
    for(i=0;i<n;i++)
    {
    	cout<<"(";
	    for(int j=0;j<2;j++)
	   {
	    	cout<<a[i][j]<<",";
	   } 
	   cout<<"\b),"; 
    }
    cout<<"\b)";
}
