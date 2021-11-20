/*
    NAME:                   ANIL KUMAR
    ROLL NUMBER:            2020UCD2101
    CLASS AND SECTION :     CSDS 01
    MOBILE NUMBER:          7838180782
*/
// *********** Algo 1 *********
// using singly Linked list
#include<iostream>
#include<fstream>
using namespace std;

class node{
    public:
    int data;
    node* link;
    node(int info){
        data=info;
        link=NULL;
    }
};


void insertLL(node* &head,int ele){
    node* n=new node(ele);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=n;
    return;
}

int FPE(node* head,int &count){
    if(head==NULL){
        return -1;
    }
    node* prev,*curr,*next;
    prev=head;
    if(prev->link!=NULL){
        curr=head->link;
    }else{
        count++;
        return prev->data;
    }
    if(prev->link->link!=NULL){
        next=head->link->link;
    }

    while(next!=NULL){
        int x=curr->data;
        count++;
        if(prev->data<x and next->data<x){
            return x;
        }
        prev=curr;
        curr=next;
        next=next->link;
    }
    return -1;
}

int main(){
    int n,ele,count=0;
    node* head=NULL;
    fstream fin,fout;
    fin.open("input.txt",ios::in);
    fin>>n;
    while(n--){
        fin>>ele;
        insertLL(head,ele);
    }
    fout.open("output.txt",ios::out);
    ele=FPE(head,count);
    fout<<ele<<endl;
    fout<<"Number of Comparsion is: "<<count<<endl;
    fin.close();
    fout.close();
    return 0;
}

/*

input 1: 
5
2 4 6 5 9
input 2: 
7
15 25 20 7 28 95 72

*/

/*
    "I have done this assignment on my own. I have not copied any code
    from another student or any online source. I understand if my code is
    found similar to somebody else's code, my case can be sent to the
    Disciplinary committee of the institute for appropriate action."

*/