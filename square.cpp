#include<iostream>
using namespace std;

void swap1(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x = 1, y = 2;
	swap1(x,y);
	cout << x<<" "<<y<<"\n";
	
	int m = 10, n = 20;
	swap2(&m,&n);
	cout << m<<" "<<n<<"\n";
}