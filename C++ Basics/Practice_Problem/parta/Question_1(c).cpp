// Pattern 1(c)
#include<iostream>
using namespace std;
int main()
{
		int i,j;
		for(i=5;i>=1;i--)            //loop for no. of lines
		{
		     for(j=i;j>=1;j--)       //loop for no. of * in 1 line
		     {
		     	 cout<<"*"<<" ";     //Printing * and space
			 }
			cout<<"\n";              //Taking control to next line
		}
	return 0;	
 } 
