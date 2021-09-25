// Copying content of one file to another after removing whitespaces

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("Text.txt",ios::binary);
	fout.open("Spacefree.txt",ios::binary);
	if(!fin || !fout)
	{
		cout<<"Files not open";
		exit(0);
	}
	char ch;
	while(fin.get(ch))
	{
		if(ch!=' ')
		{
			fout.put(ch);
		}

	}
	cout<<"File copied successfully!!\n";
	cout<<"Please open Spacefree text file to see result";
	fin.close();
	fout.close();
	return 0;
}
