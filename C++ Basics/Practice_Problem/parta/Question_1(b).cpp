// Pattern 1(b)
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)          //loop for number of lines i.e.,5
	{
 		for(j=1;j<=i;j++)      //loop for no. of characters in one line 
		{
			cout<<"*"<<" ";    // printing * and space
		}
		cout<<"\n";            //for taking contrl to next line
	}
   return 0;	
}
