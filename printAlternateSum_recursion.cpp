#include<iostream>
using namespace std;

int printAlternateSum(int n, int &t, int p, int &sum){
	
	if(p > n)return sum;
	
	sum = sum + (p*t);
	t=t*-1;
	printAlternateSum(n,t,p+1,sum);
	return sum;
	
}
int main(){
	int t=1,p=1,sum=0;
	cout<<printAlternateSum(5,t,p,sum);
}