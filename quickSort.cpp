#include<iostream>
using namespace std;

int partiton(int arr[], int first, int last){
	
	int pivot = arr[last];
	int i = first-1;
	
	for(int j = first; j<last; j++){
		
		if(arr[j] < pivot){
			i+=1;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[last]);
	return i+1;
}

void quickSort(int arr[], int first, int last){
	
	if(first >= last)return;	
	
	int pi = partiton(arr,first,last);
	quickSort(arr,first,pi-1);
	quickSort(arr,pi+1,last);	
}

int main(){	
	int arr[] = {20,12,35,16,18,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	quickSort(arr,0,n-1);
	
	for(int i=0; i<n; i++){
		cout << arr[i] <<" ";
	}
	
}