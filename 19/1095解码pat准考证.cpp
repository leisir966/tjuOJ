#include <iostream> 
#include <vector> 
#include <unordered_map> 
#include <algorithm> 
using namespace std; 
struct stu{
	string id;
	int sco;
};//ͬʱ������ֵ��ʱ���ýṹ���ʾ�ȽϷ��� 
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
		cin>>v[i].id>>v[i].sco;//ע��ʹ��v[i]Ӧ�������� 
	for(int i=0;i<=k;i++){
		int num;
		cin>>num;
		if(num==1){
			string level;
			cin>>level;
			cout<<i<<num<<level.c_str();//����ַ������� 
			vector<stu> ans;
			for(int i=0;i<n;i++){
				if(v[i].id[0]==level[0])
				ans.push_back(v[i]);
			} 
			sort(ans.begin()��ans.end()��cmp1);
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
			//����һ��hash����ϣ��һ����ɢ�д洢�� 
			for(int i=0;i<n;i++){
				if(v[i].id.substr(4, 6) == date){
					string tt==v[i].id.substr(1,3);
					m[tt]++;//��ȡtt��Ϊkey,������bucket; 
				
				}
			}
			for(auto it:m)
			    ans.push_back({it.first,it.second});
			//������map�еļ�ֵ���뵽 <site>�ε������� 
			sort(ans.begin().ans.end(),cmp2);
			for(int i=0;i<ans.size();i++)//���ô����� 
				cout<<ans[i].siteid.c_str()<<ans[i].cnt;
			if(ans.size()==0) printf("NA\n");//�˾���forѭ��ǰ��Ҳ����	 
		}
	}
	return 0;
}











