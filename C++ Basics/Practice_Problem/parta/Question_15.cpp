// LCM and HCF of two numbers

#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,lcm,hcf=1;
	cout<<"Enter two numbers for LCM and HCF:";	
	cin>>n1>>n2;
	for(i=n1;i>=2;i--)                         //loop for calculating HCF
	{
		if((n1%i==0) && (n2%i==0))
		{   
			hcf=i;
			break;
		}
	}
	lcm=(n1*n2)/hcf;                            //Calculating LCM 
	cout<<"LCM of "<<n1<<" & "<<n2<<" is:"<<lcm;
	cout<<"\n";
	cout<<"HCF of "<<n1<<" & "<<n2<<" is:"<<hcf;	

	return 0;
}
