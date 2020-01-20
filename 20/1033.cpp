#include <iostream>
#include <cctype>
#include <string>

using namespace std;
int main(){
	string bad,should;
	getline(cin,bad);
	getline(cin,should);
	for(int i=0,length=should.length();i<length;i++)
	{//了解for里面的定义方法 
			//两个独立的逻辑筛选 
		if(bad.find(toupper(should[i]))!=string::npos)continue;
		if(isupper(should[i])&&bad.find('+')!=string::npos)continue;
		//string::npos的意思？ 
		cout<<should[i];
		
	}
	
	return 0;
}
