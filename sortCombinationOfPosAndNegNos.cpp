#include<iostream>
#include<math.h>
//#include <cstdlib>

using namespace std;
int main(){
	
	int arr[]={-1,0,3,-6,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum = 0;
	
	for(int i=0; i<n-1; i++){
		sum = i;
		for(int j=i+1; j<n; j++){
			
			if((abs(arr[j]))<(abs(arr[sum])))	
				sum = j;
		}
		int temp = arr[sum];
		arr[sum] = arr[i];
		arr[i] = temp;
	}
	
	for(int i=0; i<n; i++){
		cout <<arr[i] <<" "; 
	}
}