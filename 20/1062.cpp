#include <iostream>
using namespace std;
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
	//辗转相除法 
}
int main(){
	int n1,m1,n2,m2,k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	if(n1*m2>n2*m1){
		swap(n1,n2);
		swap(m1,m2);
	}
	
	int num=1;
	//假设所求的分数分母 k,分子 num *分子是比较的关键侧 
	bool flag =false;
	while(n1*k>=m1*num) num++;
	while(n1*k<m1*num&&m2*num<n2*k){
		if(gcd(num,k)==1){
			//gcd(num,k)==1等于一表示没有最大公约数 
			printf("%s%d/%d",flag==true?" ":"",num,k);
			//输出格式技巧 
			flag=true;
		}
		num++; 
	}
	
	
	return 0;
} 
