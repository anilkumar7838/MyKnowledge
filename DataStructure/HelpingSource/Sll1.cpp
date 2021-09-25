#include<iostream>

using namespace std;
struct node
{
	int data;
	node *next;
};
class sll
{
	public:
		node *head;
		sll()
		{
			head=NULL;
		}
		~sll()
		{
			node *ptr1,*ptr2;
			ptr1=head;
			ptr2=NULL;
			while(ptr1!=NULL)
			{
				ptr2=ptr1;
				ptr1=ptr1->next;
				delete ptr2;
			}
			delete ptr1;
		}
		void insert();
		void display();
		void insert_pos(int);
		void insert_beg(int);
		void insert_end(int);
		void remove_front();
		void remove_pos(int);
		void remove_end();
		node* search(int);
		void concatenate(sll);
		//friend ostream&	operator <<(ostream& out,const sll&);
}; 
void sll::insert_beg(int ele)
{
	node *newnode=new node;
	if(head==NULL)
	{
		newnode->data=ele;
		newnode->next=NULL;
	}
	else
	{
		newnode->data=ele;
		newnode->next=head;
	}
	head=newnode;
}
void sll :: insert()
{
	int ele,n,i=1;
	cout<<"Enter no. of elements to be enter in sll:";
	cin>>n;
	cout<<"Enter elements : \n";
	do{
		cin>>ele;
		if(head==NULL)
		{
			insert_beg(ele);
		}
		else
		{
			insert_end(ele);
		}
		i++;
	}while(i<=n);
}

void sll :: insert_pos(int pos)
{
	node *newnode,*temp;
	newnode=new node;
	temp=head;
	int i=1;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	cout<<"\nEnter data of node:";
	cin>>newnode->data;
	newnode->next=temp->next;
	temp->next=newnode;
	
	//temp=newnode;
}

void sll::insert_end(int ele)
{
	if(head==NULL)
	{
		cout<<"\nList is Empty!!"; 
	}
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	node *newnode=new node;
	newnode->data=ele;
	newnode->next=NULL;
	temp->next=newnode;
	temp=newnode;
}

/*int count()
{
    int count=0;
    node *ptr = head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
*/
void sll::remove_front()
{
	node *temp=head;
	head=head->next;
	delete temp;
}
void sll::remove_pos(int pos)
{
	node *prev,*current;
	current=head;
	prev=NULL;
	int i=1;
	while(i<pos)
	{
		prev=current;
		current=current->next;
		i++;
	}
	prev->next=current->next;
	delete current;	
}

void sll::remove_end()
{
	node *prev,*current;
	current=head;
	prev=NULL;
	while(current->next!=NULL)
	{
		prev=current;
		current=current->next;
	}
	prev->next=NULL;
	delete current;
}
node* sll::search(int ele)
{
    if(head==NULL)
        return NULL;   
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==ele)
        return temp;
        temp=temp->next;
    }
    return NULL;
}
void sll::concatenate(sll ob)
{
	node *concat=this->head;
	while(concat->next!=NULL)
	{
		concat=concat->next;
	}
	concat->next=ob.head;
	delete ob.head;
}
void sll :: display()
{
	if(head==NULL)
	{
		cout<<"\nGiven list is Empty!!";
	}
	else
	{
		node *pt=head;
		while(pt!=NULL)
		{
			cout<<pt->data;
			if(pt->next!=NULL)
			cout<<" -> ";
			pt=pt->next;
		}
	}
}
/*ostream& operator <<(ostream& out,const sll& ob)
{
	if(ob.head==NULL)
	out<<"Empty list";
	else
	{
		node *p=ob.head;
		while(p!=NULL)
		{
			out<<p->data<<" ";
			p->next;
		}
	}
}*/
int main()
{
	sll ob;
	int ele,pos,ch;
	char choice='n';
	ob.insert();
	cout<<"Entered list is:";
	ob.display();
	do
	{
		cout<<"\n\n\t******  OPERATION MENU FOR SINGLY LINKED LIST  ******\n"
    	 	<<"\t\t1.INSERT ELEMENT AT FRONT\n"
			<<"\t\t2.INSERT ELEMENT AT SPECIFIC POSITION\n"
			<<"\t\t3.INSERT ELEMENT AT END\n"
			<<"\t\t4.REMOVE ELEMENT FROM FRONT\n"
			<<"\t\t5.REMOVE ELEMENT FROM SPECIFIC POSITION\n"
			<<"\t\t6.REMOVE ELEMENT FROM END\n"
			<<"\t\t7.SEARCH ELEMENT IN LIST\n"
			<<"\t\t8.CONCATENATE TWO LIST\n"
			<<"\n\t\t Enter your choice(1-6):";
		cin>>ch;
		switch(ch)
		{
			case 1:		{
							cout<<"Enter element to insert at front : ";
    						cin>>ele;
							ob.insert_beg(ele);
							cout<<"\nUpdated Singly Linked List is :\n";
							ob.display();
//							cout<<"\nUpdated Singly Linked List is:\n"<<ob_1;
							break;
						}
		
			case 2:		{
							cout<<"Enter position to insert element : \n";
    						cin>>pos;
							ob.insert_pos(pos);
    						cout<<"\nUpdated Singly Linked List is :\n";
							ob.display();
//							cout<<"\nUpdated Linked List is:\n"<<ob_1;
							break;
						}
			
			case 3: 	{
							cout<<"\nEnter element to insert at end : ";
							cin>>ele;
							ob.insert_end(ele);
							cout<<"\nUpdated Singly Linked List is :\n";
							ob.display();
							break;
						}
			
			case 4:		{
							ob.remove_front();
    						cout<<"\nUpdated Singly Linked List is :\n";
							ob.display();
//							cout<<"\nUpdated Linked List is:\n"<<ob_1;
							break;
						}
			
			case 5:		{
							cout<<"Enter position of element to be removed\n";
							cin>>pos;
							ob.remove_pos(pos);
							cout<<"\nUpdated Singly Linked List is :\n";
							ob.display();
//						    cout<<"\nUpdated Linked List is:\n"<<ob_1;	
							break;
						}
			case 6:		{
							ob.remove_end();
    						cout<<"\nUpdated Singly Linked List is :\n";
							ob.display();		
							break;
						}				
			case 7:		{	
							cout<<"Enter element to be searched in List : ";
    						cin>>ele;
    						node *res=ob.search(ele);
    						if(res==NULL)
        					cout<<"\nElement not found\n";
   							else
   							cout<<"\nElement found "<<"having pointer "<<res<<"\n";
       						break;
						}
									
			case 8:		{
							cout<<"\nEnter another SLL to concatenate in existing SLL\n";
  							sll ob2;
							ob2.insert();
    						ob.concatenate(ob2);
   						    cout<<"\nCONCATENATED LINKED LIST IS:";
							ob.display();
   						    break;
   						}
  						    
   			default:    cout<<"\nWrong Choice!!";
		}	
			cout<<"\n Do you want to continue(y/n):";
			cin>>choice;
		}while(choice=='y' || choice=='Y');
        return 0;
}
