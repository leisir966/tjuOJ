//�ַ�������string�� find ���� 
#include <iostream>
#include <cctype> 
using namespace std;
int main(){
	string s1,s2,ans;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++)
		if(s2.find(s1[i])==string::npos&&ans.find(toupper(s1[i]))==string::npos)
			//�ж�����s1�е��ַ���s2��ans�ж�Ϊ��
			//�ؼ���ѧ��ʹ��s2.find(s1[i])==string::npos
			//��ʾ����s1�е��ַ���s2�в��Ҳ��� 
			ans +=toupper(s1[i]);
		
	cout<<ans;	
	return 0;
} 
