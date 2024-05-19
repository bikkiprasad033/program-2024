#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> &st){
	if(st.top()==-1){
		return;
	}
	cout<<st.top()<<endl;
	st.pop();
	printStack(st);
}

int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	printStack(s);
	
}