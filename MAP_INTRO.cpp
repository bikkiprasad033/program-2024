#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
	
	unordered_map<char,int> m;
	string str;
	getline(cin,str);	//college wallah
	int i,sum=0,f=0;
	char ch;
	int len = str.length();
	
	for(i=0; i<len; i++){
		m[str[i]]++;
	}
	
	for(i=0; i<len; i++){
		if(m[str[i]] > 1){
			cout << "First repeating element is :"<< str[i] << endl;
			sum = m[str[i]];
			break;
		}
	}
	cout << sum;
}