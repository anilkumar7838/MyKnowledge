#include<iostream>
#include<queue>
using namespace std;
struct node{
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
int high(node* root){
    static int hgt=0;
    if(root==NULL){
        return 0;
    }
    hgt=max(high(root->left),high(root->right));
    hgt++;
    return hgt;
}
void leftview(node* root){
    queue<node*> q1;
    q1.push(root);
    while(!q1.empty()){
        int n=q1.size();
        for(int i=0;i<n;i++){
            node* temp=q1.front();
            q1.pop();
            if(i==0){
                cout<<temp->data<<" ";
            }
            if(temp->left!=NULL){
                q1.push(temp->left);
            }
            if(temp->right!=NULL){
                q1.push(temp->right);
            }
        }
    }
}

int main(){
    struct node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    // root->right->right=new node(7);
    // int h=0;
    leftview(root);
}