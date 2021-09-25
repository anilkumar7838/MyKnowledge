// Binary search without recursion
#include<iostream>
using namespace std;
int binary_search(int a[],int n,int num)
{
	int first=0,last=n-1,mid;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]==num)
		return mid+1;
		else if(a[mid]<num)
		first=mid+1;
		else
		last=mid-1;
	}
	return 0;
}
int main()
{
	int a[20],i,n,num;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array(in asc. order)";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter number to be search:";
	cin>>num;
	int result;
	result=binary_search(a,n,num);
	if(result==0)
	cout<<"Given number is not found";
	else 
	cout<<"Given number is found at "<<result<<" postion";
	return 0;
}
