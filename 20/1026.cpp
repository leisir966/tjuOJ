#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int n=((b-a)+50)/100;
	//不足1秒的四舍五入到秒 ,四舍五入加0.5 
	int hour=n/3600;
	n=n%3600;
	int minute =n/60,second=n%60;
	printf("%02d:%02d:%02d",hour,minute,second);
	return 0;
}
