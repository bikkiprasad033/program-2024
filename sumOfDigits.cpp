#include<iostream>
using namespace std;
int sumOfDigits(int n,int sum){
	if(n==0)
		return sum+n%10;
	else{
		int ld=n%10;
		sum+=ld;
		sumOfDigits(n/10,sum);
	}
}
int main()
{
	int sum=0,n;
	cin>>n;
	int res=sumOfDigits(n,sum);
	cout<<res;
}