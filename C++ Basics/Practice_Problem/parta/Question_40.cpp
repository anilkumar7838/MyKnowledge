// finding duplicate terms and printing only unique terms 
#include<iostream>
using namespace std;
int main( )
{ 
    int arr[20],dup[20],i,j,k,n,s=0,count=0;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter elements of array:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n-1;i++)                       //removing repeated element
	{
		for(j=i+1;j<n;j++)                        //seaching missing element
		{
			if(arr[i]==arr[j])
			{      
			    dup[s++]=arr[i];
			    count++;
				for(int k=j;k<n-1;k++)
				arr[k]=arr[k+1];
				n--;
				i--;
			}
		}
	}
	cout<<"Duplicate elements are:";
	for(i=0;i<count;i++)
	cout<<dup[i]<<" ";
	cout<<"\n";
	cout<<"Unique terms are:";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
