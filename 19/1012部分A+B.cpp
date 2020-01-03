#include <cstdio>
int main(){
	typedef long long ll;
	ll a,b;
	int da,db,pa=0,pb=0;
	scanf("%lld%d%lld%d",&a,&da,&b,&db);
	while(a!=0){//用一下三句遍历数字a中的每个数 
		if(a%10==da) pa=pa*10+da;
		a=a/10; 
	}	
	while(b!=0){
		if(b%10==db) pb=pb*10+db;
		b=b/10;
	}
	printf("%lld\n",pa+pb);
	return 0;
	
}
