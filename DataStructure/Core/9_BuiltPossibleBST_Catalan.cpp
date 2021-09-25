#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int info){
            data=info;
            left=NULL;
            right=NULL;
        }
};

vector<node*> constructTrees(int start,int end){
    vector<node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start; i<=end;i++){
        vector<node*> leftsubtrees=constructTrees(start,i-1);
        vector<node*> rightsubtrees=constructTrees(i+1,end);

        for(int j=0;j<leftsubtrees.size();j++){
            node* left=leftsubtrees[j];

            for(int k=0;k<rightsubtrees.size();k++){
                node* right=rightsubtrees[k];

                node* root=new node(i);
                root->left=left;
                root->right=right;
                cout<<rightsubtrees.size()<<" ";
                trees.push_back(root);
            }
        }
    }
    return trees;
}

void preorderPrint(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}
int main(){
    int n;
    cout<<"Enter the number of node: ";
    // cin>>n;
    vector<node*> totaltrees=constructTrees(1,3);
    cout<<endl<<endl;
    for(int i=0;i<totaltrees.size();i++){
        cout<<(i+1)<<": ";
        preorderPrint(totaltrees[i]);
        cout<<endl;
    }
    return 0;
}