// Finding all pairs of (a,b):a+b=k
#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,j,k,left,n,flag=0;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter the sum of two numbers:";
	cin>>k;
	for(i=0;i<n-1;i++)
	{
		left=k-arr[i];
		for(j=i+1;j<n;j++)
		{
			if(left==arr[j])
			{
				flag++;
				cout<<"Pair "<<flag<<" is:"<<"("<<arr[i]<<","<<arr[j]<<")";
				cout<<"\n";
			}
		}
	}
	if(flag==0)
	cout<<"No Pair exist whose sum equals to:"<<k;
	return 0;
}
