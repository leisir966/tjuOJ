#include <iostream>
using namespace std;
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
	//շת����� 
}
int main(){
	int n1,m1,n2,m2,k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	if(n1*m2>n2*m1){
		swap(n1,n2);
		swap(m1,m2);
	}
	
	int num=1;
	//��������ķ�����ĸ k,���� num *�����ǱȽϵĹؼ��� 
	bool flag =false;
	while(n1*k>=m1*num) num++;
	while(n1*k<m1*num&&m2*num<n2*k){
		if(gcd(num,k)==1){
			//gcd(num,k)==1����һ��ʾû�����Լ�� 
			printf("%s%d/%d",flag==true?" ":"",num,k);
			//�����ʽ���� 
			flag=true;
		}
		num++; 
	}
	
	
	return 0;
} 
