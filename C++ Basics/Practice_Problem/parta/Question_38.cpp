// finding no. whose pair not exist
#include<iostream>
using namespace std;
int main()
{ 
	int arr[20],i,j,n,result=0;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	{ 
	  result=result^arr[i];                //using XOR'ing to find odd one element
	}
	cout<<"Odd one element is:"<<result;
	return 0;
}
	
