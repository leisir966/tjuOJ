 #include <iostream>
 #include <string>
 using namespace std;
 int main(){
 	string s;
 	cin>>s;
 	int a[10]={0};
 	for(int i=0;i<s.length();i++){
 		a[s[i]-'0']++;
		 //遍历字符串中的每个字符，
		 //将每个 数字出现的次数保存在数组a中，
		 //a[i]表示数字i出现的次数，后将数组a的下标0-9中所
		 //有a[i]不不为0的 输出即可～
	 }
	 
	 for(int i=0;i<10;i++){
	 	if(a[i]!=0)
	 		printf("%d:%d\n",i,a[i]);	 	
	 } 
 	
 	
 	return 0;
 	
 } 
