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
	//��ȡEǰ����ַ������޷��ţ� 
	int n = stoi(s.substr(i+1));
	//E֮����ַ����洢Ϊ���� 
	if(s[0]=='-')cout<<'-';
	if(n<0){//���൱n<0����� 
		cout<<"0.";
		for(int j=0;j<abs(n)-1;j++) cout<<'0';
		for(int j=0;j<t.length();j++)
			if(t[j]!='.')cout<<t[j]; 
			//ֻ�轫t�г���'.'֮��������������
			//���ɵõ�0.0000112323������� 
	} else{//��������� 
		cout<<t[0];
		int cnt,j;
		for(j=2,cnt=0;j<t.length()&&cnt<n;j++,cnt++)
			cout<<t[j];
		//�����仯�����������
		/*
		1.cnt<n���������ʾ1041.232��������� 
		2.j<t.length()���������ʾ1320000 �������
		j=1��ʾС���� 
		*/	 
		if(j==t.length()){
			//1234000����� 
			for(int k=0;k<n-cnt;k++)cout<<'0';
		} else{
		//1231.2323����� 
			cout<<'.';
			for(int k=j;k<t.length();k++)cout<<t[k]; 
		}
	}
	
	
	
	
	return 0;
} 
