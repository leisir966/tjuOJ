#include <iostream> 
using namespace std; 
int main() { 
	int a,i=0;
	cin>>a;
	int b[3]={0};//b[3]表示三个数组 
	while(a!=0){//使用数组存入每位数字 
		b[i++]=a%10;
		a=a/10; 
	}
	//对数组上面所有的数组按照格式输出 
	for(int k=0;k<b[2];k++){
		cout<<'B';
 	}	
 	for(int k=0;k<b[1];k++){
		cout<<'S';
 	}
 	for(int k=0;k<b[0];k++){
		cout<<k+1;
 	}
 	
 	return 0; 
 	
}
 
