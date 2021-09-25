//Check whether a given no. is factorial or not
#include<iostream>
using namespace std;
int main()
{
	int num,pos,fact=1,flag=0,i=1;
	cout<<"Enter a number:";
	cin>>num;
	while(fact<num)                           //loop check whether calculating factorials less than given number
	{
		fact=fact*i;
		if(fact==num)
		{
			flag=1;
			pos=i;
			break;
		}
		i++;
	}
	if(flag==1)
	cout<<"Given number "<<num<<" is a factorial of of:"<<pos;
	else
	cout<<"Given number is not a factorial";
	return 0;
}
