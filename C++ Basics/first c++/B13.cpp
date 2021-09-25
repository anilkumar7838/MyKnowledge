/*
Q13. Create a class Student containing fields for Roll No., Name, Class, Year and Total Marks. 
Write a program to store 5 objects of Student class in a file.
Retrieve these records from file and display them.
*/
#include<iostream>
#include<fstream>
using namespace std;
static int i=0;
class Student
{
	char Name[20],Class[10],data[20];
	int Roll_No,Total_Marks,Year;
	public:
	Student()
	{
			ofstream fout("record.txt",ios::app);
			cout<<"\nEnter roll number: ";
			cin>>Roll_No;
			cout<<"\nEnter Name: ";
			cin>>Name;
			cout<<"\nEnter class: ";
			cin>>Class;
			cout<<"\nEnter year: ";
			cin>>Year;
			cout<<"\nEnter total marks: ";
			cin>>Total_Marks;
			cout<<endl;
				fout<<Name<<endl;
				fout<<Class<<endl;
				fout<<Year<<endl;
				fout<<Roll_No<<endl;
				fout<<Total_Marks<<endl<<endl;
				fout.close();
	}
	~Student()
	{
		i++;
		if(i==5)
		{
			ifstream fin("record.txt");
			while(!fin.eof())
			{
				fin.getline(data,20);
				cout<<data<<"\n";
			}
		}
	}
};
int main()
{
	//delete record.txt before running program for 2nd time
	Student s[5];
	return 0;
}
