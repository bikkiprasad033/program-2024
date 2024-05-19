#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int d){
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}	
};
Node *buildTree(Node *root){
	
	cout << "\nenter the data:";
	int ele;
	cin >> ele;
	root = new Node(ele);
	
	if(ele == -1)
		return NULL;
	
	cout << "enter left child for " << ele;
	root->left = buildTree(root->left);
	cout << "enter right child for " << ele;
	root->right = buildTree(root->right);
	
	return root;
}
void levelOrderTraversal(Node *root){
	
	queue<Node*> qu;
	qu.push(root);
	qu.push(NULL);
	
	while(!qu.empty()){
		Node *temp = qu.front();
		qu.pop();
		
		if(temp == NULL){
			cout << endl;
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
int main(){
	Node *root = NULL;
	root = buildTree(root);
	levelOrderTraversal(root);
}