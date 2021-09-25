// Sum of first n odd numbers
#include<iostream>
using namespace std;
int main()
{
	int i,n,c=1,sum=0;
	cout<<"Enter how many odd numbers sum you want:";
	cin>>n;
	for(i=1;i<=n;i++)                        //loop for calculating sum n odd terms 
	{
		sum=sum+c;
		c=c+2;
	}
	cout<<"Sum of "<<n<<" odd number is:"<<sum;
	return 0;
}
