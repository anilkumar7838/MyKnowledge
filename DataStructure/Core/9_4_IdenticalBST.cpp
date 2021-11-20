#include<iostream>

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

//Identical BST
bool isIdentical(Node* root1,Node* root2){
    if(root1==NULL and root2==NULL){
        return true;
    }
    else if(root1==NULL||root2==NULL){
        return false;
    }
    else{
        bool codn1= root1->data==root2->data;
        bool codn2=isIdentical(root1->left,root2->left);
        bool codn3=isIdentical(root1->right,root2->right);

        if(codn1 and codn2 and codn3){
            return true;
        }
        else{
            return false;
        }
    }

}

int main(){
    Node* root=new Node(2);
    root->left=new Node(1);
    root->right=new Node(3);

    if(isIdentical(root,root)){
        cout<<"BSTs are identical"<<endl;
    }
    else{
        cout<<"BSTs are not identical"<<endl;
    }

    Node* root1=new Node(2);
    root1->left=new Node(1);
    root1->right=new Node(4);

    if(isIdentical(root,root1)){
        cout<<"BSTs are identical"<<endl;
    }
    else{
        cout<<"BSTs are not identical"<<endl;
    }

}