// Exception handling

#include<iostream>
using namespace std;
int main()
{
	int p,q;
	cout<<"Enter values of p & q:";
	cin>>p>>q;
	try
	{
		if(q==0)
		throw q;
	}
	catch(int q)
	{
		cout<<"Please enter value of q other than 0:";
		cin>>q;
		cout<<"Result is:"<<p/q;
	}

	return 0;
}
