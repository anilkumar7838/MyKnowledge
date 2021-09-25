#include<iostream>
using namespace std;
class node {
    public:
        int data;
        node *next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAthead(node* &head,int val){
    node* temp=head;
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        insertAthead(head,val);
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}

void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

    }while(temp!=head);
    cout<<endl;
}

void deleteAthead(node* &head){
    node* todelete=head;
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
    delete todelete;
}

void deletion(node* &head,int val){
    node* temp=head;
    if(head==NULL){
        cout<<"List is empty"<<endl;
    }
    if(head->next==NULL){
        deleteAthead(head);
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next; 
    delete todelete;
}

int main(){
    node* head= NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    insertAthead(head,6);
    display(head);
    deletion(head,4);
    display(head);
    deleteAthead(head);
    display(head);

}