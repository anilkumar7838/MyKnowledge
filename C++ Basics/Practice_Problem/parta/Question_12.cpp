// Printing n prime numbers
#include<iostream>
using namespace std;
int main()
{
	int n,flag,j,i=2,count=0;
	cout<<"Enter how many prime numbers to be print:";
	cin>>n;
	while(count!=n)                       //loop for printing n prime no.
	{   
	    flag=0; 
		for(j=2;j<i;j++)                  //loop for checking particular no.is prime or not
		{
		  if(i%j==0)
		  {
			 flag=1;
			 break;
		   }
	     }
	    if(flag==0)
	     {
		    cout<<i<<" ";                 //printing prime no.
		    count++;                      //increase count when no. is prime
	      }
	      i++;                            //increasing no. for checking prime or not
     }
	return 0;
}
