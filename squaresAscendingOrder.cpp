#include<iostream>
using namespace std;
int main(){
	
	int arr[]={-4,-3,-1,0,2,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int res[n]={0};
	int x=n-1;//traversal for res
	int i=0;//start pointer
	int j=n-1;//end pointer
	
	while(i<=j && x>-1){
		int s=arr[i]*arr[i];
		int f=arr[j]*arr[j];
		if(s==f){
			res[x]=s;
			i+=1;
			j-=1;
			x-=1;
		}
		else if(s>f){
			res[x]=s;
			i+=1;
			x-=1;
		}
		else{
			res[x]=f;
			j-=1;
			x-=1;
		}
	}
	for(int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
}