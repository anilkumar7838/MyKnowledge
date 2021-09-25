// Calculating factorial of given number
#include<iostream>
using namespace std;
int main()
{
	int num,i,fact=1;
	cout<<"Enter number whose factorial you want:"; 
	cin>>num;
	for(i=1;i<=num;i++)                                 //loop for calculating factorial
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<num<<" is:"<<fact;            //printing factorial
	return 0;
}
