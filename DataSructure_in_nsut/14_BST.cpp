#include<iostream>
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
int searchEle(node* root,int ele){
    if(root==NULL){
        return -1;
    }
    if(root->data==ele){
        return 1;
    }
    int left=searchEle(root->left,ele);
    if(left!=-1){
        return left;
    }
    return searchEle(root->right,ele);
}
node* createBST(node* &root,int val){
    if(searchEle(root,val)==1){
        cout<<val<<" is Duplicate Element"<<endl;
    }
    else{
        
    if(root==NULL){
        return new node(val);
    }

    if(val<root->data){
        root->left=createBST(root->left,val);
    }
    else if(val>root->data){
        root->right=createBST(root->right,val);
    }
    return root;
    }
}
node* inorderSucc(node* root){
    if(root!=NULL&& root->left!=NULL){
        root=root->left;
    }
    return root;
}
node* deletionBST(node* &root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data>val){
        root->left=deletionBST(root->left,val);
    }
    else if(root->data<val){
        root->right=deletionBST(root->right,val);
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
            root->right=deletionBST(root->right,val);
    }
    return root;
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
    int n,val,ele;
    node* root=NULL;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"enter the number: ";
    cin>>val;
    root=createBST(root,val);
    while(--n){
        cout<<"enter the number: ";
        cin>>val;
        createBST(root,val);
    }
    inorderPrint(root);
    cout<<endl;
    cout<<"enter the element you want to find: ";
    cin>>ele;
    if(searchEle(root,ele)==1){
        cout<<ele<<" is found in Binary Search Tree"<<endl;
    }
    else{
        cout<<ele<<" is not found in Binary Search Tree"<<endl;
    }
    deletionBST(root,2);
    deletionBST(root,4);
    deletionBST(root,1);
    inorderPrint(root);
    return 0;
}