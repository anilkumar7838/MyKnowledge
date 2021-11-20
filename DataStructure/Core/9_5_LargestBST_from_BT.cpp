#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

typedef struct Info{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
}inp;

inp largestBSTinBT(Node* root){
    if(root==NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL and root->right==NULL){
        return {1,root->data,root->data,1,true};
    }
    inp left=largestBSTinBT(root->left);
    inp right=largestBSTinBT(root->right);

    inp curr;
    curr.size=(1 + left.size + right.size);
    if((left.isBST) and (right.isBST) and ((left.max) < (root->data)) and ((right.min) > (root->data))){
        curr.min=min(left.min,root->data);
        curr.max=max(right.max,root->data);
        // curr.min=min(left.min,min(right.min,root->data));
        // curr.max=max(right.max,max(left.max,root->data));
        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(left.ans,right.ans);
    curr.isBST=false;
    return curr;
}


int main(){
    Node* root=new Node(15);
    root->left=new Node(20);
    root->left->left=new Node(5);
    root->right=new Node(30);

    cout<<"Largest BST in BT: "<<largestBSTinBT(root).ans<<endl;
    return 0;
}