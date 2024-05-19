#include<iostream>
using namespace std;
int main(){
	
	int a[]={9,23,45,69,78};
	int x=56,f=0;
	int n=sizeof(a)/sizeof(a[0]);
	
	int i=0;//start pointer
	int j=n-1;//end pointer
	
	while(i<j){
		
		if((a[j]-a[i])>x){
			j-=1;
		}
		else if((a[j]-a[i])<x){
			i+=1;
		}
		else{
			f=1;
			cout<<"YES"<<endl;
			break;
		}
	}
	if(f==0)cout<<"NO"<<endl;
}