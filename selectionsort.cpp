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
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<endl<<"elements after sorting are:";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}