#include<iostream>
using namespace std;
int power(int p,int q){
	if(q==0)
		return 1;
	else if(q==1)
		return p;
	return p*power(p,q-1);
}
int main()
{
	int p,q;
	cout<<"enter p and q number";
	cin>>p>>q;
	int res=power(p,q);
	cout<<res;
}