// Using Command-line arguments
#include<iostream>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
{
	char str[40],s;
	int flag,i,j,k,count;
	cout<<argc<<"\n";
	cout<<argv[1]<<"\n";
	strcpy(str,argv[1]);
	for(i=0;str[i]!='\0';i++)
	{ 
	    s=str[i];
	    flag=0,count=0;
		for(j=i-1;j>=0;j--)
		{
			if(s==str[j])
			{
				flag=1;
				break;
			}
	    }
			if(flag==0)
			{
				for(k=i;str[k]!='\0';k++)
				{
					if(s==str[k])
					{
						count=count+1;
					}
				}
				cout<<"Occurence of "<<s<<" is:"<<count;
		        cout<<"\n";
			}

	}
	return 0;
}

