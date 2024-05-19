#include<iostream>
using namespace std;
int main(){
	
	int arr[]={2,2,2};
	int x=4,f=0;
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int i=0;//start pointer
	int j=n-1;//end pointer
	while(i<j){
		if((arr[i]+arr[j])==x){
			f+=1;
			i+=1;
			j-=1;
		}
		else if((arr[i]+arr[j])>x){
			j-=1;
		}
		else{
			i+=1;
		}
	}
	cout<<f;
}