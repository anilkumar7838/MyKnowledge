/*
    Restore BST When Two Nodes are Violated
*/
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void calPointers(Node* root,Node** first,Node** mid,Node** last,Node** prev){
    if(root==NULL){
        return;
    }
    calPointers(root->left,first,mid,last,prev);

    if(*prev and (root->data < (*prev)->data)){
        if(!*first){
            *first=*prev;
            *mid=root;
        }
        else{
            *last=root;
        }
    }
    *prev=root;
    calPointers(root->right,first,mid,last,prev);
}

void restoreBST(Node* root){
    Node *first=NULL,*mid=NULL,*last=NULL,*prev=NULL;

    calPointers(root,&first,&mid,&last,&prev);
    if(first and last){
        swap(&(first->data),&last->data);
    }
    else if(first and mid){
        swap(&(first->data),&(mid->data));
    }
}

void inorderPrint(Node *root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){
    Node* root=new Node(6);
    root->left=new Node(9);
    root->right=new Node(3);
    root->left->left=new Node(1);
    root->left->right=new Node(4);
    root->right->right=new Node(13);
    // root->left=new Node(9);
    inorderPrint(root);
    cout<<endl;
    restoreBST(root);
    inorderPrint(root);
    cout<<endl;
    return 0;

}