#include <iostream> 
#include <vector> 
#include <algorithm> 
/*
主要是用了两个数组，标记a[i];
v[i]用来判断 
*/ 
using namespace std; 
int arr[10000];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int k,n,flag=0;
	cin>>k;
	vector<int>v(k);
	
	for(int i=0;i<k;i++){
		cin>>n;
		v[i]=n;
		//对于k个数字逐个输入 并且逐个做判断和标记 
		//先将N判断后，对arr[10000]标记一遍 
		while(n!=1){
			if (n%2!=0) n=3*n+1;
			n=n/2;
			if(arr[n]==1)break;
			arr[n]=1;
		}
	}
	sort(v.begin(),v.end(),cmp);
	//向量数组排序 
	for(int i=0;i<k;i++){
		if(arr[v[i]]==0){
			if(flag==1)cout<<" ";
			cout<<v[i];
			flag=1;//flag 输出空格法 
			//'1'
			//' 2'
			//' 3'
		}
	}
	

return 0;
}


