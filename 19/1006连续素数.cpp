#include <iostream> 
using namespace std;
bool isprime(int a){//O（n）=log(n)处理素数函数 
	for(int i=2;i*i<=a;a++)
		if(a%i==0) return false;
	return true;//返回bool值  true or false
	
}
int main(){//寻找相差2的素数的个数 
	int N,cnt=0;
	cin>>N;
	for(int i=5;i<N;i++)
		if(isprime(i-2)&&isprime(i)) cnt++;
	cout<<cnt;	
	return 0;
	
}

