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

vector<node*> createBST(int start,int end){
	vector<node*> totalTrees;
	if(start>end){
		totalTrees.push_back(NULL);
		return totalTrees;
	}
	for(int i=start;i<=end;i++){
		vector<node*> leftTrees=createBST(start,i-1);
		vector<node*> rightTrees=createBST(i+1,end);
		
		for(int j=0;j<leftTrees.size();j++){
			node* left=leftTrees[j];			
			for(int k=0;k<rightTrees.size();k++){
				node* right=rightTrees[k];
				
				node* root=new node(i);
				root->left=left;
				root->right=right;
				totalTrees.push_back(root);
					
			}
		}
	}
	return totalTrees;
	
}

void Preorder(node* root){
	if(root==NULL){
		return ;
	}
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}

int main(){
	int n;
	cout<<"Enter the number of nodes: ";
	cin>>n;
	vector<node*> ans=createBST(1,n);
	for(int i=0;i<ans.size();i++){
		cout<<(i+1)<<": ";
		Preorder(ans[i]);
		cout<<endl;
	}
}
