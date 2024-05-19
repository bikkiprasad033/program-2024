#include<iostream>
using namespace std;

class Stack{
	public:
	int capacity;
	int *arr;
	int top;
	
	Stack(int n){
		this->capacity = n;
		arr = new int[capacity];
		this->top = -1;
	}
	
	void push(int val){
		if(this->top == this->capacity -1){
			cout<<"Stack Overflow and "<<val<<" cannot be pushed\n";
			return;
		}
		this->top++;
		this->arr[this->top] = val;
		
	}
	
	void pop(){
		if(this->top == -1){
			cout<<"Stack Underflow and element cannot be popped\n";
			return;
		}
		int ele =this->arr[this->top];
		this->top--;
		cout<<"popped element is: "<<ele<<endl;
	}
	
	int getTop(){
		return this->arr[this->top];
	}
	
	void isFull(){
		if(this->top == this->capacity-1)
			cout<<"Stack is FULL\n";
		else
			cout<<"Stack is not FULL\n";

	}
	
	void isEmpty(){
		if(this->top == -1)
			cout<<"Stack is Empty\n";
		else
			cout<<"Stack is not Empty\n";

	}
	void display(){
		
	}
};

int main()
{
	Stack s(5);
//	s.pop();    //underflow condition
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<s.getTop()<<endl;
	s.isFull();
	s.push(4);
	s.push(5);
	cout<<s.getTop()<<endl;
	s.pop();

	cout<<s.getTop()<<endl;
		s.push(55);		//overflow condition
	cout<<s.getTop()<<endl;
	s.push(100);
	s.push(101);
}