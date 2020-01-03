#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int t=((b-a)+50)/100;
	int h=t/3600;
	t=t%3600;
	int m=t/60;
	int s=t%60;
	printf("%02d:%02d:%02d",h,m,s);//   ´íÓÃÁË&h Êä³ö
	return 0;
	
	
}
