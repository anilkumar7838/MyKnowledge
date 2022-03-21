#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* builtBST(int preorder[],int n,int &preorderIdx,int key,int max,int min){
    if(preorderIdx>n){
        return NULL;
    }
    node* root=NULL;
    if(key<max and key>min){
        root=new node(key);
        preorderIdx+=1;
        if(preorderIdx<n){
            root->left=builtBST(preorder,n,preorderIdx,preorder[preorderIdx],key,min);
        }
        if(preorderIdx<n){
            root->right=builtBST(preorder,n,preorderIdx,preorder[preorderIdx],max,key);
        }
    }
    return root;
}
void printPreorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
    int preorder[]={10,2,1,13,11};
    int n=5,idx=0;
    node* root=builtBST(preorder,n,idx,preorder[0],INT32_MAX,INT32_MIN);
    printPreorder(root);
}