#include<iostream>
using namespace std;
class MySet
{
	private:
		int size;
		char *arr1;
	public:
			MySet()
		{
			size=0;
		}
	
		MySet(int n)
		{
			size=n;
			arr1=new char[size];
		}
		void input()
		{
			for(int i=0;i<size;i++)
			{
				cin>>arr1[i];
			}
			rem_dupl();
		}
		void rem_dupl()
		{
			for(int i=0;i<size-1;i++)
			{
				for(int j=i+1;j<size;j++)
				{
					if(arr1[i]==arr1[j])
					{
						for(int k=j;k<size;k++)
						arr1[k]=arr1[k+1];
						size--;
						j--;
					}
				}
			}
		}
		int card() const
		{
			int i;
			for(i=0;i<size;i++);
			return i;
		}
		MySet operator +(MySet const &ob)
		{
			int s,s1,s2;
			s1=this->card();
			s2=ob.card();
			s=s1+s2;
			MySet temp(s);
			int k=0;
			for(int i=0;i<this->size;i++)
			{
				temp.arr1[k++]=this->arr1[i];
			}
			for(int j=0;j<ob.size;j++)
			{
				temp.arr1[k++]=ob.arr1[j];
			}
			temp.rem_dupl();
			return temp;
		} 
	MySet operator *(MySet const &ob)
	{
		int s1;
		s1=this->card();
		MySet temp(0);
		int k=0;
		for(int i=0;i<this->size;i++)
		{
			for(int j=0;j<ob.size;j++)
			{
				if(this->arr1[i]==ob.arr1[j])
				{	
					++temp.size;
					temp.arr1[k++]=this->arr1[i];	
				}
			}
		}
		return temp;
     } 
		MySet operator -(MySet const &ob)
		{
			int s;
			s=this->card();
			if(s==0)
			return *this;
			MySet temp(s);
			int k=0,flag;
			for(int i=0;i<this->size;i++)
			{
				flag=0;
				for(int j=0;j<ob.size;j++)
				{
					if(this->arr1[i]==ob.arr1[j])
					{	
						flag++;
						temp.size--;	
					}
				}
				if(flag==0)
				{
					temp.arr1[k]=this->arr1[i];
					k++;
				}
			}
			return temp;
		}
		MySet operator ^(MySet &ob)
		{
			int s1,s2,s,count=0;
			s1=this->card();
			s2=ob.card();
			MySet temp1(s1);
			temp1=*this;
			for(int i=0;i<this->size;i++)
			{
				for(int j=0;j<ob.size;j++)
				{
					if(this->arr1[i]==ob.arr1[j])
					{
						count++;
						break;
					}
				}
			}
			s1=s1-count;
			s2=s2-count;
			s=s1+s2;
			MySet temp(s),temp2(s1),temp3(s2);
			temp2=*this-ob;
			temp3=ob-temp1;
			temp=temp2+temp3;
			return temp;
		}
		const MySet operator=(MySet const &ob)
		{
			for(int i=0;i<ob.size;i++)
			{
				this->arr1[i]=ob.arr1[i];
			}
			return *this;
		}
		bool operator==(MySet const &ob)
		{
			bool isEqual =false;
			int flag=0;
			if(this->size==ob.size)
			{
				for(int i=0;i<this->size;i++)
				{
					for(int j=0;j<ob.size;j++)
					{
						if(this->arr1[i]==ob.arr1[j])
						{
							flag++;
						}
					}
				}
				if(flag==this->size)
				{
					isEqual=true;
				}
			}
			return isEqual;
		}
		void display()
		{
			cout<<"\n{ ";
			for(int i=0;i<size;i++)
			{
				cout<<arr1[i];
				if(i<size-1)
				{
					cout<<",";
				}
			}
			cout<<" }";
			cout<<"\nCARDINALITY OF SET is:"<<card();
		}	
};

int main()
{
	int s1,s2,n;
	char ch;
	cout<<"\nENTER SIZE OF FIRST SET:";
	cin>>s1;
	cout<<"\nENTER SIZE OF SECOND SET:";
	cin>>s2;
	//s=s1+s2;
	MySet ob1(s1),ob2(s2);
	cout<<"\nENTER ELEMENTS OF FIRST SET:";
	ob1.input();
	cout<<"\nENTER ELEMENTS OF SECOND SET:";
	ob2.input();
	cout<<"YOUR FIRST SET IS:\n";
	ob1.display();
	cout<<"YOUR SECOND SET IS:\n";
	ob2.display();
	do{
		cout<<"\t\t*****    MENU    *****\n"
			<<"\t\t1.UNION OF SETS\n"
			<<"\t\t2.INTERSECTION OF SETS\n"
			<<"\t\t3.SET DIFFERENCE\n"
			<<"\t\t4.SYMMETRIC DIFFERENCE\n"
			<<"\t\t5.ASSIGNMENT OPERATOR\n"
			<<"\t\t6.EQUALITY OF SETS\n"
			<<"\t\tENTER YOUR CHOICE:";
			cin>>n;
			cout<<"\n";
		switch(n)
		{
			case 1:			{
								MySet ob3=ob1+ob2;
								cout<<"UNION OF SETS IS:\n";
								ob3.display();
								break;
							}		
			case 2:			{
								MySet ob3=ob1*ob2;
								cout<<"\nINTERSECTION OF SETS IS:\n";
								ob3.display();
								break;		
							}
			case 3:			{
								MySet ob3=ob1-ob2;
								cout<<"\nDIFFERENCE OF SETS IS:\n";
								ob3.display();	
								break;
							}	
			case 4:			{
								MySet ob5=ob1^ob2;
								cout<<"\nSYMMETRIC DIFFERENCE IS:\n";
								ob5.display();
								break;
							}				
			case 5:			{
								MySet ob3(s1),ob4(s2);
								ob3=ob1;
								ob4=ob2;
								cout<<"\nASSIGNMENT OF FIRST SET IS:";
								ob3.display();
								cout<<"\nASSIGNMENT OF SECOND SET IS:";
								ob4.display();
								break;
							}				
			case 6:			{
								if(ob1==ob2)
               					{
                    				cout<<"BOTH SETS ARE EQUAL\n";
               					}
               					else
               					{
                    				cout<<"BOTH SETS ARE NOT EQUAL\n";
               					}
								break;
							}	
			default:  		cout<<"\nWRONG CHOICE!!";
		}
		cout<<"\nDo you want to continue(y/n):";
		cin>>ch;
		}while(ch=='y'||ch=='Y');
	return 0;
}

