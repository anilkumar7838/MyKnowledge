#include<iostream>
#include<stack>
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
int levelCount(node* root){
    stack<node*> st;
    st.push(root);
    int count=0;
    while(!st.empty()){
        int n=st.size();
        count++;
        for(int i=0;i<n;i++){
            node* temp=st.top();
            st.pop();
            if(temp->left!=NULL){
                st.push(temp->left);
            }
            if(temp->right!=NULL){
                st.push(temp->right);
            }
        }
    }
    return count;
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
    cout<<"Number of level: "<<levelCount(root)<<endl;
    return 0;
}