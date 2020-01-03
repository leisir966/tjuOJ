#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n;
	for(int i=0;i<s.length();i++)
		n+=s[i]-'0';
	string str[10]={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"}; 
	string num = to_string(n);
	
	for(int i=0;i<num.length();i++)
		cout<<str[num[i]-'0'];
	
	
	
	return 0;
} 
