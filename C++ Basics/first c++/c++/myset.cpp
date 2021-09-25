//set using template
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
    myset<T> operator+(myset<T> ob)
    {
    	int s,s1,s2;
    	s1=this->n;
    	s2=ob.n;
    	s=s1+s2;
		myset<T> temp(s);
    	int n=0;
    	for(int i=0;i<this->n;i++)
    	{
    		temp.a[n++]=a[i];
		}
			for(int i=0;i<ob.n;i++)
    	{
    		temp.a[n++]=ob.a[i];
		}
	    temp.removedup();
		return temp;
	}
	void display()
	{
		cout<<"{ ";
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<",";
		}
		cout<<"\b }";
		cout<<"\n";
		cout<<"Cardinality:"<<this->cardinality();
		cout<<endl;
	}
	// difference
		myset<T> operator-(myset<T> ob)
		{
         int s;
			s=this->n;
			if(s==0)
			return *this;
			myset<T> temp(s);
			int k=0,flag;
			for(int i=0;i<this->n;i++)
			{
				flag=0;
				for(int j=0;j<ob.n;j++)
				{
					if(this->a[i]==ob.a[j])
					{	
						flag++;
						temp.n--;	
					}
				}
				if(flag==0)
				{
					temp.a[k]=this->a[i];
					k++;
				}
			}
			return temp;
	   }
	 //intersection
	 myset<T> operator*(myset<T>  ob)
    {
		myset<T> temp(0);
		int k=0;
		for(int i=0;i<this->n;i++)
		{
			for(int j=0;j<ob.n;j++)
			{
				if(this->a[i]==ob.a[j])
				{	
					++temp.n;
					temp.a[k++]=this->a[i];	
				}
			}
		}
		return temp;
	}
	//assignment
		const myset<T> operator=(myset<T> const &ob)
		{
			for(int i=0;i<ob.n;i++)
			{
				this->a[i]=ob.a[i];
			}
			return *this;
		}
	//equality
	 bool operator==(myset<T> const& ob)
	{
			bool temp =false;
			int flag=0;
			if(this->n==ob.n)
			{
				for(int i=0;i<this->n;i++)
				{
					for(int j=0;j<ob.n;j++)
					{
						if(this->a[i]==ob.a[j])
						{
							flag++;
						}
					}
				}
				if(flag==this->n)
				{
					temp=true;
				}
			}
			return temp;
		}
	//symmetric difference
	 myset<T> operator^(myset<T>  ob)
    {
      myset<T> temp1(this->n);
	  myset<T> temp2(ob.n);
      for(int i=0;i<this->n;i++)
      {
      	temp1.a[i]=a[i];
	  }
	   for(int i=0;i<ob.n;i++)
      {
      	temp2.a[i]=ob.a[i];
	  }
		return ((temp1+temp2)-(temp1*temp2));
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
	int cardinality()
	{
		return n;
	}
 

};
template<typename T>
 void fun(T x)
{

	int s1,s2,n;
	char ch;
	cout<<"enter the cardinality of set1"<<endl;
	cin>>s1;
	cout<<"enter the cardinality of set2"<<endl;
	cin>>s2;
	myset<T> p(s1);
	p.setelement();
	cout<<"your set is:"<<endl;
	p.display();
	myset<T> q(s2);
	q.setelement();
	cout<<"your set is:"<<endl;
	q.display();
		do{
		cout<<"\n\t\t  *    MENU    *  \n"
			<<"\t\t   1.UNION OF SETS    \n"
			<<"\t\t   2.INTERSECTION OF SETS   \n"
			<<"\t\t   3.SET DIFFERENCE   \n"
			<<"\t\t   4.SYMMETRIC DIFFERENCE   \n"
			<<"\t\t   5.ASSIGNMENT OPERATOR   \n"
			<<"\t\t   6.EQUALITY OF SETS   \n"
		    <<"\t\t   7.POWER SET:"
			<<"\t\t    ENTER YOUR CHOICE: ";
			cin>>n;
			cout<<"\n";
		switch(n)
		{
			case 1:			{
								myset<T> r=p+q;
								cout<<"union of sets is:\n";
								r.display();
								break;
							}		
			case 2:			{
								myset<T> r=p*q;
								cout<<"\nintersection of sets is:\n";
								r.display();
								break;		
							}
			case 3:			{
								myset<T> r=p-q;
								cout<<"\ndifference of sets is:\n";
								r.display();	
								break;
							}	
			case 4:			{
								myset<T> r=p^q;
								cout<<"\nsymmetric difference is:\n";
								r.display();
								break;
							}				
			case 5:			{
								
								myset<T> r=p;
								myset <T>s=q;
								cout<<"\nassignment of set1 is:";
								r.display();
								cout<<"\nassignment of set2 is:";
								s.display();
								break;
							}				
			case 6:			{
								if(p==q)
               					{
                    				cout<<"both sets are equal\n";
               					}
               					else
               					{
                    				cout<<"both sets are not equal\n";
               					}
								break;
							}
			case 7:      {
				          cout<<"the power set of set 1: ";
				           p.powerset();
						   cout<<endl;
				           cout<<"the power set of set 2: ";
				           q.powerset();
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
	int n,i;
	char c;
	float f;
	double d;
	cout<<"which data type do you want choose:"<<endl;
	cout<<"1:int\n"
	    <<"2:char\n"
	    <<"3:float\n"
	    <<"4:double\n";
	    cout<<"enter your choice"<<endl;
	    cin>>n;
	    switch(n)
	    {
	    	case 1:
	    		fun(i);
	    		break;
	    	case 2:
	    		fun(c);
	    			break;
			case 3:
	    		fun(f);
	    			break;
			case 4:
	    		fun(d);	
	    			break;
			default:
	    		cout<<"Invalid Choice"<<endl;			
		}
    
	return 0;
}
