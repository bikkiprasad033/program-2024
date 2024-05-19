#include<iostream>
using namespace std;

int power(int p,int q){
	
	if(q==0)return 1;
	else if(q==1)return p;
	return power(p,q-1) * p;
	
}
int main(){
	int p=2,q=3;
	cout<<power(p,q);
}