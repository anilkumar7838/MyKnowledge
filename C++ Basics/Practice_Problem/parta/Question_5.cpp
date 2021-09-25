// largest of 10 numbers in an array.
#include<iostream>
using namespace std;
int main()
{
	 int a[10],l,i;
	 cout<<"Enter 10 elements of array:";
	 for(i=0;i<10;i++)                         //loop for entering array
	 {                                      
	     cin>>a[i];
      }
	 for(i=0;i<10;i++)                     //loop for printing array
	 {
	     cout<<a[i]<<" ";
	  }
	  cout<<"\n";
	  l=a[0];
	  for(i=1;i<10;i++)                     //loop for finding largest element
	  {
	 	   if(l<a[i])
	 	   {
	 		l=a[i];
		    }
	    }
	  cout<<"Largest element of array is:"<<l;
	  return 0;
}
