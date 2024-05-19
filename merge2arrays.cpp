#include<iostream>
using namespace std;
int main(){
	int a[]={1,5,8};
	int b[]={4,5};
	int m=3,n=2;
	
	int x=m+n;
	int res[x];
	
	int c=0;//for array a[]
	int d=0;//for array b[]
	int p=0;
	while(c<m && d<n){
		if(a[c]<b[d]){
			res[p]=a[c];
			p+=1;
			c+=1;
		}
		else if(a[c]>b[d]){
			res[p]=b[d];
			p+=1;
			d+=1;
		}
		else{
			res[p]=b[d];
			p+=1;
			c+=1;
		}
	}
	while(c<m){
		res[p]=a[c];
		p+=1;
		c+=1;
	}
	while(d<n){
		res[p]=b[d];
		p+=1;
		d+=1;
	}
	for(int i=0;i<x;i++){
		cout<<res[i]<<" ";
	}
}