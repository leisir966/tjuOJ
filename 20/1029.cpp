//字符串处理，string的 find 函数 
#include <iostream>
#include <cctype> 
using namespace std;
int main(){
	string s1,s2,ans;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++)
		if(s2.find(s1[i])==string::npos&&ans.find(toupper(s1[i]))==string::npos)
			//判断条件s1中的字符在s2和ans中都为空
			//关键点学会使用s2.find(s1[i])==string::npos
			//表示的是s1中的字符在s2中查找不到 
			ans +=toupper(s1[i]);
		
	cout<<ans;	
	return 0;
} 
