// GCD of two numbers without recursion
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,gcd=1;
	cout<<"Enter two numbers for GCD:";	
	cin>>n1>>n2;
	for(i=n1;i>=2;i--)                         //loop for calculating gcd
	{
		if((n1%i==0) && (n2%i==0))
		{   
			gcd=i;
			break;
		}
	}
	cout<<"GCD of "<<n1<<" & "<<n2<<" is:"<<gcd;	

	return 0;
}
