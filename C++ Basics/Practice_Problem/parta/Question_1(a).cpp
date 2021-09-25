// Pattern 1(a)
#include<iostream>
using namespace std;
int main()
{
	int i,j,num=1;
	for(i=1;i<=4;i++)
     {
     	for(j=1;j<=i;j++)
		 {
		 	cout<<num<<" ";
			 num++;		 
		  }
		  cout<<"\n";
	 }
	return 0; 	
		 
}
