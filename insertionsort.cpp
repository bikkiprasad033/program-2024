#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the size of an array:";
	cin>>n;
	
	int arr[n];
	cout<<endl<<"enter the array elements:";
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	int i,j,curr;
	for(i=1;i<n;i++)
	{
		curr=arr[i];
		j=i-1;
		while(curr<arr[j] && j>-1)
		{
			arr[i]=arr[j];
			j-=1;
			i-=1;
		}
		arr[i]=curr;
	}
	
	cout<<endl<<"array elements after insertionsort:";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}