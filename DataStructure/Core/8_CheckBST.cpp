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
node* builtBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(root->data>val){
        root->left=builtBST(root->left,val);
    }
    if(root->data<val){
        root->right=builtBST(root->right,val);
    }
    return root;
}
bool checkBST(node* root,int max,int min){
    if(root==NULL){
        return true;
    }
    if(root->data<=min || root->data>=max){
        return false;
    }
    bool left=checkBST(root->left,root->data,min);
    bool right=checkBST(root->right,max,root->data);
    return left and right;
}
void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
} 
int main(){
    node* root=NULL;
    node* root1=NULL;
    // case 1
    root1=new node(3);
    root1->left=new node(2);
    root1->right=new node(4);
    root1->left->left=new node(1);
    root1->left->right=new node(5);
    // case 2
    root=builtBST(root,5);
    builtBST(root,1);
    builtBST(root,3);
    builtBST(root,4);
    builtBST(root,2);
    builtBST(root,8);
    inorderPrint(root1);
    cout<<endl;
    cout<<"Check BST: "<<checkBST(root1,INT_MAX,INT_MIN)<<endl;
    inorderPrint(root);
    cout<<endl;
    cout<<"Check BST: "<<checkBST(root,INT_MAX,INT_MIN)<<endl;
}