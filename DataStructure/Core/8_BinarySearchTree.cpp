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

node* BuiltBST(node* &root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(root->data>val){
        root->left=BuiltBST(root->left,val);
    }
    else{
        root->right=BuiltBST(root->right,val);
    }
    return root;
}

int search(node* root,int val){
    if(root==NULL){
        return -1;
    }
    if(root->data==val){
        return 1;
    }
    int left=search(root->left,val);
    if(left!=-1){
        return left;
    }
    return search(root->right,val);
}
node* inorderSucc(node* root){
    node* curr=root;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
node* deleteBST(node* &root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data>val){
        root->left=deleteBST(root->left,val);
    }
    else if(root->data<val){
        root->right=deleteBST(root->right,val);
    }
    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;

        }
        node* temp=inorderSucc(root->right);
        root->data=temp->data;
        temp->data=val;
        root->right=deleteBST(root->right,val);
    }
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
    node* root=NULL;
    root=BuiltBST(root,5);
    BuiltBST(root,1);
    BuiltBST(root,3);
    BuiltBST(root,4);
    BuiltBST(root,2);
    BuiltBST(root,8);
    // cout<<root->left->data<<endl;
    BuiltBST(root,7);
    inorder(root);
    cout<<endl;
    // cout<<search(root,2)<<endl;
    // cout<<search(root,8)<<endl;
    
    deleteBST(root,3);
    deleteBST(root,4);
    deleteBST(root,8);
    deleteBST(root,5);  
    inorder(root);

}