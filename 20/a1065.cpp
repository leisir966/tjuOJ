#include <cstdio>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		long long a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		long long sum= a+b;
		//����Խ������ 
		if (a>0&&b>0&&sum<0){
			printf("case #%d: true\n",i+1);
		}else if(a<0&&b<0&&sum>=0){
			printf("case #%d: false\n",i+1);
		}else if(sum>c){//Խ����� ֮������ 
			printf("case #%d:true\n",i+1);		 
		}else {
			printf("case #%d:false\n",i+1);
		}
			
	}

	return 0;
}
