#include<iostream>
using namespace std;

class Queue{
	public:
	int front;
	int back;
	int *arr;
	int size;
	
	Queue(int n){
		this->front = -1;
		this->back = -1;
		this->size = n;
		arr = new int[this->size];
	}	
	
	void enqueue(int val){
		if(this->back == this->size -1){
			cout<<"Queue is FULL\n";
			return;
		}
		else if(this->back == -1 && this->front == -1){
			this->front = 0;
			this->back =0;
			this->arr[this->back] = val;
		}

			this->back++;
			this->arr[this->back] = val;
		
	}
	void dequeue(){
		if(this->front == this->back){
			cout<<"Queue is EMPTY\n";
			return;
		}
		
			cout<<"element popped is:"<<this->arr[this->front]<<"\n";
			this->front++;
	}
	void getFront(){
		cout<<this->arr[this->front]<<endl;
	}
};
int main()
{
	Queue qu(5);
	qu.enqueue(1);
	qu.enqueue(2);
	qu.dequeue();
	qu.getFront();
}