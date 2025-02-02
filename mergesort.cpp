#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid,int r)
{
	int an=mid-l+1;
	int bn=r-mid;
	int a[an];
	int b[bn];
	for(int i=0;i<an;i++)
		a[i]=arr[l+i];
	for(int j=0;j<bn;j++)
		b[j]=arr[mid+1+j];
		
	int i=0,j=0,k=0;
	
	while(i<an && j<bn)
	{
		if(a[i]<b[j])
			arr[k++]=a[i++];
		else
			arr[k++]=b[j++];
	}
	while(i<an)
	{
		arr[k++]=a[i++];
	}
	while(j<bn)
	{
		arr[k++]=b[j++];
	}
}
void mergesort(int arr[],int l,int r)
{
	if(l>=r)
		return;
	else
	{
		int mid=(l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}
int main()
{
	int n;
	cout<<"enter size of array:";
	cin>>n;
	
	int arr[n];
	cout<<"\nenter array elements:";
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	mergesort(arr,0,n-1);
	cout<<"\nelements after merge sort:";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}