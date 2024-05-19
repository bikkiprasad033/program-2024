#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> sort(vector<int> v1,vector<int> v2,unordered_map <int,int> &maping){
	
	int i=0,j=0;
	int n=v1.size();
	int m=v2.size();
	
	vector<int> ans;
	
	while(i<n && j<m){
		
		if((v1[i] < v2[j]))
		{
			ans.push_back(v1[i]);
//			maping[v1[i]]=1;
			i+=1;
		}
		else if((v1[i] > v2[j])){
			ans.push_back(v2[j]);
//				maping[v2[j]]=1;
				j+=1;
		}
		else
		{
			if(find(ans.begin(),ans.end(),v1[i])){
				i+=1;
				j+=1;
			}
			else{
				ans.push_back(v2[j]);
				i+=1;
				j+=1;
			}
		}
	}
	while(i<n){
		ans.push_back(v1[i]);
		i+=1;
	}
	while(j<m){
		ans.push_back(v2[j]);
		j+=1;
	}
	return ans;
}

int main(){
	vector<int> v1;
	vector<int> v2;
	unordered_map <int,int> maping;
	
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(6);
	for(int i=0;i<v1.size();i++){
		maping[v1[i]]=0;
	}
	
	v2.push_back(2);
	v2.push_back(3);
	v2.push_back(5);
	for(int i=0;i<v2.size();i++){
		maping[v2[i]]=0;
	}
	
	vector<int> res;
	res = sort(v1,v2,maping);
	for(int i=0;i<res.size();i++){
		cout << res[i] <<" ";
	}
}