// Printing first n odd number
#include<iostream>
using namespace std;
int main()
{
	int i,n,odd=1;
	cout<<"Enter how many odd numbers to be print:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<odd<<" ";
		odd=odd+2;
	}
	return 0;
}
