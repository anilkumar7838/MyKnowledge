// Swapping of two values using pointer

#include<iostream>
using namespace std;
int main( )
{
	int *p,*q,a,b,*temp;
	cout<<"Enter two values:";
	cin>>a>>b;
	p=&a;
	q=&b;
	cout<<"Values before swapping\np:"<<*p<<" & q:"<<*q;
	cout<<"\n";
	temp=p;
	p=q;
	q=temp;
	cout<<"Values after swapping\np:"<<*p<<" & q:"<<*q;
	return 0;
}
