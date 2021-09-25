// Converting decimal to binary 
#include<iostream>
using namespace std;
int main()
{
	int num,r,temp;
	long bin=0,c=1;
	cout<<"Enter a number:";
	cin>>num;
	temp=num;
	while(num!=0)                     //decimal to binary
	{
		r=num%2;
		bin=bin+c*r;
		num=num/2;
		c=c*10;
	}
	cout<<"Binary of "<<temp<<" is:"<<bin;
	return 0;	
	
}
