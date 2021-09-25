// finding no. of times of circular shift
#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,n,j,count=0;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<1;i++)
	{
		 for(j=i+1;j<n;j++)
		 {
		 	 if(arr[i]>arr[j])
		 	 {
		 	 	count++;
			  }
		 }
	}
	cout<<"Degree of circular shift is:"<<count;
	return 0;
}
