#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	int intvar=5;
	cout<<typeid(intvar).name()<<endl;
	int *intptr =&intvar;
	cout<<typeid(intptr).name()<<endl;
	int **intptrptr=& intptr;
	cout<<typeid(intptrptr).name()<<endl;
	const int intconst=6;
	cout<<typeid(intconst).name()<<endl;
	int const*ptrtoconst=&intconst;
	cout<<typeid(ptrtoconst).name()<<endl;
	int *const constptr=&intvar;
	cout<<typeid(constptr).name()<<endl;
	
	const int *const constptrtoconst=&intconst;
	cout<<typeid(constptrtoconst).name()<<endl;
		
	return 0;
}
