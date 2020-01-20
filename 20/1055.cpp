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
	//���߶Ȳ�ͬ�����ظߵ��Ǹ��� �����������ֵ������� 
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
	//�ɸߵ������� 
	int t=0,row=k;
	while(row){
		if(row==k){
			m=n-n/k*(k-1);
		}else{
			m=n/k;
		}
		vector<string> ans(m);
		//m/2��ʾ�м��
		ans[m/2]=stu[t].name;
		//���һ��
		int j=m/2-1;
		for(int i=t+1;i<t+m;i=i+2)//step 2 
			ans[j--]=stu[i].name;
		//�ұ�һ�� 
		j=m/2+1;
		for(int i=t+1;i<t+m;i=i+2) 
			ans[j++]=stu[i].name;
		//�����ǰ��
		cout<<ans[0];
		//����пո񡰡� �ĸ�ʽҪ��  
		for(int i=1;i<m;i++)
			cout<<" "<<ans[i];
		cout<<endl;
		t=t+m;
		row--;
	}	
	
	return 0;
} 
