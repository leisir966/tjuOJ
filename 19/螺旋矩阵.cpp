#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int func(int N){
	int i=sqrt((double )N);
	while (i!=0){
		if( N%i==0 ) return i;
		else i--; 
	}
	return 1; 
	
}

int cmp(int a,int b){
	return a>b;
}

int main(){
	int N;
	cin>>N;
	int n,m,a[N],t=0;
	for(int i=0;i<N;i++)
	cin>>a[i];
	sort(a,a+N,cmp);
	n=func(N);
	m=N/n;
	int b[m][n];
	int level=m/2+m%2;
	for(int i=0;i<level;i++){
		for(int j=i;j<=n-1-i&&t<=N-1;j++){
			b[i][j]=a[t++];
		}
		for(int j=i+1;j<=m-2-i&&t<=N-1;j++){
			b[j][n-1-i]=a[t++];
		}
		for(int j=n-i-1;j>=i&&t<=N-1;j--){
			b[m-1-i][j]=a[t++];
		}
		for(int j=m-2-i;j>=i+1&&t<=N-1;j--){
			b[j][i]=a[t++];
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",b[i][j]);
			if (j!=n-1) printf(" ");
			
		}
		printf("\n");
	}
	return 0;
}





