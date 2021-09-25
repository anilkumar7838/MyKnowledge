// Merging 2-d array to 1-d array
#include<iostream>
using namespace std;
int main()
{
	int arr1[10][10],arr2[100],r,c,i,j,k=0,count=0;
	cout<<"ENTER SIZE OF 2-D ARRAY:";
	cin>>r>>c;
	cout<<"ENTER ELEMENTS OF ARRAY:";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"2-D ARRAY IS:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr2[k++]=arr1[i][j];
			count++;
		}
	}
	cout<<"MERGED 1-D ARRAY IS:";
	for(i=0;i<count;i++)
	cout<<arr2[i]<<" ";
	return 0;
}

