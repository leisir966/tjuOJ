#include <cstdio>
using namespace std;
int main(){
	typedef long long ll;
	ll a, b;
	int da,db,pa=0,pb=0;
	scanf("%lld%d%lld%d",&a,&da,&b,&db);
	//第二遍写  对scanf的书写格式 ！-没加& -! 
	while(a!=0){
		if(a%10==da) pa=pa*10+da;
		a= a/10;
	}
	while(b!=0){
		if(b%10==db) pb=pb*10+db;
		b= b/10;
	}
	printf("%lld\n",pb+pa);
	
	return 0;
}
