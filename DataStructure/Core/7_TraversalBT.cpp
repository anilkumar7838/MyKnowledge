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
// for traverse
void traverse(node* root){
    if(root==NULL){
        return;
    }
    queue<node*> q1;
    q1.push(root);
    q1.push(NULL);
    while(!q1.empty()){
        node* temp=q1.front();
        q1.pop();
        if(temp!=NULL){
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q1.push(temp->left);
            }
            if(temp->right!=NULL){
                q1.push(temp->right);
            }
        }   
        else if(!q1.empty()){
            q1.push(NULL);
        }
    }   
}

// for sum at level k
int KlevelSum(node* root,int k){
    if(root==NULL){
        return 0;
    }
    int layer=1,sum=0;
    queue<node*> q1;
    q1.push(root);
    q1.push(NULL);
    while(!q1.empty()){
            node* temp=q1.front();
            q1.pop();
        if(temp!=NULL){
            if(layer==k){
                sum+=temp->data;
            }
            if(temp->left!=NULL){
                q1.push(temp->left);
            }
            if(temp->right!=NULL){
                q1.push(temp->right);
            }
        }
        else if(!q1.empty()){
            q1.push(NULL);
            layer++;
        }
    }
    return sum;
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
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->left->right=new node(8);
    // inorder(root);
    traverse(root);
    // cout<<KlevelSum(root,1)<<endl;
return 0;
}