#include<iostream>
#include<math.h>
using namespace std;
template <class T>
class myset
{
    private:
    T *a;
    int n;
    public:
    	myset()
   	{
   		n=0;
	}
    myset (int s)
    {
        a=new T[s];
        n=s;
    }
    void setelement()
    {
    	cout<<"enter the element"<<endl;
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
		}
		removedup();
	}
	void removedup()
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					for(int k=j;k<n;k++)
					{
						a[k]=a[k+1];
					}
					n--;
					j--;
				}
			}
		}
	}
		void display()
		{
			cout<<"\n{ ";
			for(int i=0;i<n;i++)
			{
				cout<<a[i];
				if(i<n-1)
				{
					cout<<",";
				}
			}
			cout<<" }";
			cout<<"\nCARDINALITY OF SET is:"<<card();
		}
		int card() const{
			int i;
			for(i=0;i<n;i++);
			return i;
		}
	bool find(T x){
		bool temp=false;
		int c=0;
		for(int i=0;i<n;i++){
			if(a[i]==x){
			temp=true;
		     }  
		}
		return temp;
	}

	void powerset()
	{
		int i,j,t; 
		int size =pow(2,n);
		cout<<"{{";
		for(int i=0;i<size;i++)
		{
			cout<<"{";
			for(j=0;j<this->n;j++)
			{
				if(i &(1<<j))
				{
					cout<<a[j]<<",";
			
				}
				
			}
			cout<<"\b},";
		}
		cout<<"\b}";
	}

};
template<typename T>
 T fun()
{

	int s1,n;
	char ch;
	cout<<"enter the cardinality of set1"<<endl;
	cin>>s1;
	myset<T> p(s1);
	p.setelement();
	cout<<"your set is:"<<endl;
	p.display();
	//myset<T> q(s2);
	//q.setelement();
	//cout<<"your set is:"<<endl;
	//q.display();
		do{
		cout<<"\n\t\t  *    MENU    *  \n"
		     <<"\t\t   1.CHECK AN ELEMENT IS A MEMBER OF A SET:\n"
			<<"\t\t   2.TO FIND POWER SET:\n"
			<<"\t\t    ENTER YOUR CHOICE: \n";
			cin>>n;
			cout<<"\n";
		switch(n)
		{
			case 1:      {
				          cout<<"ENTER THE ELEMENT YOU WANT TO FIND: "<<endl;
				           T e;
				           cin>>e;
						 if( p.find(e))  
				           cout<<"Element is a member of a set.";
				           else
				           cout<<"Element is not a member of a set.";
				           break;
			             }	
			case 2:      {
				          cout<<"the power set of set 1: ";
				           p.powerset();
						   cout<<endl;
				           break;
			             }
						
			default:  		cout<<"\nWRONG CHOICE!!";
		}
		cout<<"\nDo you want to continue(y/n):";
		cin>>ch;
		}while(ch=='y'||ch=='Y');
}
int main()
{
	 fun<char>();
	return 0;
}
