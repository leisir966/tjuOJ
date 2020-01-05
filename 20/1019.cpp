#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool cmp(char a,char b){
	return a>b;
}    //return bigger one  means return 
	// with decreasing order 

int main(){
	string s;
	cin>>s;
	s.insert(0,4-s.length(),'0');//特殊情况需要先补 0 
	do{
		string a=s,b=s;
		sort(a.begin(),a.end(),cmp);//decreasing order
		sort(b.begin(),b.end());	//increasing order
		
		int result = stoi(a)-stoi(b);// *string to int
		//关键在于这个计算 用stori()函数 将字符串转换为整型计算
		//stori()函数包含在algorithm  啊哟哥瑞thm 
		s=to_string(result);
		s.insert(0,4-s.length(),'0');
		cout<<a<<" - "<<b<<" = "<<s<<endl;

	}while(s!="6174"&&s!="0000");	//* 注意用do while  
	
	
	
	
	
	return 0;
}
