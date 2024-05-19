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

class Linkedlist{
	
	public:
		Node *head;
		Node *tail;
		
		Linkedlist(){
			head = NULL;
			tail = NULL;
		}
		
		void insert(int val){
			
			Node *newnode = new Node(val);
			if(head == NULL){
				head = newnode;
				tail = newnode;
				return;
			}
			
			Node *temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newnode;
			tail = newnode;
		}
		
		void display(){

			Node *temp = head;
			while(temp != NULL){
				cout<<temp->data<<"->";
				temp = temp->next;
			}cout<<"NULL"<<endl;
			
			//statement to track pointer to tail NODE
			cout<<"tail ="<<tail->data<<endl;
		}
		
		// 		INSERTION 
		void insertAtFirst(int val){
			Node *temp = head;
			Node *newnode = new Node(val);
			newnode->next = temp;
			head = newnode;
		}
		
		void insertAtLast(int val){
			
			Node *newnode = new Node(val);
			Node *temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newnode;
			
			
		//	Node *newnode = new Node(val);
		//  tail->next = newnode;
			tail = newnode;				//  updating the new tail node 
		}
		
		void insertAtPos(int val,int pos){
			
			Node *newnode = new Node(val);
			Node *temp = head;
			if(pos == 0){			// insertion at no point
				return;
			}
			if(pos == 1){			//  insertion at first point
			newnode->next = temp;
			head = newnode;
			return;
			}
			
			int curr_pos = 1;
			while(curr_pos<pos-1){	//  insertion at certain kth position
				temp = temp->next;
				curr_pos++;
			}
			newnode->next = temp->next;
			temp->next = newnode;
			
		}
		//		DELETION
		void deleteAtFirst(){
			
			Node *temp = head;
			head = head->next;
			free(temp);
		}
		
		void deleteAtLast(){
			
			Node *temp = head;
			while(temp->next->next != NULL){
				temp = temp->next;
			}
			Node *f = temp->next;
			temp->next = NULL;
			free(f);
			tail = temp;		//  updating the tail node
		}
		
		void deletePos(int pos){
			
			Node *temp = head;
			int curr_pos = 1;
			while(curr_pos < pos-1){
				temp = temp->next;
				curr_pos++;
			}
			Node *f = temp->next;
			temp->next = temp->next->next;
			free(f);
		}
};
int main()
{
	Linkedlist ll;
	ll.insert(1);
	ll.insert(2);	
	ll.insert(3);
	ll.insert(4);
	ll.insert(5);
	ll.display();
	cout<<endl;
	ll.insertAtFirst(10);
	ll.display();
	ll.insertAtLast(20);
	ll.display();
	ll.insertAtPos(55,1);
	ll.display();
	ll.deleteAtFirst();
	ll.display();
	ll.deleteAtLast();
	ll.display();
	ll.deletePos(3);
	ll.display();
	
}