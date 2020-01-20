#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct node{
	string name;
	int height;
};

int cmp(struct node a,struct node b){
	return a.height!=b.height? a.height>b.height:a.name<b.name;
	//若高度不同，返回高的那个， 否则按照名字字典序升序 
}

int main(){
	int n,k,m;
	cin>>n>>k;
	vector<node> stu(n);
	for(int i=0;i<n;i++){
		cin>>stu[i].name;
		cin>>stu[i].height;
	} 
	sort(stu.begin(),stu.end(),cmp);
	//由高到低排序 
	int t=0,row=k;
	while(row){
		if(row==k){
			m=n-n/k*(k-1);
		}else{
			m=n/k;
		}
		vector<string> ans(m);
		//m/2表示中间的
		ans[m/2]=stu[t].name;
		//左边一列
		int j=m/2-1;
		for(int i=t+1;i<t+m;i=i+2)//step 2 
			ans[j--]=stu[i].name;
		//右边一列 
		j=m/2+1;
		for(int i=t+1;i<t+m;i=i+2) 
			ans[j++]=stu[i].name;
		//输出当前排
		cout<<ans[0];
		//输出有空格“” 的格式要求  
		for(int i=1;i<m;i++)
			cout<<" "<<ans[i];
		cout<<endl;
		t=t+m;
		row--;
	}	
	
	return 0;
} 
