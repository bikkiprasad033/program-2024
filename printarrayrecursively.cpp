#include<iostream>
using namespace std;
void printarray(int arr[],int n,int idx){
	if(idx==n-1)
		cout<<arr[idx]<<endl;
	else{
		cout<<arr[idx]<<endl;
		printarray(arr,n,idx+1);
	}
}
int maxArray(int arr[],int n,int max,int idx){
	if(idx==n)
		return max;
	else{
		if(arr[idx]>max)
			max=arr[idx];
		maxArray(arr,n,max,idx+1);
	}
}
int main()
{
	int idx=0;
	int arr[]={1,2,4,9,15,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max=maxArray(arr,n,arr[0],idx);
	printarray(arr,n,idx);
	cout<<"maximum element is:"<<max;
}