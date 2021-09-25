// Sum of cubes of n natural number
#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter how many natural number's cube sum you want:";
	cin>>n;
	for(i=1;i<=n;i++)                                            //loop for calculating n term sum           
	{
		sum=sum+(i*i*i);                                           //calculating sum of cubes of n natural numbers   
	}
	cout<<"Sum of cubes of "<<n<<" natural number is:"<<sum;    //printing sum          
	return 0;
}
