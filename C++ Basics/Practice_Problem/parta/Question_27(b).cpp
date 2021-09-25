// Program to convert octal into binary
#include<iostream>
using namespace std;
int main()
{   
    int r1,r2,oct,temp,dec=0;
    long bin=0,c1=1,c2=1;
	cout<<"Enter a number:";
	cin>>oct; 
	temp=oct;
	while(oct!=0)                       //octal to decimal
	{
		r1=oct%10;
		dec=dec+c1*r1;
		oct=oct/10;
		c1=c1*8;
	}
	while(dec!=0)                     //decimal to binary
	{
		r2=dec%2;
		bin=bin+c2*r2;
		dec=dec/2;
		c2=c2*10;
	}
	cout<<"Binary of "<<temp<<" is:"<<bin;
	return 0;	
}
