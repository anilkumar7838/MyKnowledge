// Program to convert binary to decimal
#include<iostream>
using namespace std;
int main()
{   
    int r,dec=0,c=1;
    long bin,temp;
	cout<<"Enter a binary number:";
	cin>>bin; 
	temp=bin;
	while(bin!=0)                          //binary to decimal
	{
		r=bin%10;
		dec=dec+c*r;
		bin=bin/10;
		c=c*2;
	}
	cout<<"Decimal of "<<temp<<" is:"<<dec;
	return 0;
}
