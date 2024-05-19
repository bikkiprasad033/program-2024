#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int size){
		this->data = size;
		this->left = NULL;
			this->right = NULL;
	}	
};
Node* buildTree(Node *root){
	
	int ele;
	cout<<"enter elements:";
	cin>>ele;
		Node *temp = new Node(ele);
	if(ele == -1)
		return root;
	
	if(root == NULL)
		root = temp;
		
	cout << "enter left child for "<<ele<<endl;
		temp->left = buildTree(temp->left);
	
	cout << "enter right child for "<<ele<<endl;
		temp->right = buildTree(temp->right);
		
	return root;
	
}
void inorder(Node* root){
	
	if(root == NULL)
		return;
	
	inorder(root->left);
	cout << root->data <<" ";
	inorder(root->right);
}
int main(){
	Node* root = NULL;
	root = buildTree(root);
	inorder(root);
}