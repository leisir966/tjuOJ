#include <cstdio>
//������ĺ�  һ���õ��㷨���뷨 

int main(){
	int n,sum=0,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		sum+=temp*11*(n-1);
		//sum+=temp*10*(n-1)+ temp*(n-1)
		//     ÿ����ʮλ����λ������n-1�� 
	} 
	
	printf("%d",sum);
	
	return 0;
}
//�ܽ᣺����һ����ѧ����  
