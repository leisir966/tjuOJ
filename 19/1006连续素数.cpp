#include <iostream> 
using namespace std;
bool isprime(int a){//O��n��=log(n)������������ 
	for(int i=2;i*i<=a;a++)
		if(a%i==0) return false;
	return true;//����boolֵ  true or false
	
}
int main(){//Ѱ�����2�������ĸ��� 
	int N,cnt=0;
	cin>>N;
	for(int i=5;i<N;i++)
		if(isprime(i-2)&&isprime(i)) cnt++;
	cout<<cnt;	
	return 0;
	
}

