// Program to check whether given number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
	 int num,r,temp,rev=0;
	 cout<<"Enter a number to be check:";
	 cin>>num;
	 temp=num;
	 while(num!=0)
	 {
	 	r=num%10;
	 	rev=rev*10+r;
	 	num=num/10;
	 }
	 if(rev==temp)
	 cout<<"Given number is Palindrome";
	 else 
	 cout<<"Given number is not Palindrome";
	 return 0;
	 
}
