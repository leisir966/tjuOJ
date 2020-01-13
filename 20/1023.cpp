 #include <iostream>
using namespace std;
int main(){
	int a[10],t;
	for(int i=0;i<10;i++)
		cin>>a[i];
	for(int i=1;i<10;i++)
		if(a[i]!=0){
			cout<<i;
			t=i;
			break;
		} 
	
	for(int i=0;i<a[0];i++)cout<<0;
	for(int i=0;i<a[t]-1;i++)cout<<t;
	//主要是两个关键数字：1.找到第一个个数不是0的非零数字
	//2.将0的个数输出。 
	for(int i=t+1;i<10;i++)
		for(int k=0;k<a[i];k++)
			cout<<i; 
	
	
	return 0;
}
