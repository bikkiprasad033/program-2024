#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp=0,min=0;
	cout<<"enter array size";
	cin>>n;
	
	int arr[n];
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	cout<<endl<<"elements before sorting are:";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
	for(i=0; i<n-1; i++)
	{
		min=i;
		for(j=i+1; j<n ; j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;	
	}
	cout<<endl<<"elements after sorting are:";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}