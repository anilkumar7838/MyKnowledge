#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* prev;
        node* next;
        node(int val){
            data=val;
            prev=NULL;
            next=NULL;
        }
};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void insertAtTail(node* &head,int value){
    node* temp=head;
    node* n=new node(value);
    if(head==NULL){
        insertAtHead(head,value);
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void insertAtpos(node* &head,int val,int pos){  // Work for only mid term
    node* temp=head;
    node* n=new node(val);
    int count=1;
    while(temp!=NULL && ((count+1)<pos)){
        temp=temp->next;
        count++;
    }
    node* nextptr=temp->next;
    temp->next=n;
    n->prev=temp;
    nextptr->prev=n;
    n->next=nextptr;
}

void deleteAtStart(node*&head){
    node* temp;
    temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    delete temp;
}

void deletion(node* &head,int val){  //not for starting elements
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head->next==NULL){
        deleteAtStart(head);
    }
    else{
       node* temp=head;
       while(temp->data!=val){
           temp=temp->next;
       }
       temp->prev->next=temp->next;
       if(temp->next!=NULL){
        temp->next->prev=temp->prev;
       }
       delete temp;
    }

}


void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    insertAtHead(head,0);
    display(head);
    deletion(head,3);
    display(head);
    deletion(head,5);
    display(head);
    deleteAtStart(head);
    display(head);
    insertAtpos(head,3,3);
    display(head);
    insertAtpos(head,6,2);
    display(head);
}