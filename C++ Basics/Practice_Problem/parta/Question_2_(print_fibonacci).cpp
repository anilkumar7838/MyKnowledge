// Printing Fibonacci series till n terms
#include<iostream>
using namespace std;
int main()
{
	int n,i,a=0,b=1,c;
	cout<<"Enter Number Of Terms:";
	cin>>n;
	if(n==1)
	{
		cout<<"Fibonacci series:"<<a;
	}
	else if(n==2)
	{
		cout<<"Fibonacci series:"<<a<<" "<<b;
	}
	else
	{
		cout<<"Fibonacci series:"<<a<<" "<<b<<" ";
	   for(i=3;i<=n;i++)
	  {
         c=a+b;
         a=b;
         b=c;
         cout<<c<<" ";
		
	  }
    }
   return 0; 
}
