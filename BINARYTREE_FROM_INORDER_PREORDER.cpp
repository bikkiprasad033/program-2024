#include<iostream>
#include<queue>
using namespace std;

class Node{
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val){
		this->data = val;
		this->left = NULL;
		this->right = NULL;
	}	
};

int findPosition(int in[],int n,int ele){
	
	for(int i=0;i<n;i++){
		if(in[i] == ele)
			return i;
	}
}
Node* buildTree(int in[],int inorderStart,int pre[],int &preIndex,int inorderEnd,int n){
	
	if(inorderStart > inorderEnd || preIndex >= n)
		return NULL;
	
	int ele = pre[preIndex++];
	Node *root = new Node(ele);
	int pos = findPosition(in,n,ele);
	
	root->left = buildTree(in,inorderStart,pre,preIndex,pos-1,n);
	root->right = buildTree(in,pos+1,pre,preIndex,inorderEnd,n);
	
	return root;
}

void postorder(Node *root){
	if(root == NULL)
		return;
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int main(){
	Node *root = NULL;
	
	int in[] = {3,1,4,0,5,2};
	int pre[] = {0,1,3,4,2,5};
	int n=sizeof(in)/sizeof(in[0]);
	
	int preIndex = 0;
	
	root = buildTree(in,0,pre,preIndex,n-1,n);
	postorder(root);
}