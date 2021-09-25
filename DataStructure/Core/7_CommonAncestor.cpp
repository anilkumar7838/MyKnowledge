#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* Ancestor(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1||root->data==n2){
        return root;
    }
    node* left=Ancestor(root->left,n1,n2);
    node* right=Ancestor(root->right,n1,n2);
    if(left!=NULL and right!=NULL){
      return root;  
    }
    if(left!=NULL and right==NULL){
        Ancestor(root->left,n1,n2);
    }
    if(left==NULL and right!=NULL){
        Ancestor(root->right,n1,n2);
    }
    if(left!=NULL and right!=NULL){
        return NULL;
    }
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->right->left=new node(8);
    node* temp=Ancestor(root,4,8);
    cout<<temp->data<<endl;
}