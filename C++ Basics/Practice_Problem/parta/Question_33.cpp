// Finding missing and repeated elements
#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,j,n,pos,temp,low,miss,rep;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n-1;i++)                       //sorting in ascending order
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
	for(i=0;i<n-1;i++)                  //searching repetitive element
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				rep=arr[i];
				break;
			}
		}
	}
	cout<<"The repeated element is:"<<rep;
	cout<<"\n";
	for(i=0;i<n-1;i++)                       //removing repeated element
	{
		for(j=i+1;j<n;j++)                        //seaching missing element
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<n-1;k++)
				arr[k]=arr[k+1];
				n--;
				i--;
			}
		}
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

