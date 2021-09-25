#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* temp=head;
    node* n=new node(val);
    if(temp==NULL){
        head=n;
    }
    n->next=temp;
    head=n;
}
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(temp==NULL){
        insertAtHead(head,val);
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
node* search(node* head,int val){
    while(head!=NULL){
        if(head->data==val){
            return head;
        }
        head=head->next;
    }
    return NULL;
}
void insertAfterLoc(node* &head,int ele,int val){   //This insert a value after a given term
    node* pos=search(head,ele);
    if(pos==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    if(pos!=NULL){
        node* temp=head;
        while(temp!=pos){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
    }
}
int searchNode(node* head,int val){   //unsorted
    int i=0;
    while(head!=NULL){
        if(head->data==val){
            return i+1; 
        }
        i++;
        head=head->next;
    }
    return -1;
}
int searchNode1(node* head,int val){    //sorted
    int i=0;
    while(head!=NULL){
        if(head->data<val){
            return -1;
        }
        if(head->data==val){
            return i+1; 
        }
        i++;
        head=head->next;
    }
    return -1;
}
int searchNode2(node* head,int val){    //sorted
    int i=0;
    while(head!=NULL){
        if(head->data>val){
            return -1;
        }
        if(head->data==val){
            return i+1; 
        }
        i++;
        head=head->next;
    }
    return -1;
}
void display(node* head){
    node* temp=head;
    if(temp==NULL){
        return;
    }
    cout<<"List is: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    insertAtHead(head1,6);
    insertAtHead(head1,7);
    insertAtHead(head1,9);
    insertAtHead(head1,8);
    display(head1);
    // cout<<"(Basic search)"<<"element 9 at pos: "<<searchNode(head1,9)<<endl;
    // cout<<"(Descending search)"<<"element 8 at pos: "<<searchNode1(head1,8)<<endl;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    // display(head2);
    // cout<<"(Basic search)"<<"element 4 at pos: "<<searchNode(head2,4)<<endl;;
    // cout<<"(Ascending search)"<<"element 2 at pos: "<<searchNode2(head2,2)<<endl;
    insertAfterLoc(head1,2,3);
    insertAfterLoc(head1,5,12);
    insertAfterLoc(head1,6,11);
    // display(head);
    display(head1);
    return 0;
}