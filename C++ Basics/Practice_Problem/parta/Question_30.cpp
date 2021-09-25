// finding highest element, lowest element of array with their 
// index,also finding mean,median and mode
#include<iostream>
using namespace std;
int main()
{
	int arr[20],count[20],n,i,j,k,high,ind1,mid,temp,pos;
	int flag,max;
	float mean,median,sum1=0,sum2=0;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	int low,ind2;
	high=arr[0];
	low=arr[0];
	for(i=0;i<n;i++)
	{   
	     sum1=sum1+arr[i];
		if(arr[i]>high)
		{
			high=arr[i];
			ind1=i;
		}
		if(arr[i]<low)
		{
			low=arr[i];
			ind2=i;
		}
		
	}
 	for(i=0;i<n-1;i++)                   //sorting
 	{
		temp=arr[i];
		pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(temp>arr[j])
			{
				temp=arr[j];
				pos=j;
			}
		}
		arr[pos]=arr[i];
		arr[i]=temp;
	}
	if(n%2==0)
	{
		mid=n/2;
		sum2=arr[mid-1]+arr[mid];
		median=sum2/2;
	}
	else
	{
		mid=(n+1)/2;
		median=arr[mid-1];
	}
	int tempcount;
	for(i=0;i<n;i++)
	{   
	    flag=0;
	    tempcount=0;
	    for(k=i-1;k>=0;k--)
	    {
	    	if(arr[k]==arr[i])
            {
              flag++;
			  break;	
		     }	    	
		}
		if(flag==0)
		{
		  for(j=0;j<n;j++)
		  {
			if(arr[i]==arr[j])
			{
				tempcount++;
			}
		  }
	    }
		count[i]=tempcount;
	}
	max=count[0];
	for(i=0;i<n;i++)
	{
		if(max<count[i])
		{
			max=count[i];
		}
	}
	
	cout<<"\n";
	cout<<"Highest number is "<<high<<" at index:"<<ind1<<"\n";
	cout<<"Lowest number is "<<low<<" at index:"<<ind2<<"\n";
    mean=sum1/n;
    cout<<"Mean of all array elements is:"<<mean<<"\n";
    cout<<"Median of array is:"<<median<<"\n";
    cout<<"Mode of an array is:";
	for(i=0;i<n;i++)
	{
		if(max==count[i])
		{
		    cout<<arr[i]<<" ";
	    }
	    

	}
	return 0;
 } 
