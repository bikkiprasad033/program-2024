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
Node* buildBST(Node *root,int ele){
	
	if(root == NULL){
		root = new Node(ele);
		return NULL;
	}
	if(ele < root->data)
		root->left = buildBST(root->left,ele);
	else
		root->right = buildBST(root->right,ele);
		
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
int main(){
	Node *root = NULL;
	cout << "\nenter the element:";
	int ele;
	cin >> ele;
	while(ele != -1){
		root = buildBST(root,ele);
		cin >> ele;
	}
	
	levelOrderTraversal(root);

}