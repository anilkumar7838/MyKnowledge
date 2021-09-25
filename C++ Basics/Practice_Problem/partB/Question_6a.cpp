// Binary Search using Recursion
#include<iostream>
using namespace std;
int binary_search(int a[],int num,int first,int last)
{
	int mid; 
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]==num)
		return mid+1;
		else if(a[mid]<num)
		return binary_search(a,num,mid+1,last);
		else 
		return binary_search(a,num,first,mid-1);
	}
	return 0;
}
int main()
{
	int a[20],n,num,result;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array(in asc. order):";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter number to be search:";
	cin>>num;
	int first=0,last=n-1;
	result=binary_search(a,num,first,last);
	if(result==0)
	cout<<"Given number is not found";
	else
	cout<<"Given number is found on "<<result<<" position";
	return 0;
}
