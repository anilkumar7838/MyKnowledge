#include<iostream>
using namespace std;
class node{
    public: 
        int data;
        node* next;

    node(int val){
        data =val;    
        next=NULL;
    }

};

void insertAtTail(node* &head,int val){   //INSERT ELEMENT FROM END
    node* n=new node(val); 

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAthead(node* &head,int value){  //INSERT ELEMENT FROM START
    node* n=new node(value);
    n->next=head;
    head=n;
}

void DeleteAtStart(node* &head){   //DELETE FROM STARTING 
    node* temp;
    temp=head;
    head=head->next;
    delete temp;
}

void Delete(node* &head,int val){    //DELETE  AT VALUE
    node* temp;
    if(head==NULL){
        cout<<"List is already Empty\n";
        return;
    }
    if(head->next==NULL){
        DeleteAtStart(head);
    }
    else{
    temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
        if(temp->next==NULL){
            cout<<"Element is not present in a list"<<endl;
            return;
        }
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    }
}

node* Reverse(node* &head){   //ITERATIVELY PRINT REVERSE LIST
    node* prev=NULL;
    node* curr=head;
    node* nextptr;
    while(curr!=NULL){
    nextptr=curr->next;
    curr->next=prev;

    prev=curr;
    curr=nextptr;
    }
    return prev;
}

node* ReverseRecursive(node* &head){      //RECURSIVELY PRINT A REVERSE LIST 
    if (head==NULL||head->next==NULL){
        return head;
    }

    node* newhead = ReverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

void makecycle(node *&head,int pos){    //MAKE CYCLE IN A LIST
    node* temp=head;
    node* startnode;

    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}

bool detectcycle(node* &head){       // HARE AND TORTOISE ALGORITHM
    node* slow=head;
    node* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            return true;
        }
    }
    return false;

}


void removecycle(node* &head){    // FLOYD'S ALGORITHM
    node* slow=head;
    node* fast=head;
     
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    slow=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}

node* ReverseK(node* &head,int k){   //REVERSE K NODE IN A LIST
    node* prev=NULL;
    node* current = head;
    node * nextptr;

    int count=0;
    while (current!=NULL&& count<k){
        nextptr=current->next;
        current->next=prev;
        
        prev=current;
        current=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=ReverseK(nextptr,k);
    }
    return prev;
}

void display(node* head){
    node* temp=head;
    cout<<"List is : ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* Kappend(node*&head,int k){   //Append k nodes i.e. k=3  input:1 2 3 4 5 6||output:4 5 6 1 2 3
    node* newhead;
    node* newtail;
    node* tail=head;

    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}

void intersect(node* &head1,node* &head2,int pos){   //intersect the linklists at position 
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int intersection(node* &head1,node* &head2){   //check whether linklist intersect each other or not
    int l1,l2;
    node* ptr1;
    node* ptr2;
    l1=length(head1);
    l2=length(head2); 
    int d=0;
    if(l1>l2){
         d=l1-l2;
         ptr1=head1;
         ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        // cout<<d<<endl;;
        ptr1=ptr1->next;
        if(ptr1==NULL){
            // cout<<"inside while loop"<<endl;
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    // cout<<"end"<<endl;
    return -1;
}

node* merge(node* &head1,node* &head2){   //Merge two sorted linklist
    node* ptr1=head1;
    node* ptr2=head2;
    node *dummynode=new node(-1);
    node* ptr3=dummynode;

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummynode->next;
}

node* recursiveMerge(node* &head1,node* &head2){
    node* result;
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->data<head2->data){
        result=head1;
        result->next=recursiveMerge(head1->next,head2);
    }
    else{
        result=head2;
        result->next=recursiveMerge(head1,head2->next);
    }
    return result;
}

void EvenAfterOdd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    if(even->next!=NULL)
    even->next=NULL;
    odd->next=evenstart;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    node* head3=NULL;

    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    display(head1);


    // insertAthead(head2,6);
    // insertAthead(head2,7);
    // insertAthead(head2,8);
    // insertAthead(head2,9);
    // display(head2);


    // Delete(head,6);
    // display(head);
    // Delete(head,7);
    // display(head);
    // DeleteAtStart(head);
    // display(head);


    // node* newhead=Reverse(head);
    // display(newhead);
    // node* newhead=Reverse(head);
    // display(newhead);
    // node* newhead=ReverseK(head,2);
    // display(newhead);


    // bool flag=detectcycle(head);
    // if(flag){
    //     cout<<"The list contained a cycle"<<endl;
    // }
    // else{
    //     cout<<"The list does not contain cycle"<<endl;
    // }
    // // display(head);
    // makecycle(head,2);
    // cout<<detectcycle(head)<<endl;;
    // removecycle(head);
    // cout<<detectcycle(head)<<endl;;
    // display(head);


    // node* newhead=Kappend(head,3);
    // display(newhead);

    // intersect(head1,head2,3);
    // display(head1);
    // display(head2);
    // int d=intersection(head1,head2);
    // cout<<d<<endl;


    // insertAthead(head3,9);
    // insertAthead(head3,8);
    // insertAthead(head3,7);
    // insertAthead(head3,6);
    // display(head3);
    // node *newhead=merge(head1,head3);
    // display(newhead);
    // node *newhead=recursiveMerge(head1,head3);
    // display(newhead);

    EvenAfterOdd(head1);
    display(head1);
    return 0;
}
