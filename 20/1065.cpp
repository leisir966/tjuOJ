#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
	int n,a,b,m;
	scanf("%d",&n);
	vector<int> couple(100000,-1);
	//5λ������10w�����飬ÿ������ʼ��Ϊ1 
	for(int i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		couple[a]=b;
		couple[b]=a;		
	}
	
	scanf("%d",&m);
	vector<int> guest(m),isexist(100000);
	for(int i=0;i<m;i++){
		scanf("%d",&guest[i]);
		if(couple[guest[i]]!=-1)
			isexist[couple[guest[i]]]=1;
		//��ʾ���� ���� 
	}
	
	set<int> s;
	for(int i=0;i<m;i++){
		if(!isexist[guest[i]])
			s.insert(guest[i]);
		}
		//�������˺þã�����ַ��������� 
	printf("%d\n",s.size());
	for(auto it=s.begin();it!=s.end();it++){
		if(it!=s.begin()) printf(" ");
		printf("%05d",*it);
	}
	
	
	
	return 0;
} 
