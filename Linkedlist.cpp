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

class LinkedList{
	public:
		Node *head;
		Node *tail;
		
	LinkedList(){
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
			temp=temp->next;
		}
		temp->next = newnode;
		tail = newnode;
	}
	
	void display(){
		Node *temp = head;
		while(temp != NULL){
			cout << temp->data <<"->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
	}	
	
	//insert at first
	Node* insertAtFirst(int val){
		Node* temp = head;
		Node *newnode = new Node(val);
		newnode->next = temp;
		head = newnode;
		return head;
	}
	
	//insert at last
	void insertAtLast(int val){
//		Node *temp = head;
//		Node *newnode = new Node(val);
//		while(temp->next != NULL){
//			temp=temp->next;
//		}
//		temp->next = newnode;

//			OR

		Node *newnode = new Node(val);
		tail->next = newnode;
	}
//			insert at Kth pos	
	void insertatKpos(int val, int pos){
		
		Node *newnode = new Node(val);
		Node *temp = head;
		Node *t = NULL;
			int i=1;
		while(i<pos && temp != NULL){
			t = temp;
			temp = temp->next;
			i+=1;
		}
		t->next = newnode;
		newnode->next = temp;
	}

//			delete at first
	void deleteAtFirst(){
		Node *temp = head;
		Node *t = NULL;
		head = temp->next;
		free(temp);
	}	
	
//			delete at last
	void deleteAtLast(){
		Node *temp = head;
		Node *t = NULL;
		while(temp->next->next != NULL){
			temp = temp->next;
		}
		t = temp->next;
		temp->next = NULL;
		free(t);
	
	}
	
//			delete at Kth pos	
	void deleteatKpos(int pos){
		Node *temp = head;
		Node *t =NULL;
			int i=1;
		while(i<pos && temp->next != NULL){
			t = temp;
			temp = temp->next;
			i+=1;
		} 
		t->next = temp->next;
		free(temp);
	}
};

int main(){
	LinkedList ll;
	ll.insert(1);
	ll.insert(2);
	ll.insert(3);
	ll.insert(4);
	ll.display();
	cout<<endl;
	
	ll.insertAtFirst(10);		//insert at first
	ll.display();
	cout<<endl;
	
	ll.insertAtLast(100);		//insert at last
	ll.display();
	cout<<endl;
	
	ll.insertatKpos(50,3);		//insert at Kth pos
	ll.display();
	cout<<endl;
	
	ll.deleteAtFirst();		//delete at first
	ll.display();
	cout<<endl;
	
	ll.deleteAtLast();		//delete at last
	ll.display();
	cout<<endl;
	ll.deleteatKpos(3);		//delete at Kth pos
	ll.display();
	cout<<endl;
	
}