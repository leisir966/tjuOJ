#include <iostream>
#include <algorithm>
using namespace std;
int a[10000];
 bool cmp1(int a,int b){
 	return a>b;
 }
 
 int main(){
 	int n;
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 		scanf("%d",&a[i]);
 	sort(a+1,a+n+1,cmp1);
 	int ans=0,p=1;
 	while(ans<=n&&a[p]>p){
 		ans++;
 		p++;
 		//�ؼ��߼� 
 		//pֻ��һ���������� 
	 }
	printf("%d",ans); 	
 	return 0;
 } 
