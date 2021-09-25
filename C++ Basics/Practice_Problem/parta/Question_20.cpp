// Printing series
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter how many terms to be print:";
	cin>>n;
	for(i=1;i<=n;i++)                  //loop for printing n terms
	{
		cout<<i*i<<",";                //printing term of series
	}
	return 0;
}
