// finding odd one element of array
#include<iostream>
using namespace std;
int main()
{ 
	int arr[20],i,j,n,temp,count;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	{ 
	    count=0,temp=arr[i];
	    for(j=0;j<n;j++)
	    {
	    	 if(temp==arr[j])
	    	 { 
	    	    count++;
			 }
	    }
	    if(count==1)
	    cout<<"Different element is:"<<temp;	  
	}
	return 0;
}
