#include<iostream>
#include<string>
using namespace std; 
int main() {
	string s;//������ַ���������s[i]; 
	cin>>s;
	int sum=0;
	string str[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	for(int i=0;i<s.length();i++)
		sum+=(s[i]-'0');
	//���ַ�����s[i] -'0'ȫ���ӵ����α���sum�� 
	string num = to_string(sum);
	// ת����num�ַ��� 
	for(int i=0;i<num.length();i++){
		if(i!=0)cout<<" ";
		cout<<str[num[i]-'0'];
		//���str[]�е��ַ��� 
		}
		
	/* �ܽ᣺1.�ַ����е�ÿ���ַ���������s[i]��ʾ
			 2.�����ʱ��������㣬һ��������
			   �磺cout<<str[num[i]-'0'];
			 3.�������ܽ�  	
	*/ 
	
	
	 return 0; 
}


