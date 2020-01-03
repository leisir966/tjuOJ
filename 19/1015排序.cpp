#include<iostream>
#include<algorithm>//?
#include<vector>
using namespace std;
struct node{
	int num,de,cai;
}; 
int cmp(struct node a,struct node b){//比较函数，最后排序 
	if((a.de+a.cai)!=(b.de+b.cai))
		return (a.de+a.cai)>(b.de+b.cai);
	//return a>b?a:b
	else if(a.de!=b.de)
		return a.de>b.de;
	else 
		return a.num<b.num;
}
int main(){
	int n,low,high;
//	cin>>n>>low>>high;
	scanf("%d%d%d",&n,&low,&high);
	vector<node> v[4];//v是一个迭代器  此处定义了四个node型的v
	node temp;
	int total =n;
	//
	for (int i=0;i<n;i++)
	{
		scanf("%d%d%d",&temp.num,&temp.de,&temp.cai);
		if(temp.de<low||temp.cai<low)
		total--;
		else if(temp.de>=high&&temp.cai>=high)
		v[0].push_back(temp);
		else if(temp.de>=high&&temp.cai<high)
		v[1].push_back(temp);
		else if(temp.de<high&&temp.cai<high&&temp.de>temp.cai)
		v[2].push_back(temp);
		else 
		v[3].push_back(temp);
	}
	printf("%d\n",total);//输出筛选后还有多少人 
	for(int i=0;i<4;i++){//对vector中的四组容器分别排序，并且输出 
		sort(v[i].begin(),v[i].end(),cmp);
		for(int j=0;j<v[i].size();j++)//注意这边的写法 可以写v[i][j]表示输出第i个node型迭代器里面的第j个数
		printf("%d%d%d\n",v[i][j].num,v[i][j].de,v[i][j].cai);
		
	}
	return 0;
	//test encoding中文版
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
