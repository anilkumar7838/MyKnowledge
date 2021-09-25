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

int sumN(node* root){
    static int sum=0;
    if(root==NULL){
        return 0;
    }
    sum+=root->data;
    sumN(root->left);
    sumN(root->right);

    return sum;
}

int sumNode(node* root){
    if(root==NULL){
        return 0;
    }
    return (sumNode(root->left)+sumNode(root->right)+(root->data));
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->right->left=new node(8);
    root->right->left->left=new node(9);
    cout<<sumN(root)<<endl;
    cout<<sumNode(root)<<endl;
    return 0;
}