#include<iostream>
using namespace std;

void printSequence(int n){
	
	if(n == 0)
		return;
		
	printSequence(n-1);
	cout<<n<<" ";
	
}

void printMultiple(int num, int k){
	
	if(k == 0)return;
	
	cout<<num * k<<" ";
	printMultiple(num,k-1);
	
}
int main(){
	int n=10;
//	printSequence(n);
	
	int num=12,k=5;
	printMultiple(num,k);
}