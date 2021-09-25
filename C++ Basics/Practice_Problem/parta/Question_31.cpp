// Arranging in ascending order
#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,n,j,pos,temp;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Array before sorting:";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
	for(i=0;i<n-1;i++)
	{
		temp=arr[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(temp>arr[j])
			{
				temp=arr[j];
				pos=j;
			}
		}
		arr[pos]=arr[i];
		arr[i]=temp;
	}
	cout<<"Array after sorting:";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
