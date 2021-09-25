#include<iostream>
#include<list>
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
void printsubtreeNode(node* temp,int k,node* blocker){
    if(temp==NULL||k<0||temp==blocker){
        return;
    }
    if(k==0){
        cout<<temp->data<<" ";
    }
    printsubtreeNode(temp->left,k-1,blocker);
    printsubtreeNode(temp->right,k-1,blocker);
}
// case 2
list<node*> li;
int pathfunc(node* root,node* temp){
    if(root==NULL){
        return -1;
    }
    if(root==temp){
        li.push_back(root);
        return 0;
    }
    int ln=pathfunc(root->left,temp);
    if(ln!=-1){
    li.push_back(root);
    return 0;
    }
    int rn=pathfunc(root->right,temp);
    if(rn!=-1){
    li.push_back(root);
    return 0;
    }
}
//case 3
void KfarNode(node* root,node* temp,int k){
    pathfunc(root,temp);
    node* blocker;
    list<node*> ::iterator it;
    for(int i=0;!li.empty();i++){
        if(i==0){
            blocker=NULL;
        }
        node* t=li.front();
        printsubtreeNode(li.front(),k-i,blocker);
        blocker=t;
        li.pop_front();
    }
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
    KfarNode(root,root->right,2);  //error need to resolve;
    cout<<endl;
    KfarNode(root,root->right->right,3);  //error need to resolve;
    cout<<endl;
    KfarNode(root,root->left->left,4);
    cout<<endl;

}