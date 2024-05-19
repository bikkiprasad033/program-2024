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
			this->right =NULL;
		}
};
int findPosition(int in[],int n,int ele){
	for(int i=0;i<n;i++){
		if(in[i] == ele)
			return i;
	}
}
Node* buildTree(int in[],int post[],int &index,int inorderStart,int inorderEnd,int n){
	
	if(index < 0 || inorderStart > inorderEnd)
		return NULL;
	
	int ele = post[index--];
	Node *root = new Node(ele);
	int pos = findPosition(in,n,ele);
	
	root->right = buildTree(in,post,index,pos+1,inorderEnd,n);
	root->left = buildTree(in,post,index,inorderStart,pos-1,n);
	
	return root;
	
}

void preorder(Node *root){
	if(root == NULL)
		return;
	
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
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
	
	int in[] = {4,8,2,5,1,6,3,7};
	int post[] = {8,4,5,2,6,7,3,1};
	int n = sizeof(in)/sizeof(in[0]);
	
	int postIndex = n-1;
		root = buildTree(in,post,postIndex,0,n-1,n);
		preorder(root);
//		levelOrderTraversal(root);
}