// Finding the missing element
#include<iostream>
using namespace std;
int main()
{
	int arr[20],n,i,j,pos,low,temp,miss;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n-1;i++)
	{
		low=arr[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(low>arr[j])
			{
				low=arr[j];
				pos=j;
			}
		}
		arr[pos]=arr[i];
		arr[i]=low;
	}
	temp=arr[0];
	for(i=0;i<n;i++)
	{
		if(temp!=arr[i])
		{
			miss=temp;
			break;
		}
		temp++;
	}
	cout<<"The missing element is:"<<miss;
	return 0;
 } 
