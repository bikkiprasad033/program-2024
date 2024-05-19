#include<iostream>
using namespace std;

string checkPalindrome(string str, int idx, int len, string &res){
	
	if(idx == len-1)
	{
		res = str[idx]+res;
		return res;	
	}
	
	return checkPalindrome(str,idx+1,len,res) + str[idx];
	
}

int main(){
	string str="abcd";
	int len = str.size();
	string res="";
	res = checkPalindrome(str,0,len,res);
	cout<<res<<endl;
	if(res == str)
		cout<<"PALINDROME";
	else
		cout<<"NOT PALINDROME";
}