#include <iostream> 
using namespace std; 
typedef long long int ll; 
int main() { 
int n,i=0;
scanf("%d",&n);
//for(int i=0;i<n;i++) //��1010д����˼һ�� Ҳ����д��while(t--) 
while(n--)
{					//while(cin>>a>>b)һ�������ÿ�����������Ϳ�ʼѭ������ 
	ll  a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("Case #%d: %s\n",++i,a+b>c?"true":"false");
}
return 0;

}
 
