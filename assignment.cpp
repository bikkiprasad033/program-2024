#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=0;i<n;i++){
		int k=arr[i];
		int sum=1;
		for(j=0;j<n;j++){
			if(arr[j] == k)
				continue;
			else{
				sum = sum * arr[j];	
			}	
		}
		cout<<sum<<endl;
		sum = 1;
	}
}