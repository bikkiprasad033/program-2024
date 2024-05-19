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
Node* buildBST(Node *root,int d){
	
	if(root == NULL){
		root = new Node(d);
		return root;
	}
	
	if(d < root->data)
		root->left = buildBST(root->left ,d);
	else
		root->right = buildBST(root->right ,d);
		
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
int findMax(Node *root){
	
	if(root->right == NULL){
		int ele = root->data;
		return ele;
	}
	findMax(root->right);
}
Node* deletion(Node * root,int x){
	
	if(root == NULL)
		return NULL;
	
	if(root->data == x){
	 	
	 	// CASE 1: If Node does not has any child or 0--child
	 	if(root->left == NULL && root->right == NULL){
			delete(root);
	 		return NULL;
	 	}
	 	// CASE 2:If Node has only 1 child
	 	else if(root->left != NULL && root->right == NULL){
			Node *t = root->left;
			delete(root);
			return t;
		}
		else if(root->right != NULL && root->left == NULL){
			Node *t = root->right;
			delete(root);
			return t;
		}
		// CASE 3:If Node has 2 childs
		else{
			int d = findMax(root->left);
			root->data = d;
			deletion(root->left,d);
		}
		
		return root;
	}
	
	else if(x < root->data)
		root->left = deletion(root->left,x);
	else
		root->right = deletion(root->right,x);
	
	return root;	
}
int main(){
	
	Node *root = NULL;
	cout << "\nenter the data:";
	int ele;
	cin >> ele;
	
	while(ele != -1){
		root = buildBST(root,ele);
		cin >> ele;
	}
	
	levelOrderTraversal(root);
	
	cout << "\nenter element to be deleted:";
	int x;
	cin >> x;
	root = deletion(root,x);
	
	levelOrderTraversal(root);
}