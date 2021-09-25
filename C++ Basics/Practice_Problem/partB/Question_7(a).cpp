// GCD with recursion
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	static int i=a; 
	if(i==1)
	return 1;
	else if(a%i==0 && b%i==0)
	return i;
	else
	{
		i--;
	 	return gcd(a,b);
	}
}
int main()
{
	int n1,n2,result;
	cout<<"Enter two numbers for GCD:";
	cin>>n1>>n2;
	result=gcd(n1,n2);
	cout<<"G.C.D. of "<<n1<< " & "<<n2<<" is:"<<result;
	return 0;
}
