//diameter of binary tree
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
int distance(node* root,int *val){
    if(root==NULL){
        return -1;
    }
    int lh=0,rh=0;
    static int ans=0;
    distance(root->left,&lh);
    distance(root->right,&rh);
    if(root->data!=-1){
        *val=max(lh,rh)+root->data;
        int curr=lh+rh+root->data;
        // cout<<"lh: "<<lh<<" rh: "<<rh<<" root->data: "<<root->data<<" ";
        ans=max(curr,ans);
        // cout<<sum<<endl;
    }
    return ans;
}


int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->left->left=new node(6);
    root->left->left->left->left=new node(8);
    root->left->right=new node(5);
    root->left->right->right=new node(7);
    root->left->right->right->left=new node(9);
    root->right->left=new node(8);
    root->right->left->left=new node(10);
    int val=0;
    cout<<distance(root,&val);

    return 0;
}