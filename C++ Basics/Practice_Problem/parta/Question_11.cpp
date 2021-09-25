// Check whether a number is prime or not
#include<iostream>
using namespace std;
int main()
{
	int num,flag=0,i;
	cout<<"Enter a number to be check:";
	cin>>num;
	if(num==1)
	{
		goto exception;                                //exception case for 1
	}
	for(i=2;i<=num/2;i++)                              //loop checking factors of number
	{
		if(num%i==0)
		{
		  exception:	flag=1;                       //exception case for 1 only
			             break;
		}
	}
	if(flag==1)
	cout<<"Given number is not Prime";                
	else 
	cout<<"Given number is Prime";
	return 0;
}
