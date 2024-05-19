#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(5);
	cout<<"enter elements"<<endl;
	for(int i=0;i<5;i++){
		cin>>v[i];
	}
	//int sum=0;
	for(int i=1;i<5;i++){
		v[i]+=v[i-1];
	}
	for(int i=0;i<5;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	
	int suff_sum=0,pref_sum=0;
	int l,r;
	cout<<"enter two numbers"<<endl;
	cin>>l>>r;
	
	cout<<"sum of numbers between l and r is:";
	int ans=v[r]-v[l-1];
	cout<<ans;
}