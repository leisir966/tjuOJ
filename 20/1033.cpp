#include <iostream>
#include <cctype>
#include <string>

using namespace std;
int main(){
	string bad,should;
	getline(cin,bad);
	getline(cin,should);
	for(int i=0,length=should.length();i<length;i++)
	{//�˽�for����Ķ��巽�� 
			//�����������߼�ɸѡ 
		if(bad.find(toupper(should[i]))!=string::npos)continue;
		if(isupper(should[i])&&bad.find('+')!=string::npos)continue;
		//string::npos����˼�� 
		cout<<should[i];
		
	}
	
	return 0;
}
