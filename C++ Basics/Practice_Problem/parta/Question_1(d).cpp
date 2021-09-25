// Pattern 1(d)
#include<iostream>
using namespace std;
int main()
{
	 	int i,j,k;
	 	for(i=1;i<=5;i++)           //loop for noo. of lines
	 	{
	 		for(j=1;j<=5-i;j++)      //loop for printing white spaces
	 		{
	 		 	cout<<" ";          //printing white spaces 
			 }
			
			for(k=1;k<=i;k++)       //loop for printing * and spaces
			{
			    cout<<"*";     //printing * and spaces
		     }
		    cout<<"\n";              // taking control to next line
		 }
	return 0;	 
}
