// Sum of n even numbers
#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,c=2;
	cout<<"Enter how many even numbers sum you want:";
	cin>>n;
	for(i=1;i<=n;i++)                         //loop for calculating sum of n even numbers
	{
		sum=sum+c;
		c=c+2;
	}
	cout<<"Sum of "<<n<<" even number is:"<<sum;
	return 0;
}
