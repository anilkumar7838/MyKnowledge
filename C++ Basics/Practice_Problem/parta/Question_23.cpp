// Calculating m^n
#include<iostream>
using namespace std;
int main()
{
	int base,exp,i,result=1;
	cout<<"Enter base term:";
	cin>>base;
	cout<<"Enter exponent term:";
	cin>>exp;
	for(i=1;i<=exp;i++)
	{
		result=result*base;
	}
	cout<<"Result is:"<<result;
	return 0;
}
