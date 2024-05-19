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
		root->left = buildBST(root->left,d);
	else
		root->right = buildBST(root->right,d);
		
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
void findNum(Node *root, int x,int &ans){
	if(root == NULL){
		return;
	}
	if(root->data == x){
		ans = 1;
		return;
	}
	findNum(root->left,x,ans);
	findNum(root->right,x,ans);
	
}
int main(){
	Node *root = NULL;
	cout << "\nenter the elements:";
	int ele;
	cin >> ele;
	
	while(ele != -1){
		root = buildBST(root,ele);
		cin >> ele;
	}
	levelOrderTraversal(root);
	
	cout << "\nenter element to be searched";
	int x,ans=0;
	cin >> x;
	findNum(root,x,ans);
	if(ans == 1)
		cout << "\nSearch Successfull";
	else
		cout << "\nSearch UNSuccessfull";
}