#include<iostream>
using namespace std;
struct node{
    int info;
    node* link;
};
class linklist{
public:
    node* start;
    node* end;
    linklist(){
        start=NULL;
        end=NULL;
    }
    void insertAtlast();
    void insertAthead();
    void display();
};
void linklist::insertAthead(){
    node* ptr=new node();
    cout<<"enter the value: ";
    cin>>ptr->info;
    // ptr->link=NULL;
    if(start==NULL){
        start=ptr;
        end=ptr;
    }
    else{
        ptr->link=start;
        start=ptr;
    }
}
void linklist :: insertAtlast(){
    node* ptr=new node();
    cout<<"enter the value: ";
    cin>>ptr->info;
    ptr->link=NULL;
    if(start==NULL){
        start=ptr;
        end=ptr;
    }
    else{
        end->link=ptr;
        end=ptr;
    }
}
void linklist::display(){
    node* temp=start;
    while(temp!=NULL){
        cout<<temp->info<<"->";
        temp=temp->link;
    }
    cout<<"NULL"<<endl;
}
int main(){
    linklist lk;
    char ch='y';
    do{
        lk.insertAtlast();
        cout<<"Do want to continue y/n: ";
        cin>>ch;
    }
    while(ch!='n');
    lk.display();   
    do{
        lk.insertAthead();
        cout<<"Do want to continue y/n: ";
        cin>>ch;
    }
    while(ch!='n');
    lk.display();   
}