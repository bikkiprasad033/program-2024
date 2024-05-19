#include<iostream>
using namespace std;

int sumOfDigits(int n){
	
//	int sum = n%10;
	if(n<10)
	return n%10;
		
	return n%10 + sumOfDigits(n/10);
}

int main(){
	
	int n=12345,sum=0;
	cout<<sumOfDigits(n);
	
}