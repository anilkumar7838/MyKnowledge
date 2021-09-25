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
void preorderTraversal(node* root){
    stack<node*> st;
    st.push(NULL);
    node* temp=root;
    while(temp!=NULL){
        if(temp->right!=NULL){
            st.push(temp->right);
        }
        if(temp->left!=NULL){
            cout<<temp->data<<" ";
            temp=temp->left;
        }
        else{
            cout<<temp->data<<" ";
            temp=st.top();
            st.pop();
        }
    }    
}
void inorderTraversal(node* root){
    stack<node*> st;
    st.push(NULL);
    node* temp=root;
    while(!st.empty()){
        while(temp!=NULL){
            st.push(temp);
            temp=temp->left;
        }
        temp=st.top();
        st.pop();
        while(temp!=NULL){
            cout<<temp->data<<" ";
            if(temp->right!=NULL){
                temp=temp->right;
                break;
            }
            temp=st.top();
            st.pop();
        }
    }
}
void postorderTraversal(node* root){     //error algo
    stack<node*> st;
    st.push(NULL);
    node* temp=root;
    while(temp!=NULL){
        st.push(temp);
        if(temp->right!=NULL){
            st.push(temp->right);
        }
            temp=temp->left;
    }
    if(temp>0){
        temp=st.top();
        st.pop();
        cout<<temp->data<<" ";
    }
    else{
        cout<<temp->data<<" ";
        temp=st.top();
        st.pop();
    }    
}
node* inputNode(){
    int ele;
    cout<<"********* Input of a Binary Tree **********\nIf you does not want further(NULL) type: '-1'\nenter the element\n"<<endl;
    cin>>ele;
    if(ele==-1){
        return NULL;
    }
        node* root=new node(ele);
        root->left=inputNode();
        root->right=inputNode();
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
    // struct node *root=inputNode();
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    // cout<<"Preorder: ";
    // preorderPrint(root);
    // cout<<endl;
    // preorderTraversal(root);
    // cout<<"Inorder: ";
    // inorderPrint(root);              
    // cout<<endl;
    // inorderTraversal(root);
    cout<<"Postorder: ";
    postorderPrint(root);
    cout<<endl;
    postorderTraversal(root);
    // " 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 "
}