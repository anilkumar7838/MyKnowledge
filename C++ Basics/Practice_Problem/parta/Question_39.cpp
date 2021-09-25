// finding two elements which are not in pair
#include<iostream>
using namespace std;
int main()
{ 
     int arr[20],odd[2],i,j,k,n,count,temp;
     cout<<"Enter size of array(even):";
     cin>>n;
     cout<<"Enter elements of array:";
     for(i=0;i<n;i++)
     cin>>arr[i];
     k=0;
     for(i=0;i<n;i++)
     { 
         temp=arr[i];
         count=0;
         for(j=0;j<n;j++)
         { 
             if(temp==arr[j])
             { 
                 count++;
			 }
		 }
		 if(count==1)
		 { 
		    odd[k++]=temp;
	      }
		
	}
	cout<<"Two odd elements are:";
	for(k=0;k<2;k++)
	cout<<odd[k]<<" ";
	return 0;
}

