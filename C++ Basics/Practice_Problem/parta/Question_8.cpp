// Printing first n even numbers
#include<iostream>
using namespace std;
int main()
{
	int i,n,even=2;
	cout<<"Enter how many even numbers to be print:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<even<<" ";
		even=even+2;
	}
	return 0;
}
