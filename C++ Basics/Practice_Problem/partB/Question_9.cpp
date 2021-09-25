// Inherit classes and function overloading 

#include<iostream>
using namespace std;
class Person
{
	protected:
	char name[40];
	public:
	void display(const char* str)
	{
		cout<<"  INSIDE CLASS PERSON  \n";
		cout<<"Name of person:"<<str;
		cout<<"\n";
	}
};
class Student:public Person
{
	private:
	char course[20];
	int year;
	float marks;
	public:
	void display(const char* str,const char* course,int year,float marks)
	{
		cout<<"  INSIDE CLASS STUDENT  \n";
		cout<<"Name of student:"<<str;
		cout<<"\n";
		cout<<"Course of student:"<<course;
		cout<<"\n";
		cout<<"Year:"<<year;
		cout<<"\n";
		cout<<"Marks of student:"<<marks;
		cout<<"\n";
		
	}	
};
class Employee:public Person
{
	private:
	char dept[20];
	float salary;
	public:
	void display(const char* str,const char* dept,float salary)
	{
		cout<<"  INSIDE CLASS EMPLOYEE  \n";
		cout<<"Name of Employee:"<<str;
		cout<<"\n";
		cout<<"Department of Employee:"<<dept;
		cout<<"\n";
		cout<<"Salary of an Employee Rs."<<salary;
		cout<<"\n";
	}
};
int main()
{
	Student s;
	Person p;
	Employee e;
	char str1[]="Anuj_Sharma";
	char str2[]="B.sc(H)";
	char str3[]="ECT";
	p.display(str1);
	s.display(str1,str2,2019,477.5);
	e.display(str1,str3,50000.00);
	return 0;
}
