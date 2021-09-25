#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
// case1
void printsubtreeNode(node* temp,int k){
    if(temp==NULL||k<0){
        return;
    }
    if(k==0){
        cout<<temp->data<<" ";
    }
    printsubtreeNode(temp->left,k-1);
    printsubtreeNode(temp->right,k-1);
}
// case 2
int printnodesAtk(node* root,node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        // cout<<"Hello"<<endl;
        printsubtreeNode(root,k);
        return 0;
    }
    int ld=printnodesAtk(root->left,target,k);
    if(ld!=-1){
        if(ld+1==k){
            cout<<root->data<<" ";
        }else{
            printsubtreeNode(root->right,k-ld-2);
        }
        return ld+1;
    }
    int rd=printnodesAtk(root->right,target,k);
    if(rd!=-1){
        if(rd+1==k){
            cout<<root->data<<" ";
        }else{
            printsubtreeNode(root->left,k-rd-2);
        }
        return rd+1;
    }
    return -1;
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->left->right=new node(8);
    printnodesAtk(root,root->right,2);  
    cout<<endl;
    printnodesAtk(root,root->right->right,3); 
    cout<<endl;
    printnodesAtk(root,root->left->left,4);
    cout<<endl;
    

}