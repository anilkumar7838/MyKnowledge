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
class stack{
    public:
    node* top;
    stack(){
        top=NULL;
    }
    //empty
    int isEmpty(){
        if(top==NULL){
            return 1;
        }
        return 0;
    }
    //push
    void push(int val){
        node* n=new node(val);
        if(top==NULL){
            top=n;
        }
        node* temp=top;
        if(temp->next==NULL){
            temp->next=n;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return;
        }
        node* todelete=top;
        top=top->next;
        delete todelete;
    }
    int peek(){
        if(isEmpty()){
            cout<<"No element in Stack"<<endl;
            return -1;
        }   
        return top->data;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.isEmpty()<<endl;
}