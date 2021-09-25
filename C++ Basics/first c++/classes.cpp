#include<bits/stdc++.h>

using namespace std;
class Student{					
	char name[100];
	char year[10];
	int marks;
	char roll[10];
	 public : 
	 	void input(){
	 		cout<<"Enter Name : ";
	 		cin>>name;
	 		cout<<"Enter Year : ";
	 		cin>>year;
	 		cout<<"Enter Marks : ";
	 		cin>>marks;
	 		cout<<"Enter Roll Number : ";
	 		cin>>roll;
		 }
		 void display(){
		 	cout<<"Name : "<<name;
		 	cout<<"\tYear : "<<year;
		 	cout<<"\tMarks : "<<marks;
		 	cout<<"\tRoll No :"<<roll;
		 }
};
int main(){
	Student s[5];
	fstream fio;
	fio.open("student.txt",ios::in|ios::out);
	cout<<"Enter The Details of 5 Students :- \n\n";
	for(int i=0;i<5;i++){
		s[i].input();
		cout<<"\n";
		fio.write((char*)&s[i],sizeof(s[i]));
	}
	cout<<"Contents Of The Student.txt File Is As Follows :-\n\n";
	for(int i=0;i<5;i++){
		cout<<i+1<<")\t";
		fio.read((char*)&s[i],sizeof(s[i]));
		s[i].display();
		cout<<"\n";
	}
}
