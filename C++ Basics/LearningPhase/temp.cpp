//program of sum:2 combination:2
//ans:((2,0),(1,1),(0,2))
#include <iostream>

using namespace std;
void fun(int *a,int s,int n,int c);
int sum(int *a,int n);
void print(int *a,int n);
int main()
{
    int i,n,c;
    cout<<"enter the total sum"<<endl;
    cin>>c;
    cout<<"enter the term"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
    	a[i]=0;
	}
	cout<<"the possible solution are:"<<endl;
    fun(a,0,n,c);
    return 0;
}
void fun(int *a,int s,int n,int c)
{
	int i=0;
   if(s<n-1)
   {
   	 while(i<=c)
   	 {
   	 	a[s]=i;
   	 	fun(a,s+1,n,c);
   	 	i++;
	 }
	}	
	   else
	   {
	   	 int i=0;
	   	 while(i<=c)
   	       {
   	        	a[s]=i;
   	 	        if( sum(a,n)==c)
   	 	        {
   	 	        	print(a,n);
				}
					i++;
   	       }
	   }
}
int sum(int *a,int n)
{
	int temp=0;
	int i=0;
	for(int i=0;i<n;i++)
	{
		 temp+=a[i];
	}
	return temp;
}
void print(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
