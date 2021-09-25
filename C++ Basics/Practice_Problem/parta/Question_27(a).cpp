//Program to convert binary to octal

#include<iostream>
using namespace std;
int main()
{

    int r1,r2,dec=0,oct=0;
    long bin,temp,c1=1,c2=1;
	cout<<"Enter a binary number:";
	cin>>bin;
	temp=bin; 
	while(bin!=0)                       //binary to decimal
	{
		r1=bin%10;
		dec=dec+c1*r1;
		bin=bin/10;
		c1=c1*2;
	}
	while(dec!=0)                     //decimal to octal
	{
		r2=dec%8;
		oct=oct+c2*r2;
		dec=dec/8;
		c2=c2*10;
	}
	cout<<"Octal of "<<temp<<" is:"<<oct;
	return 0;
}
