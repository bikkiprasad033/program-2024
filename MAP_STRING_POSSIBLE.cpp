#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main(){
	
	int n;
	cout << "enter size of an array:";
	cin >> n;
	
	vector<string> v(n);
	cout << "enter elements:" <<endl;
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	
	map<char,int> m;
	for(int i=0;i<n;i++){
		
		string str = v[i];
		int len = str.size();
		
		for(int j=0;j<len;j++){
			char ch = str[j];
			m[ch]++;
		}
	}
	for(auto ele : m){
		cout << ele.first << "->" << ele.second <<endl;
	}cout<<endl;
	int f = 0;
	for(auto ele : m){
		if(ele.second % n != 0){
			f = 1;
			break;
		}
	}
	if(f == 1)
		cout << "Not Possible" <<endl;
	else
		cout << "Yes Possible" <<endl;
		
}