// finding index such that arr[i]=i
// Mayank Sharma
// 19HCS4034
#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,n,flag=0;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter element of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	{
		 if(arr[i]==i)
		 {
		 	cout<<"Element same as its own index:"<<i<<"\n";
		 	flag++;
		 }
	}
	if(flag==0)
	{
		cout<<"No element is same as its own index!!";
	}
	return 0;
	
}






