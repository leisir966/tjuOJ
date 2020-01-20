#include <iostream>
using namespace std;
int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//权重表 
int b[11]={1,0,10,9,8,7,6,5,4,3,2};//映射表 
string s;
bool istrue(){
	int sum=0;
	for(int i=0;i<17;i++){
		if(s[i]<'0'||s[i]>'9')return false;
		//如果不是数字则直接返回false；
		sum+=(s[i]-'0')*a[i]; 
	}
	int temp=(s[17]=='X')?10:(s[17]-'0');
	return b[sum%11]==temp;
	//最后的判断第十八个数字是否与计算出来的数相同	
	
}
int main(){
	int n,flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		if(!istrue()){
			cout<<s<<endl;
			flag =1;
		} 
	} 
	if(flag==0) cout<<"All passed";	
	
	return 0;
} 
