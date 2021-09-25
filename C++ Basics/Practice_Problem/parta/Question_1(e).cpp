// Pattern 1(d)
#include<iostream>
using namespace std;
int main()
{
	int i,j,num;
	for(i=1;i<=5;i++)        //loop for number of lines
	{    
	    num=i;               //allocating value of i to num    
		for(j=1;j<=i;j++)    //loop for no. of character in 1 line
		{
			cout<<num;       //printing value of num
			num--;           //decreasing value of num
		}
	     cout<<"\n";         //Taking control to next line	
	}
  return 0;	
	
}
