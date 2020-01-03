#include<iostream>
#include<cstring> 
using namespace std;


int main(){
	int n,sum[26],i,max;
	char str[1001];
	cin>> n;
	while(n--){
		cin>>str;
		for(i=0;i<26;i++)
			sum[i]=0;
			
		for(i=0;i<strlen(str);i++)
			sum[str[i]-'a']++;//遍历字符串，对应的字符的数量增加 
		
		max=0;
		for(i=1;i<26;i++){//找出sum[]数组中最大的字符 
			if(sum[i]>sum[max])
				max=i;
		} 
		cout<<char(max+'a')<<' '<<sum[max]<<endl;
			
	}	
	
	





	return 0;





}
