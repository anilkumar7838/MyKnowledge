#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Node
{int data;
Node* left = nullptr, *right = nullptr;
Node() {}
Node(int data): data(data) {}
};

void preorder(Node* root)
{if (root == nullptr) {
return;}
cout << root->data << " ";
preorder(root->left);
preorder(root->right);
}

void inorder(Node* root)
{if (root == nullptr) {
return;}
cout << root->data << " ";
inorder(root->left);
inorder(root->right);
}

void postorder(Node* root)
{if (root == nullptr) {
return;}
cout << root->data << " ";
postorder(root->left);
postorder(root->right);
}

 
Node* insert(Node* root, int key)
{if (root == nullptr) {
return new Node(key);}
if (key < root->data) {
root->left = insert(root->left, key);}
else {root->right = insert(root->right, key);}
return root;
}
 
Node* BST(vector<int> &keys)
{Node* root = nullptr;
for (int key: keys) {
root = insert(root, key);
}
return root;
}
 
int main()
{
   ifstream is("textFile.txt");
   int x;
   vector<int> keys;
   while(is >> x){
   keys.push_back(x);}
   is.close();
   Node* root =BST(keys);
   preorder(root);
   cout<<endl;
    
}