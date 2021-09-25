// Removing duplicate terms from an array
#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,j,k,n;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"ORIGINAL ARRAY IS:";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n-1;k++)
				 arr[k]=arr[k+1];
				 n--;
				 i--;
				
			}
		}
	}
	cout<<"ARRAY AFTER REMOVING DUPLICATE IS:";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
