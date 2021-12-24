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

node* inputNode(){
    int ele;
    cout<<"********* Input of a Binary Tree **********\nIf you does not want further(NULL) type: '-1'\nenter the element"<<endl;
    cin>>ele;
    if(ele==-1){
        return NULL;
    }
        node* root=new node(ele);
        root->left=inputNode();
        root->right=inputNode();
        return root;
}
void Traverse(node* root){
    queue<node*> q1;
    q1.push(root);
    while(!q1.empty()){
        int n=q1.size();
        for(int i=0;i<n;i++){
            node* temp=q1.front();
            if(temp!=NULL){
                q1.pop();
                cout<<temp->data<<" ";
                if(temp->left!=NULL){
                    q1.push(temp->left);
                }
                if(temp->right!=NULL){
                    q1.push(temp->right);
                }
            }
        }
    }
}
void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
void preorderPrint(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}
void postorderPrint(node* root){
    if(root==NULL){
        return;
    }
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout<<root->data<<" ";
}
int main(){
    struct node *root=inputNode();
    cout<<"Preorder: ";
    preorderPrint(root);
    cout<<endl;
    cout<<"Inorder: ";
    inorderPrint(root);
    cout<<endl;
    cout<<"Postorder: ";
    postorderPrint(root);
    cout<<endl;
    cout<<"BFS_Traverse: ";
    Traverse(root);
    cout<<endl;
    // "Take input: 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 "
}