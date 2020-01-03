#include <iostream> 
#include <vector> 
#include <unordered_map> 
#include <algorithm> 
using namespace std; 
struct stu{
	string id;
	int sco;
};//同时输出多个值的时候，用结构体表示比较方便 
struct site{
	string siteid;
	int cnt;
};
bool cmp1(const stu &a,const stu &b){
	return a.sco==b.sco?a.id<b.id:a.sco>b.sco;
}
bool cmp2(const site &a,const site &b){
	return a.cnt==b.cnt?a.siteid<b.siteid:a.cnt>b.cnt;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<stu> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i].id>>v[i].sco;//注意使用v[i]应用中括号 
	for(int i=0;i<=k;i++){
		int num;
		cin>>num;
		if(num==1){
			string level;
			cin>>level;
			cout<<i<<num<<level.c_str();//输出字符串函数 
			vector<stu> ans;
			for(int i=0;i<n;i++){
				if(v[i].id[0]==level[0])
				ans.push_back(v[i]);
			} 
			sort(ans.begin()，ans.end()，cmp1);
			for(int i=0;i<ans.size();i++)
			    cout<<ans[i].id.c_str()<<ans[i].sco<<endl;
			if(ans.size()==0)printf("NA\n");	
		}else if(num==2){
			int cnt=0,sum=0;
			int siteid;
			cin>>siteid;
			//vector<stu> ans; 
			cout<<i<<num<<siteid;
			for(int i=0;i<n;i++){
				if(v[i].id.substr(1,3)==to_string(siteid)){
					cnt++;
					sum+=v[i].sco;
				}
			}
			if(cnt!=0)cout<<cnt<<sum<<endl;
			else printf("NA\n");
		}else if(num==3){
			string date;
			cin>>date;
			cout<<i<<num<<date.c_str();
			vector<site> ans;
			unordered_map<string,int> m;
			//这是一个hash表，哈希表不一定是散列存储的 
			for(int i=0;i<n;i++){
				if(v[i].id.substr(4, 6) == date){
					string tt==v[i].id.substr(1,3);
					m[tt]++;//提取tt作为key,加入其bucket; 
				
				}
			}
			for(auto it:m)
			    ans.push_back({it.first,it.second});
			//将无序map中的键值放入到 <site>形的容器中 
			sort(ans.begin().ans.end(),cmp2);
			for(int i=0;i<ans.size();i++)//不用大括号 
				cout<<ans[i].siteid.c_str()<<ans[i].cnt;
			if(ans.size()==0) printf("NA\n");//此句在for循环前面也能行	 
		}
	}
	return 0;
}











