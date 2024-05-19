#include<iostream>
using namespace std;
void reverse(int arr[],int i,int j){
	while(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
		}
}
int main(){

	int arr[] = {10,20,30,40,50,60};	
	int n = 6;
	for(int i=0;i<n;i++)
		cout << arr[i] <<" ";
		
	cout << endl;
	
	cout << "value of K";
	int k;
	cin >> k;
	
	while(k--){

		int i = 0, j = n-1;

		reverse(arr,i,j);
		reverse(arr,i+1,j);
		for(int i=0;i<n;i++){
			cout << arr[i] <<" ";
		}
		cout << endl;	
	}
	
}