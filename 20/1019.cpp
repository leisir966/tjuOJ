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
	s.insert(0,4-s.length(),'0');//���������Ҫ�Ȳ� 0 
	do{
		string a=s,b=s;
		sort(a.begin(),a.end(),cmp);//decreasing order
		sort(b.begin(),b.end());	//increasing order
		
		int result = stoi(a)-stoi(b);// *string to int
		//�ؼ������������ ��stori()���� ���ַ���ת��Ϊ���ͼ���
		//stori()����������algorithm  ��Ӵ����thm 
		s=to_string(result);
		s.insert(0,4-s.length(),'0');
		cout<<a<<" - "<<b<<" = "<<s<<endl;

	}while(s!="6174"&&s!="0000");	//* ע����do while  
	
	
	
	
	
	return 0;
}
