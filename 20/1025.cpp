#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int first,k,n,temp;
	cin>>first>>n>>k;
	//first ��һ�����ĵ�ַ 
	int data[100005],next[100005],list[100005];
	for(int i=0;i<n;i++){
		cin>>temp;
		//temp��ÿ�����ĵ�ַ 
		cin>>data[temp]>>next[temp];
	}
	
	int sum = 0;
	//��һ�����е������㶼�����õ�
	//�Ӹ������� 
	while (first!=-1){
		//����ַ��Ϊ-1ʱ �浽list���� 
		list[sum++]=first;
		first=next[first];
	}
	
	for(int i=0;i<(sum-sum%k);i+=k)
		reverse(begin(list)+i,begin(list)+i+k);
	for(int i=0;i<sum-1;i++)
		printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
	printf("%05d %d -1",list[sum-1],data[list[sum-1]]);
		 
	
	return 0;
} 
