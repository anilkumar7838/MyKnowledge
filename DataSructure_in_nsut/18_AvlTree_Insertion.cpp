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
// search the element in Avl tree
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

//  Calculate height
int height(node* root){
    if(root==NULL){
        return -1;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}

// Get balance factor
int get_balfactor(node* root){
    if(root==NULL){
        return -1;
    }
    int lh=height(root->left)+1;
    int rh=height(root->right)+1;
    return (lh-rh);
}
// left rotate
node* leftRotate(node* &root){
    node* temp1=root->right;
    node* temp2=temp1->left;

    temp1->left=root;
    root->right=temp2;
    return temp1;

}
//rightRotate
node* rightRotate(node* &root){
    node* temp1=root->left;
    node* temp2=temp1->right;

    temp1->right=root;
    root->left=temp2;
    return temp1;
}

// Insertion of a node in AVL tree
node* Insertion(node* &root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(root->data>val){
        root->left=Insertion(root->left,val);
    }
    else if(root->data<val){
        root->right=Insertion(root->right,val);
    }
    else{
        cout<<"Duplicate is not Allowed"<<endl;
        return root; 
    }
    int balf=get_balfactor(root);
    if(balf>1 and val < root->left->data){ //ll
        return rightRotate(root);
    }
    if(balf>1 and val > root->left->data){ //lr
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }
    if(balf<-1 and val > root->right->data){ //rr
        return leftRotate(root);
    }
    if(balf<-1 and val < root->right->data){ //rl
        root->right=rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}
//print Inorder
void printInorder(node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
node *root=NULL;
int n,val;
cout<<"Enter the Number of element you want to insert: ";
cin>>n;
cout<<"Enter the element: ";
cin>>val;
root=Insertion(root,val);
for(int i=0;i<n-1;i++){
    cout<<"Enter the element: ";
    cin>>val;
    root=Insertion(root,val);
}
printInorder(root);
cout<<endl;

// node* lr=leftRotate(root);
// cout<<lr->data<<endl;
// cout<<lr->left->data<<endl;

// node* rr=rightRotate(root);
// cout<<rr->data<<endl;
// cout<<rr->right->data<<endl;

// cout<<height(root)<<endl;
// cout<<get_balfactor(root)<<endl;
return 0;
}