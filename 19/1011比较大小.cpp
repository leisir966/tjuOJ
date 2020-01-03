#include <iostream> 
using namespace std; 
typedef long long int ll; 
int main() { 
int n,i=0;
scanf("%d",&n);
//for(int i=0;i<n;i++) //与1010写法意思一样 也可以写成while(t--) 
while(n--)
{					//while(cin>>a>>b)一样完成了每输入两个数就开始循环计算 
	ll  a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("Case #%d: %s\n",++i,a+b>c?"true":"false");
}
return 0;

}
 
