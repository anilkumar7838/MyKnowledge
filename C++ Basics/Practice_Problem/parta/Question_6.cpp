// Sum of n natural number
#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter how many natural numbers sum you want:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of first "<<n<<" natural numbers is:"<<sum;
	return 0;
}
