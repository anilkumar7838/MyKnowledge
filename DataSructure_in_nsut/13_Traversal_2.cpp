#include<iostream>
#include<stack>
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

// void Traverse(node* root){
//     stack<node*> st;
//     st.push(root);
//     while(!st.empty()){
//         int n=st.size();
//         for(int i=0;i<n;i++){
//             node* temp=st.top();
//             st.pop();
//             cout<<temp->data<<" ";
//             if(temp->right!=NULL){
//                 st.push(temp->right);
//             }
//             if(temp->left!=NULL){
//                 st.push(temp->left);
//             }
//         }
//     }
// }
void Traverse(node* root){
    stack<node*> st;
    st.push(root);
    while(!st.empty()){
        int n=st.size();
        for(int i=0;i<n;i++){
            node* temp=st.top();
            if(temp->left==NULL|| temp->right==NULL){
                st.pop();
                cout<<temp->data<<" ";
            }
            if(temp->right!=NULL){
                st.push(temp->right);
            }
            if(temp->left!=NULL){
                st.push(temp->left);
            }
        }
    }
}
node* input(){
    int d;
    cout<<"enter the element"<<endl;
    cin>>d;
    if(d==-1){
        return NULL;
    }
        node* root=new node(d);
        root->left=input();
        root->right=input();
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
    struct node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    // inorderPrint(root);
    // struct node *root=input();
    // preorderPrint(root);
    postorderPrint(root);
    cout<<endl;
    Traverse(root);
}