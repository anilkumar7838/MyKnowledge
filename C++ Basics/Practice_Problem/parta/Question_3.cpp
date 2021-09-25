// Check whether no. is a part of Fibonacci series or not
#include<iostream>
using namespace std;
int main()
{
	int num,i,a=0,b=1,c,flag=0;
	cout<<"Enter number to be check part of Fibonacci:";
	cin>>num;
	if(num==a)
	{
		cout<<"Given number is at "<<1<<" postion in Fibonacci";
		flag=flag+1;
	}
    if(num==b)
	{
		cout<<"Given number is at "<<2<<" & "<<3<<" postion in Fibonacci";
		flag=flag+1;
	}
    c=a+b;
	if(c<num) 
	{   
	    i=3;
		while(c<=num)
		{
			if(num==c)
			{
				cout<<"Given number is at "<<i<<" postion in Fibonacci";
				flag=flag+1;	
			}
			
			a=b;
			b=c;
			c=a+b;
			i++;
		 }
    }  
    if(flag==0)
	{
		cout<<"Given number is not a part of Fibonacci series";
	}
	return 0;	

}
