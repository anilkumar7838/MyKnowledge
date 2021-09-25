// Converting decimal to octal 
#include<iostream>
using namespace std;
int main()
{
	int num,r,temp;
	long oct=0,c=1;
	cout<<"Enter a number:";
	cin>>num;
	temp=num;
	while(num!=0)                     //decimal to octal
	{
		r=num%8;
		oct=oct+c*r;
		num=num/8;
		c=c*10;
	}
	cout<<"Octal of "<<temp<<" is:"<<oct;
	return 0;	
	
}
