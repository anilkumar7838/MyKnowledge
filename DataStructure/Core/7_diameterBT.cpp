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
int highBT(node* root){
    static int high=0;
    if(root==NULL){
        return 0;
    }
    high=max(highBT(root->left),highBT(root->right));
    high++;
    return high;
}
int diameter(node* root){      //O(N^2)
    static int lh=0,rh=0;
    if(root==NULL){
        return 0;
    }
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    int curr=(highBT(root->left)+highBT(root->right)+1);
    return max(curr,max(ld,rd));

}

int lgtPath(node* root,int *h){      //O(N)
    if(root==NULL){
        return 0;
    }
    int lh=0,rh=0;
    static int ans=0;
    lgtPath(root->left,&lh);
    lgtPath(root->right,&rh);
    *h=max(lh,rh)+1;
    int curr=lh+rh+1;
    // lh=highBT(root->left);
    // rh=highBT(root->right);
    ans=max(ans,curr);
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
    // root->right->right->left=new node(8);
    // root->right->left->left=new node(9);
    int h=0;
    // cout<<"Answer 1: "<<diameter(root)<<endl;
    cout<<"Answer 2: "<<lgtPath(root,&h)<<endl;

    return 0;
}