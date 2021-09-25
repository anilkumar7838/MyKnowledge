//this first approach for permutecombination.
#include<iostream>
using namespace std;
int main()
{
	int i,j,m=0,n,c;
	cout<<"enter the total sum"<<endl;
	cin>>c;
	cout<<"enter the term"<<endl;
	cin>>n;
	int a[n];
	a[0]=c;
	for(i=1;i<n;i++)
	{
		a[i]=0;
	}
	cout<<"the possible combination is:"<<endl;
	while(m==0)
 {
 	   i=0;
     	for(j=0;j<(n-1);j++)
     	{ 
		    for(i=0;i<n;i++)
	       	{
			cout<<a[i]<<" ";
		
	    	}
	    	cout<<endl;
	    		int temp =a[i];
			  a[i]=a[i+1];
			  a[i+1]=temp;
			  for(i=0;i<n;i++)
	       	{
			cout<<a[i]<<" ";
		
	    	}
	    	cout<<endl;
	    	if(a[n-1]==c)
            {
             	m=1;
         	}
		 a[j]--;
		 a[j+1]++;
		 
    	}
    
  }
  return 0;
}
