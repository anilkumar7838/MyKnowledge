// Entering records of 5 students in a file & displaying them
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class student
{
	int roll,std,year;
	float total_marks;
	char name[40];
	public:
	void enter()
	{
		cout<<"Enter name of student:";
		cin>>name;
		cout<<"Enter roll no. of student:";
		cin>>roll;
		cout<<"Enter class of student:";
		cin>>std;
		cout<<"Enter year:";
		cin>>year;
		cout<<"Enter total marks of student:";
		cin>>total_marks;
		cout<<"\n";
	}
	void display()
	{
		cout<<"Name of student:";
		puts(name);
		cout<<"Roll no. of student:"<<roll<<"\n";
		cout<<"Class of student:"<<std<<"\n";
		cout<<"Year:"<<year<<"\n";
		cout<<"Total marks of student:"<<total_marks;
		cout<<"\n\n";
	}
};
void write_data()
{
	ofstream f;
	f.open("Student.dat",ios::binary);
	if(!f)
	{
		cout<<"File Not Found"<<"\n";
		exit(0);
	}
	student s;
	for(int i=1;i<=5;i++)
	{
		cout<<"Enter record of "<<i<<" student"<<"\n";
		s.enter();
		f.write((char*)&s,sizeof(s));
	}
	f.close();
}
void read_data()
{
	ifstream f;
	f.open("Student.dat",ios::binary);
	if(!f)
	{
		cout<<"File not Found"<<"\n";
		exit(0);
	}
	student s;
	int i=1;
	while(f.read((char*)&s,sizeof(s)))
	{
		cout<<"Record of "<<i<<" student"<<"\n";
		s.display();
		i++;
	}
	f.close();
}
int main()
{
	write_data();
	read_data();
}
