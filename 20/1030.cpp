#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n;
	long long p;
	scanf("%dlld%",&n,&p);
	//scanf 的格式 lld表示长整型 
	vector<int> v(n);
	
	for(int i=0;i<n;i++)
		cin>>v[i];
		
	sort(v.begin(),v.end());
	int result=0,temp=0;
	
	for(int i=0; i<n;i++){
		
		for(int j=i+result; j<n; j++){
			
			if(v[j]<=v[i]*p){
				
				temp=j-i+1;
				if(temp>result)
					result = temp;				
			}else{
				break;
			}
		//第二个for里面的逻辑表示截取最长的result	
		}
	}
	cout<<result;
	
	return 0;
	//有点小毛病，部分正确 
} 
