//this is perfect completion of permute combination.
#include<iostream>
#include<cstring>
using namespace std;
void fun(string s,int len,int n);
void normal(string s);
void swap(string s,int a,int b);
int main()
{
	string s;
	cout<<"enter the string"<<endl;
	cin>>s;
	cout<<"the possible solutions are"<<endl;
	fun(s,s.length(),s.length());
	return 0;
}
void fun(string s,int len ,int n)
{
	if(n>3)
  	{  		
		int i;
		for(i=(len-n);i<len;i++)
		{
			char temp;
			temp=s[i];
			s[i]=s[0];
			s[0]=temp;
			fun(s,len,n-1);
			
		}
  	}
	else
	{
		char temp;
		int i;
		for(i=(len-3);i<len;i++)
		{
			temp=s[len-3];
			s[len-3]=s[i];
			s[i]=temp;
			normal(s);
			swap(s,len-2,len-1);
		}
	}
}
void normal(string s)
{
    cout<<s<<endl;
}
void swap(string s,int a,int b)
{
	char temp;
	temp=s[a];
	s[a]=s[b];
	s[b]= temp;
	cout<<s<<endl;
	
}

