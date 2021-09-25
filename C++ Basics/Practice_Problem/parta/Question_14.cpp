//Check whether a given year is leap year or not
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year to be check:";
	cin>>year;
	if((year%4==0) && (year%100!=0))                 //condition for checking given year is leap year 
	{
		cout<<year<<" is a leap year";
	}
	else if((year%100==0) && (year%400==0))          //condition for checking given year is leap year
	{
		cout<<year<<" is a leap year";
	}
	else if((year%400==0))                           //condition for checking given year is leap year
	{
		cout<<year<<" is a leap year";
	}
	else 
	{
		cout<<year<<" is not a leap year";
	}
	return 0;
}
