#include <iostream>
#include <cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int nmax=1e4;
int hashtable[nmax];//1��ʾ�����ǣ�0��ʾû������ 
int num[110];

bool cmp(int a,int b){
	return a>b;
}
int main(int argc,char**argv){
	int n;
	while(cin>>n){
		memset(hashtable,0,sizeof(hashtable));//δ������
		int m;
		for(int i=0;i<n;i++){
			cin>>num[i];
			m=num[i];
			while(m!=1){
				if(m%2==0){
					m=m/2; 
				}else{
					m=(3*m+1)/2; 
				}
			hashtable[m]=1;//��m���и��� 
		} 
	}
	
	int cnt=0;
   // ��¼���ٸ���δ�����ǣ������ʱ��֤û�ж���ո�
	for(int i=0;i<n;i++){
		if(hashtable[num[i]]==0){//���û�б�����
		cnt++; 	 
	}
} 
		sort(num,num+n,cmp);//���մӴ�С˳������
		for(int i=0;i<n;i++){
			if(hashtable[num[i]]==0){
				printf("%d",num[i]);
				cnt--;
				if(cnt>0){
					printf(" "); 
					//cnt����ո� 
				}
			}
		}

	}
return 0;
}







