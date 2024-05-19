#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	
	string str = "siliguri institute of technology";
	
//	int x ='s' - 32;
//	cout << x <<endl;
//	cout << char(x);
	
	//cout << str[0] << str[7] << str[8] << str[9] << endl;
	
	int i=0,f=0;
	int len = str.size();
	
	string s;
	string res;
	for(i=0; i<len; i++){
		char ch = str[i];
		if(ch != ' '){
			
			s += ch;
		}
		else{
			
			if(s[0] >= 'a' && s[0] <='z')
				s[0] = (char)(s[0]-32);
			
			res =res + " " +s;	
			s.clear();
		}
	}
	cout << res <<endl;
}