// Checking whether a given no. is perfect square or not
#include<iostream>
using namespace std;
int main()
{
	int i,num,count=0;
	cout<<"Enter number to be check:";
	cin>>num;
 	for(i=1;i<=num;i++)                 //loop for checking given no. is perfect square or not
	{
		if(num%i==0)
		{
			count++;                    //storing factors of a given no.
		}
	}
   if(count%2==0)
   cout<<"Given number is not a Perfect Square";
   else 
   cout<<"Given number is a Perfect Square";
   return 0;
}

