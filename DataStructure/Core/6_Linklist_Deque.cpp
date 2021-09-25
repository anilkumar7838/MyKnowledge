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
class deque{
    node* front;
    node* back;
    node* prev;
public:
    deque(){
        front=NULL;
        back=NULL;
        prev=NULL;
    }
    void pushFront(int x){
        node* n=new node(x);
        if(front==NULL){
            front=n;
            back=n;
            prev=n;
            return;
        }
        else{
            front=n;
            n->next=prev;
            prev=n;
        }
    }
    int popFront(){
        if(front==NULL){
            cout<<"deque is empty"<<endl;
            return -1;
        }
        node* todelete=front;
        int item=front->data;
        front=front->next;
        delete todelete;
        return item;
    }
    void pushBack(int x){
        node* n=new node(x);
        if(front==NULL){
            front=n;
            back=n;
            return;
        }
        else{
            back->next=n;
            back=n;
        }        
    }
    int popBack(){
        node* itr;
        // node* todelete;
        if(front==NULL){
            cout<<"deque is empty"<<endl;
            return -1;
        }
        else if(front->next==NULL){
            int item=front->data;
            delete front;
            front=back=NULL;
            return item;
        }
        else{
            for(itr=front;itr->next!=back;itr=itr->next){}
            int item=back->data;
            delete back;
            itr->next=NULL;
            back=itr;
            return item;
            }
    }
};
int main(){
    deque q1;

    q1.pushFront(1);
    q1.pushFront(2);
    q1.pushFront(3);
    q1.pushFront(4);

    cout<<q1.popFront()<<endl;
    cout<<q1.popFront()<<endl;
    cout<<q1.popFront()<<endl;
    cout<<q1.popFront()<<endl;
    
    cout<<q1.popFront()<<endl;

    q1.pushBack(5);
    q1.pushBack(6);
    q1.pushBack(7);
    q1.pushBack(8);

    cout<<q1.popBack()<<endl;
    cout<<q1.popBack()<<endl;
    cout<<q1.popBack()<<endl;
    cout<<q1.popBack()<<endl;

    cout<<q1.popBack()<<endl;
    return 0;
}