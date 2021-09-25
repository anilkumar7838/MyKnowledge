// Program to convert octal to decimal
#include<iostream>
using namespace std;
int main()
{   
    int r,oct,temp,dec=0,c=1;
	cout<<"Enter a number:";
	cin>>oct; 
	temp=oct;
	while(oct!=0)                          //octal to decimal
	{
		r=oct%10;
		dec=dec+c*r;
		oct=oct/10;
		c=c*8;
	}
	cout<<"Decimal of "<<temp<<" is:"<<dec;
	return 0;
}
