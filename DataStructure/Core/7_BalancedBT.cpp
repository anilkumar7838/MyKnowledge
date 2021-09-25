#include<iostream>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool balTree(node *root,int *height){
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(balTree(root->left,&lh)==false){
        return false; 
    }
    if(balTree(root->right,&rh)==false){
        return false;
    }
    *height=lh+rh+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


        /*       1
               /   \
              2     3
             / \   / \
            4   5 6   7 
        */

int main(){
    struct node *root=new node(1);
    root->left=new node(2);
    // root->right=new node(3);
    root->left->left=new node(4);
    // root->left->right=new node(5);
    // root->right->left=new node(6);
    // root->right->right=new node(7);
    int h=0;
    cout<<balTree(root,&h)<<endl;
    preorder(root);
    cout<<endl;
return 0;
}