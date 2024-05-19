#include<iostream>
using namespace std;

int maximum(int arr[], int n, int idx, int max){
		
	if(idx == n)return max;
		if(arr[idx] >= max)
		max = arr[idx];
		
	maximum(arr,n,idx+1,max);
}

int main(){
	
	int arr[]={33,10,13,2,25};
	int n=sizeof(arr)/sizeof(arr[0]);
	

	cout<<"Max element is: "<<maximum(arr,n,0,arr[0]);
	
}