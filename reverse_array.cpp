#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6};
	int size=6;
	int l=0,r=size-1;
	while(l<r){
		int temp=arr[l];
		arr[l]=arr[r];
		arr[r]=temp;
		l+=1;
		r-=1;
	}
	for(int ele:arr){
		cout<<ele<<" ";
}
}