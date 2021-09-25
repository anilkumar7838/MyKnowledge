#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left,*right;
    node(int val){
        data=val;
    }
};
node* builtBST(int a[],int st,int en){
    if(st>en){
        return NULL;
    }
    int mid=(st+en)/2;
    node* root=new node(a[mid]);
    root->left=builtBST(a,st,mid-1);
    root->right=builtBST(a,mid+1,en);
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    int arr[]={10,20,30,40,50};
    node* root=builtBST(arr,0,4);
    inorder(root);
}