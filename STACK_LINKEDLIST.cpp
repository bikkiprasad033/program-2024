#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int val){
			data = val;
			next = NULL;
		}
};

class Stack{
	public:
		Node *head;
		int top;
		int size;
		
		Stack(int n){
			this->size = n;
			this->top = -1;
			head = NULL;
		}
		
		void push(int val){
				
			Node *newnode = new Node(val);
			if(head == NULL){
				head = newnode;
				this->top++;
				return;
			}
			if(this->top == this->size -1){
				cout<<"Stack Overflow and "<<val<<" cannot be pushed\n";
				return;
			}
			
			this->top++;
			Node *temp =head;
			newnode->next = temp;
			head = newnode;
		}
		
		void pop(){
			
			if(head == NULL || this->top == -1){
				cout<<"Stack Underlow\n";
				return;
			}
			this->top--;
			Node *temp = head;
			int ele = temp->data;
			cout<<"popped element is: "<<ele<<endl;
			head = temp->next;
			free(temp);
		}
		void getTop(){
			cout<<head->data<<endl;
		}
		
};
int main(){
	
	Stack s(5);
	s.pop();
	s.push(1);
	s.push(2);
	s.push(3);
	s.getTop();
	s.push(4);
	s.push(5);
	s.getTop();
	s.push(111);

}