#include<iostream>
#include<string>
using namespace std; 
int main() {
	string s;//定义的字符串可以用s[i]; 
	cin>>s;
	int sum=0;
	string str[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	for(int i=0;i<s.length();i++)
		sum+=(s[i]-'0');
	//把字符串用s[i] -'0'全部加到整形变量sum中 
	string num = to_string(sum);
	// 转换成num字符串 
	for(int i=0;i<num.length();i++){
		if(i!=0)cout<<" ";
		cout<<str[num[i]-'0'];
		//输出str[]中的字符串 
		}
		
	/* 总结：1.字符串中的每个字符都可以用s[i]表示
			 2.输出的时候叠加运算，一步简洁输出
			   如：cout<<str[num[i]-'0'];
			 3.经常做总结  	
	*/ 
	
	
	 return 0; 
}


