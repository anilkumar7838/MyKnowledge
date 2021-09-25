#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	node *next;
};
class cll
{
	private:
		node *tail;
	public:
		cll()
		{
			tail=NULL;
		}
	/*	cll(int i,node *p=NULL)
		{
			node->data=i;
			tail=p;	
		}
*/		~cll()
		{
			node *prev,*nextnode;
			prev=NULL;
			nextnode=tail;
			do
			{
				prev=nextnode;
				nextnode=nextnode->next;
				delete prev;	
			}while(nextnode->next!=tail->next);
			delete nextnode;
		}
		void insert_beg();
		void insert(int);
		void insert_pos(int);
		void insert_end();
		node* search_ele(int);
		void delete_beg();
		void delete_pos(int);
		void delete_end();
		int count();
		void concatenate(cll&);
		void display();
};
//void cll::insert(int n)
//{
//	node *newnode=new node;
//	newnode->data=n;
//	newnode->next=NULL;
//	if(head==NULL)
//	{
//		head=tail=newnode;
//	}
//	else
//	{
//		tail->next=newnode;
//		tail=newnode;
//	}
//	tail->next=head;
//	cout<<" ---------  CHECKING ---------- :"<<tail->next->data<<endl;
//}
void cll::insert_beg()
{
	node *newnode=new node;
	cout<<"\nEnter Data:";
	cin>>newnode->data;
	newnode->next=NULL;
	if(tail==NULL)
	{
		tail=newnode;
		tail->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
	}
}
void cll::insert(int n)
{
	
	cout<<"\nEnter data:\n";
	for(int i=0;i<n;i++)
	{
		node *newnode=new node;
		cin>>newnode->data;
		newnode->next=NULL;
		if(tail==NULL)
		{
			tail=newnode;
			tail->next=newnode;
		}
		else
		{
			newnode->next=tail->next;
			tail->next=newnode;
			tail=newnode;
		}
	}
	
}
void cll::insert_pos(int pos)
{
	if(pos<1)
	{
		cout<<"\nInvalid position!!\n";
	}
	else if(pos==1)
	{
		insert_beg();
	}
	else
	{
		node *newnode,*temp;
		newnode=new node;
		cout<<"\nEnter Data:";
		cin>>newnode->data;
		newnode->next=NULL;
		temp=tail->next;
		int i=1;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		temp=newnode;
	}
}
void cll::insert_end()
{
	if(tail==NULL)
	{
		insert_beg();
	}
	else
	{
		node *newnode=new node;
		cout<<"\nEnter Data:";
		cin>>newnode->data;
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
	}
}
node* cll::search_ele(int ele)
{
	node *temp=tail->next;
	int flag =-1;
	while(temp->next!=tail->next)
	{
		if(temp->data==ele)
		return temp;
		temp=temp->next;
	}
	return NULL;
} 
void cll::delete_beg()
{
	node *temp=tail->next;
	if(tail==NULL)
	{
		cout<<"Deletion Not Possible!!";
	}
	else if(temp->next==temp)
	{
		tail=NULL;
		delete temp;
	}
	else
	{
		tail->next=temp->next;
		delete temp;
	}
}
void cll::delete_pos(int pos)
{
	node *temp=tail->next;
	if(tail==NULL)
	{
		cout<<"\nList is already Empty!!";
	}
	else if(temp->next==temp)
	{
		tail=NULL;
		delete temp;
	}
	else if(pos==(int)count())
	{
		delete_end();
	}
	else
	{
		node *prev=NULL;
		int i=1;
		while(i<pos)
		{
			prev=temp;
			temp=temp->next;
			i++;
		}
		prev->next=temp->next;
		temp->next=NULL;
		delete temp; 
	}
}
void cll::delete_end()
{
	node *temp=tail->next;
	if(tail==NULL)
	{
		cout<<"\nList is already Empty!!";
	}
	else if(temp->next==temp)
	{
		tail=NULL;
		delete temp;
	}
	else
	{
		node *prev=NULL;
		while(temp->next!=tail->next)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=tail->next;
		tail=prev;
		delete temp;
	}
}
int cll::count()
{
	int i=1;
	node *temp=tail->next;
	while(temp->next!=tail->next)
	{
		i++;
		temp=temp->next;
	}
	return i;
}

void cll::concatenate(cll& obj)
{
	node *l1,*l2;
	l1=this->tail->next;
	l2=obj.tail->next;
	// cout<<"\nthis->tail->data: "<<this->tail->data;
	// cout<<"\nthis->tail->next->data: "<<this->tail->next->data;
	// cout<<"\nobj.tail->data: "<<obj.tail->data;
	// cout<<"\nobj.tail->next->data: "<<obj.tail->next->data;
	// cout<<"\nl1->data: "<<l1->data;
	// cout<<"\nl2->data: "<<l2->data;
	this->tail->next=l2;
	// cout<<"\nthis->tail->data: "<<this->tail->data;
	// cout<<"\nthis->tail->next->data: "<<this->tail->next->data;
	obj.tail->next=l1;
	// cout<<"\nobj.tail->data: "<<obj.tail->data;
	// cout<<"\nobj.tail->next->data: "<<obj.tail->next->data;
	this->tail=obj.tail;
	// cout<<"\nthis->tail->data: "<<this->tail->data;
	// cout<<"\nthis->tail->next->data: "<<this->tail->next->data;
	this->display();
}
void cll::display()
{
	if(tail==NULL)
	{
		cout<<"List is Empty!!";
		exit(0);
	}
	else
	{
		cout<<"\nCircular Linked list is: ";
		node *temp=tail->next;
		do
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}while(temp->next!=tail->next);
		cout<<temp->data;			
	}
	cout<<"\n\t\tcross-check: "<<tail->next->data;
	cout<<"\n\tCOUNT = "<<count(); 
} 
int main()
{
	cll ob;
	int num,ch,pos;
	char choice='n';
	cout<<"Enter no. of elements to be enter in cll:";
	cin>>num;
	ob.insert(num);
//	cout<<"Enter elements in cll:";
//	for(int i=0;i<num;i++)
//	{
//		cin>>ele;
//		ob.insert(ele);	
//	}
	do
	{
		cout<<"\t\t------ OPERATION-MENU FOR CLL ------\n"
			<<"\t\t1.INSERT AT BEGINNING\n"
			<<"\t\t2.INSERTION IN CLL\n"
			<<"\t\t3.INSERT AT GIVEN POS\n"
			<<"\t\t4.INSERT AT LAST IN CLL\n"
			<<"\t\t5.DELETE FIRST NODE IN CLL\n"
			<<"\t\t6.DELETE NODE FROM GIVEN POSITION\n"
			<<"\t\t7.DELETE LAST NODE IN CLL\n"
			<<"\t\t8.SEARCH GIVEN ELEMENT IN CLL\n"
			<<"\t\t9.CONCATENATE TWO CLL\n"
			<<"\t\t10.DISPLAY CLL\n"
			<<"\t\tEnter your Choice(1-5):";
		cin>>ch;
		switch(ch)
		{
			case 1:		{
							ob.insert_beg();
							ob.display();
							break;
						}
			case 2:		{
							cout<<"\nHow many Elements:";
							cin>>num;
							ob.insert(num);
							ob.display();
							break;
						}
			case 3:		{
							cout<<"\nEnter position for insertion:";
							cin>>pos;
							ob.insert_pos(pos);
							ob.display();
							break;
						}
			case 4:		{
							ob.insert_end();
							ob.display();
							break;
						}
			case 5:		{
							ob.delete_beg();
							ob.display();					
							break;
						}	
			case 6:		{
							cout<<"\nEnter position:";
							cin>>pos;
							ob.delete_pos(pos);
							ob.display();			
							break;
						}							
			case 7:		{
							ob.delete_end();
							ob.display();
							break;
						}
			case 8:		{
							node *ptr=NULL;
							cout<<"\nEnter element to be search in cll:";
							cin>>num;
							ptr=ob.search_ele(num);
							if(ptr==NULL)
							{
								cout<<"\nGiven element is not present in cll"<<endl;
							}
							else
							{
								cout<<"\nGiven element is present in cll";
								cout<<" & Pointer to given element is : "<<ptr<<endl;
							}
							break;
						}								
			case 9:		{
							cll ob2;
							cout<<"\n---  Enter second cll for concatenation  ---\n";
							cout<<"How many elements you want to enter: ";
							cin>>num;
							ob2.insert(num);
							ob.concatenate(ob2);
							cout<<"\n***  CLL AFTER CONCATENATION  ***\n";
							ob.display();
//							cout<<"\n--- NOW CLL ATTRIBUTES IN MAIN ---\n"
//								<<"\nCLL FIRST ELEMENT: "<<ob.tail->next->data
//								<<"\nCLL FIRST ELEMENT(BY second list pointer): "<<ob.tail->data;
//	
							break;
						}			
			case 10:	{
							ob.display();
							break;
						}			
			default :	cout<<"\n\tInvalid choice!!\n";
		}	
		cout<<"\n\tDo you want to continue(y/n):";
		cin>>choice;
	}while(choice=='y' || choice=='Y');
	return 0;
}
