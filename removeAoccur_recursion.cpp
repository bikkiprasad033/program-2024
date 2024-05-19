#include<iostream>
#include<string>
using namespace std;

string removeA(string str, int idx, string res){
	
	if(idx == str.size())return res;
	
	if(str[idx] != 'a'){
			char ch = str[idx];
			res = res + ch;
	}	
	string result = removeA(str,idx+1,res);
	return result;	
} 

int main(){
	string str="abxac";
	string res;
	res = removeA(str,0,res);
	cout<<res;
}