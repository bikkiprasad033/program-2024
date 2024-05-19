#include<iostream>
using namespace std;
int main(){
	int a[]={-2,-1,0,3,6,8,11,12};
	int x=14,f=0;
	int n=sizeof(a)/sizeof(a[0]);
	
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			int sum=a[i]+a[j];
//			if(sum==x){
//				flag=1;
//				cout<<" Yes,Sum exists"<<endl;
//				break;
//			}
//		}
//		if(flag==1)break;
//	}
//	if(flag==0)cout<<"No,Sum exits"<<endl;

	int i=0;//starting pointer
	int j=n-1;//end pointer
	while(i<j){
		
		if((a[i]+a[j])<x){
			i+=1;
		}
		else if((a[i]+a[j])>x){
			j-=1;
		}
		else{
			cout<<"Yes Sum exists"<<endl;
			f=1;
			break;
		}
	}
	if(f==0)cout<<"No Sum exists"<<endl;
}