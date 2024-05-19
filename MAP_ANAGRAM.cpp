#include<iostream>
#include<map>
#include<string>
using namespace std;
bool checkAnagram(string str1,string str2){
	
	map<char,int> m1;
	
	if(str1.size() != str2.size())
		return false;
	else{
		for(char ch : str1){
			m1[ch]++;
		}
		for(char ch : str2){
			m1[ch]--;
		}
		
		for(auto ele : m1){
			if(ele.second != 0)
				return false;		
		}
	}
	return true;
}
int main(){
	
	string str1,str2;
	cout << "enter the two strings:";
	cin >> str1 >> str2;
	
	if(checkAnagram(str1,str2))
		cout << "YES" <<endl;
	else
		cout <<"NO" <<endl;
}