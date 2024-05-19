#include<iostream>
using namespace std;

//INSERTION SORT STARTS HERE
void insertionSort(int arr[], int n){
	
	for(int i=1; i<n; i++){
		
		int curr = arr[i];
		int j = i-1;
		
		while(j>=0 && arr[j]>curr){
			arr[j+1] = arr[j];
			j-=1;
		}
		arr[j+1] = curr;
	}
}
//QUICKSORT STARTS HERE
int partition(int arr[], int first, int last){
	
	int pivot = arr[last];
	int j = first;
	int i = first-1;
	
	for(; j< last; j++){
		
		if(arr[j] < pivot){
			swap(arr[i+1],arr[j]);
		}
	}
	swap(arr[i+1],arr[last]);
	return i+1;
}
void quickSort(int arr[], int first, int last){
	
	if(first>=last)return;
	
	int pi = partition(arr,first,last);
	quickSort(arr,first,pi-1);
	quickSort(arr,pi+1,last);
}

//MERGE SORT STARTS HERE
void merge(int arr[], int l, int mid, int r){
	
	int an = mid-l+1;
	int bn = r-mid;
	int a[an];
	int b[bn];
	
	for(int i=0; i<an; i++)
		a[i] = arr[l+i];
	for(int j=0; j<bn; j++)
		b[j] = arr[mid+1+j];
		
	int i=0; //for traversing a array
	int j=0; //for traversing b array
	int k=l; //for traversing resultant array  (K = L)*****
	
	while(i<an && j<bn){
		
		if(a[i] < b[j])
			arr[k++] = a[i++];
		else
			arr[k++] = b[j++];	
	}
	while(i<an){
		arr[k++]=a[i++];
	}
	while(j<bn){
		arr[k++]=b[j++];
	}		
}
void mergeSort(int arr[], int l, int r){
	
	if(l>=r)return;
	
	int mid = (l+r)/2;
	mergeSort(arr,l,mid);
	mergeSort(arr,mid+1,r);
	merge(arr,l,mid,r);
}
int main(){
	int arr[]={20,34,12,16,35,18};
	int n = sizeof(arr)/sizeof(arr[0]);
	
//	insertionSort(arr,n);
//		cout<<"elements after sorting are:"<<endl;
//		for(int i=0; i<n; i++){
//			cout << arr[i] <<" ";
//		}
	quickSort(arr,0,n-1);
		cout<<"elements after sorting are:"<<endl;
		for(int i=0; i<n; i++){
			cout << arr[i] <<" ";
		}
//	mergeSort(arr,0,n-1);
//		cout<<"elements after sorting are:"<<endl;
//		for(int i=0; i<n; i++){
//			cout << arr[i] <<" ";
//		}
}