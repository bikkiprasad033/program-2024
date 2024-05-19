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
		//BUILD A TREE
Node* buildTree(Node *root){
	
	cout <<"\nenter the data: ";
	int ele;
	cin >> ele;
	root = new Node(ele);
	
	if(ele == -1)
		return NULL;
		
	cout << "\nenter left child for "<<ele;
	root->left = buildTree(root->left);
	cout << "\nenter right child for "<<ele;
	root->right = buildTree(root->right);
	
	return root;
}
		//LEVELORDERTRAVERSAL
void levelOrderTraversal(Node *root){
	
	queue<Node*> qu;
	qu.push(root);
	qu.push(NULL);
	
	while(!qu.empty()){
		
		Node *temp = qu.front();
		qu.pop();
		
		if(temp == NULL){
			cout <<endl;
			if(!qu.empty())
				qu.push(NULL);
		}
		else{
			cout << temp->data <<" ";
			if(temp->left)
				qu.push(temp->left);
			if(temp->right)
				qu.push(temp->right);
		}
	}
}
		//INORDER
void inorder(Node *root){
	if(root == NULL)
		return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
		//POSTORDER
void postorder(Node *root){
	if(root == NULL)
		return;
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
		//PREORDER
void preorder(Node *root){
	if(root == NULL)
		return;
	
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main(){
		
	Node *root = NULL;
	root = buildTree(root);
	levelOrderTraversal(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
}
