#include <iostream>
#include <cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int nmax=1e4;
int hashtable[nmax];//1表示被覆盖，0表示没被覆盖 
int num[110];

bool cmp(int a,int b){
	return a>b;
}
int main(int argc,char**argv){
	int n;
	while(cin>>n){
		memset(hashtable,0,sizeof(hashtable));//未被覆盖
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
			hashtable[m]=1;//对m进行覆盖 
		} 
	}
	
	int cnt=0;
   // 记录多少个数未被覆盖，在输出时保证没有多余空格
	for(int i=0;i<n;i++){
		if(hashtable[num[i]]==0){//如果没有被覆盖
		cnt++; 	 
	}
} 
		sort(num,num+n,cmp);//按照从大到小顺序排序
		for(int i=0;i<n;i++){
			if(hashtable[num[i]]==0){
				printf("%d",num[i]);
				cnt--;
				if(cnt>0){
					printf(" "); 
					//cnt输出空格法 
				}
			}
		}

	}
return 0;
}







