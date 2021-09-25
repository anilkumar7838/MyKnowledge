// reverse a given no.,sum of digits of no.,sum of first & last digit of number
#include<iostream>
using namespace std;
int main()
{
	int num,r=0,rev=0,sum_of_two=0,sum_of_digits=0,count=0;
	cout<<"Enter the number:";
	cin>>num;
	cout<<"Original number is:";
	cout<<num;
	cout<<"\n";
	while(num!=0)                            //loop for perforfimg above operations
	{
		r=num%10;
		count++;
		rev=rev*10+r;
		sum_of_digits=sum_of_digits+r;       //suum of all digits
		if(count==1 ||num<10)                //for sum of first & last digit  
		{
			sum_of_two=sum_of_two+r;                                                       
		}
		num=num/10;
     }
	cout<<"Number after reverse:"<<rev<<"\n";                             //printing reverse of given number
	cout<<"Sum of dgits of number is:"<<sum_of_digits<<"\n";              //printing sum of digits of given number
	cout<<"Sum of first & last digit of number is:"<<sum_of_two;          //printing sum of first & last digit of given number
	return 0;
}
