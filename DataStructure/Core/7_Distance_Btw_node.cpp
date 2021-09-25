#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int height(node* root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=height(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return height(root->right,k,dist+1);
}
node* lstparent(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1||root->data==n2){
        return root;
    }
    node* left=lstparent(root->left,n1,n2);
    node* right=lstparent(root->right,n1,n2);

    if(left!=NULL&&right!=NULL){
        return root;
    }
    if(left!=NULL&&right==NULL){
        return lstparent(root->left,n1,n2);
    }
    if(left==NULL&&right==NULL){
        return NULL;
    }
    if(left==NULL&&right!=NULL){
        return lstparent(root->right,n1,n2);
    }
}
int DistNode(node* root,int n1,int n2){
    node* temp=lstparent(root,n1,n2);
    return (height(temp,n1,0)+height(temp,n2,0));
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->left->right=new node(8);
    cout<<DistNode(root,8,4);
    // cout<<height(root,8,0);
return 0;
}