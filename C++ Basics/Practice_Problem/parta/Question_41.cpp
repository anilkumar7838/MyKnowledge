// Merging two sorted array into a single sorted array
#include<iostream>
using namespace std;
int main()
{ 
    int a[20],b[20],c[40],i,j,k=0,n,m,low,pos;
    cout<<"Enter size of first array:";
    cin>>m;
    cout<<"Enter first array elements:";
    for(i=0;i<m;i++)
    cin>>a[i];
    cout<<"Enter size of second array:";
    cin>>n;
    cout<<"Enter second array elements:";
    for(i=0;i<n;i++)
    cin>>b[i];
    for(i=0;i<m;i++)
    { 
        c[k++]=a[i];
	}
	for(j=0;j<n;j++)
    { 
        c[k++]=b[j];
	}
	for(i=0;i<(m+n)-1;i++)
	{ 
	    low=c[i];
	    pos=i;
	    for(j=i+1;j<m+n;j++)
	    {
	    	if(low>c[j])
	    	{
	    		low=c[j];
	    		pos=j;
			}
		}
		c[pos]=c[i];
		c[i]=low;
	}
	cout<<"Merged Array is:";
	for(i=0;i<(m+n);i++)
	cout<<c[i]<<" ";
	return 0;
}
