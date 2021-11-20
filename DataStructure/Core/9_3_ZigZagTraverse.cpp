#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int info){
            data=info;
            left=NULL;
            right=NULL;
        }
};

int searchEle(Node* root,int ele){
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

Node* createBST(Node* &root,int ele){
    if(searchEle(root,ele)==1){
        cout<<ele<<" is Duplicate Element"<<endl;
    }
    else{
        if(root==NULL){
            return new Node(ele);
        }
        if(root->data>ele){
            root->left=createBST(root->left,ele);
        }
        if(root->data<ele){
            root->right=createBST(root->right,ele);
        }
        return root;
    }

}

void ZigZagTraversal(Node* root){
    int count=0;
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);
    while(!st1.empty()){
        int size=st1.size();
        for(int i=0;i<size;i++){
            Node* temp=st1.top();
            st1.pop();
            if(temp!=NULL){
                cout<<temp->data<<" ";
                if(count){
                    if(temp->right!=NULL){
                        st2.push(temp->right);
                    }   
                    if(temp->left!=NULL){
                        st2.push(temp->left);
                    }
                }
                else{
                    if(temp->left!=NULL){
                        st2.push(temp->left);
                    }
                    if(temp->right!=NULL){
                        st2.push(temp->right);
                    }   
                }
            }
        }
        count=(count%2==0)?1:0;
        swap(st1,st2);
        // cout<<endl;
        count++;
    }

}

void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

//main
int main(){
    int a[]={4,3,1,5,7,2,6};
    Node* root=NULL;
    root=createBST(root,a[0]);
    for(int i=1;i<7;i++){
        createBST(root,a[i]);
    }
    inorderPrint(root);
    cout<<endl;
    ZigZagTraversal(root);

    return 0;
}