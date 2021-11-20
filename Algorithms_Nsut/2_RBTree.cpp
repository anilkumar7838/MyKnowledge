#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

class Rbtree{
    public:
    int data;
    string color;
    Rbtree *left;
    Rbtree *right;
    Rbtree *parent;
    Rbtree(int info){
        data=info;
        color="red";
        left=NULL;
        right=NULL;
        parent=NULL;
    }
    void setColor(string str){
        color=str;
    }
};
// bool isLeftChild(Rbtree *root){
//     return root==root->parent->left;
// }
bool flipColor(Rbtree *&root){
    root->setColor(root->color=="red"?"black":"red");
}
// int balFactor(Rbtree* root){
//     if(root==NULL){
//         return -1;
//     }
//     int left=(balFactor(root->left)+1);
//     int right=(balFactor(root->right)+1);
//     return  (left-right);
// }

Rbtree* rotateLeft(Rbtree* &root){
    Rbtree* temp1=root->right;
    Rbtree* temp2=temp1->left;

    temp1->left=root;
    root->right=temp2;
    return temp1;
}

Rbtree* rotateRight(Rbtree* &root){
    Rbtree* temp1=root->left;
    Rbtree* temp2=temp1->right;

    temp1->right=root;
    root->left=temp2;
    return temp1;
}

void rotateAndRecolor(Rbtree* &root,Rbtree* pt){
    Rbtree* gprt=NULL;
    Rbtree* prt=NULL;
    if(pt->parent->color=="red"){
        while(pt!=root and pt->color!="black"){
            Rbtree* gprt=pt->parent->parent;
            Rbtree* prt=pt->parent;
            if(prt==gprt->left){
                Rbtree* uncle=gprt->right;
                if(uncle!=NULL and uncle->color=="red"){
                    flipColor(uncle);
                    flipColor(prt);
                    pt=gprt;
                }
                else{
                    if(pt==prt->right){
                        rotateLeft(prt);
                        pt=prt;
                        prt=pt->parent;
                    }
                    rotateRight(gprt);
                    swap(prt->color,gprt->color);
                    pt=prt;
                }

            }
            else{
                Rbtree* uncle=gprt->left;

            }
            // if(gprt->right!=NULL and uncle->color=="red"){
            //     flipColor(gprt->left);
            //     flipColor(prt);
            // }
            
        }
        
    }
    
}

Rbtree* insertNode(Rbtree* &root,Rbtree* pt){
    if(root==NULL){
        return pt;
    }
    else if(root->data>pt->data){
        root->left=insertNode(root->left,pt);
        root->left->parent=root;
    }
    else if(root->data<pt->data){
        root->right=insertNode(root->right,pt);
        root->right->parent=root;
    }
    else{
        cout<<"Duplicate not allowed!!"<<endl;
        return root;
    }
    // Rbtree* prt=root->parent;
    // if(prt->color=="red"){
    //     rotateAndRecolor(root);
    // }
    return root;
}

void inorder(Rbtree* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->color<<" "<<root->data<<endl;
    inorder(root->right);
}

int main(){
    int n;
    cout<<"Enter the number of Node"<<endl;
    cin>>n;
    Rbtree* root=NULL;
    int ele;
    cin>>ele;
    root=new Rbtree(ele);
    flipColor(root);
    // cout<<root->color<<endl;
    for(int i=0;i<n-1;i++){
        cin>>ele;
        Rbtree* pt=new Rbtree(ele);
        insertNode(root,pt);
        rotateAndRecolor(root,pt);
    }

    return 0;
}