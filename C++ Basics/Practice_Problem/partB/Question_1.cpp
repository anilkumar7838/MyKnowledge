// Sum of first n-terms of series
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,n;
	float cal,sum1=0,sum2=0,sum=0;
	cout<<"Enter number of terms:";
	cin>>n; 
	for(i=1;i<=n;i++)                    //calculate sum till n terms
	{   
		cal=pow(i,i);
		if(i%2!=0)
		{
			sum1+=1/cal;                //calculate sum of positive terms
		}
		else
		{  
			sum2+=1/cal;                //caculate sum of negative terms
		}
	}
	sum=sum1-sum2;
	cout<<"Sum is:"<<sum;               //total sum of n terms
	return 0;
}
