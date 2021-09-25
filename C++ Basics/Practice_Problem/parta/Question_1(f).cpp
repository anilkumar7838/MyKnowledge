// Pattern 1(f)
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,s;
	for(i=1;i<=5;i++)
	{   int num=i-1;
		 for(j=1;j<=5-i;j++)
		 {
		     cout<<"  ";	
		 }
		 
		 for(k=1;k<=i;k++)
		 {
		     cout<<k<<" ";
		 }		 
		 for(s=1;s<i;s++)
		 {
		 	  cout<<num<<" ";
		 	  num--;
		 }
		 cout<<"\n";
	}
}
