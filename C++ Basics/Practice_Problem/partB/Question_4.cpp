// Menu-drive string operation

#include<iostream>	 	
using namespace std;
int len(char str[100]);
void address()
{
	char str[100];
	cout<<"Enter a string:";
	cin>>str;
	for(int i=0;str[i]!='\0';i++)
	{
		cout<<str[i]<<" is at position :";
		printf(" %p",str[i]);	
		cout<<"\n";
    }
}
void compare()
{
	char str1[100],str2[100];
	int flag=0;
	cout<<"Enter first string:";
	cin>>str1;
	cout<<"Enter second string:";
	cin>>str2;
	int l1=len(str1);
	int l2=len(str2);
	if(l2!=l2)
	{
		cout<<"\nThe strings sre not equal ";
	}
	else
	{
		for(int i=0;str1[i]!='\0';i++)	
		{
			if(str1[i]!=str2[i])
			{
				flag=1;
			}
		}
		if(flag==1)
		{
			cout<<"\nThe strings are not equal ";;
		}
		else
		{
			cout<<"\nThe strings are equal ";
		}
	}
}
void length()
{
	char str[100];
	int size;
	cout<<"Enter a string:";
	cin>>str;
	size = len(str);
	cout<<"Size of string is:"<<size;
}
void concate()
{
	char str1[100],str2[100],str3[100],j=0;
	int flag=0;
	cout<<"Enter First String : ";
	cin>>str1;
	cout<<"Enter Second String :";
	cin>>str2;
	for(int i=0;str1[i]!='\0';i++)
	{
		str3[j++] = str1[i];
	}
	for(int i=0;str2[i]!='\0';i++)
	{
		str3[j++] = str2[i];
	}
	cout<<"\nThe String After Concatenation : ";
	for(int i=0;i<j;i++)
	{
		cout<<str3[i];
	}
	
}
int len(char str[100])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
void convert()
{
	char str[100]; 
	int size;
	cout<<"Enter a string:";
	cin>>str;
	size = len(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(islower(str[i]))
		{
			str[i]= toupper(str[i]);
		}
	}
	cout<<"\nString after converting lower case character to upper case:"<<str;
	cout<<"\n";
}
void reverse()
{
	char str[100];
	int size;
	cout<<"Enter a string:";
	cin>>str;
	size = len(str);
	char c;
	for(int i=0,j=size-1;i<size/2;i++,j--)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
	cout<<"String after reversing:";
	cout<<str;
}
int main()
{
	int n;
	char ch;
	do
	{
		cout<<"\t\t\t********        MENU        ********    \n";
		cout<<"\t\t\t1.Showing address of each character \n"
	    	<<"\t\t\t2.Concatenate two string \n"
	    	<<"\t\t\t3.Compare two string \n"
	    	<<"\t\t\t4.Calculate length of string \n"
	    	<<"\t\t\t5.Convert all lowercase to uppercase \n"
	    	<<"\t\t\t6.Reverse string \n"
	    	<<"\t\t\t\nEnter Your Choice(1-6):";
		cin>>n;
		cout<<"\n";
		switch(n)
		{
			case 1 : address();
					break;
			case 2 : concate();
					break;
			case 3 : compare();
					break;
			case 4 : length();
					break;
			case 5 : convert();
					break;
			case 6 : reverse();
		            break;
		    default : cout<<"You have entered wrong choice!!\n";
		            break;
	}
	cout<<"\nDo you want to continue(y/n):";
	cin>>ch;
  }while(ch=='y' || ch=='Y');
   return 0;
}
