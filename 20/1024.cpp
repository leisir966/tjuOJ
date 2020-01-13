#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i=0;
	while (s[i]!='E')i++;
	string t=s.substr(1,i-1);
	//截取E前面的字符串（无符号） 
	int n = stoi(s.substr(i+1));
	//E之后的字符串存储为数字 
	if(s[0]=='-')cout<<'-';
	if(n<0){//分类当n<0的情况 
		cout<<"0.";
		for(int j=0;j<abs(n)-1;j++) cout<<'0';
		for(int j=0;j<t.length();j++)
			if(t[j]!='.')cout<<t[j]; 
			//只需将t中除了'.'之外的所有数字输出
			//即可得到0.0000112323类的数字 
	} else{//有两种情况 
		cout<<t[0];
		int cnt,j;
		for(j=2,cnt=0;j<t.length()&&cnt<n;j++,cnt++)
			cout<<t[j];
		//两个变化条件的情况：
		/*
		1.cnt<n超出，则表示1041.232的这种情况 
		2.j<t.length()超出，则表示1320000 这种情况
		j=1表示小数点 
		*/	 
		if(j==t.length()){
			//1234000的情况 
			for(int k=0;k<n-cnt;k++)cout<<'0';
		} else{
		//1231.2323的情况 
			cout<<'.';
			for(int k=j;k<t.length();k++)cout<<t[k]; 
		}
	}
	
	
	
	
	return 0;
} 
