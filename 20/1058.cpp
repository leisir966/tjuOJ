#include <cstdio>
#include <vector>
#include <set>
using namespace std;
/*
n��ѧ?����m����?Ŀ������ÿ?һ����?Ŀ������?Ŀ���ִܷ洢��total[i]����?����?�棬
����?Ŀ��ѡ�� ��?��洢��right[i]��Ϊ�������ͣ�?
����?�档wrongCnt[i]�洢��i��������?����������n��ѧ?����ÿ?һ�� ѧ?���Ĵ𰸲�?��?һ������st?����?�棬
?�Ƚ�st��right[i]�Ƿ���ȣ�������˵����?��������ˣ�����score += total[i]�����ϵ�ǰ��?Ŀ���ܷ֣���
�����?��������ˣ�wrongCnt[i]++����ʾ��i��������?һ������� ?�ˡ�
���ÿ?һ��ѧ?���ĵ÷֣�����wrongCnt���飬��wrongCnt��?��ֵmaxWrongCnt��
��� maxWrongCnt == 0˵��û��?һ��?��������?Ŀ���������Too simple������
�����maxWrongCnt��ֵ�� ��wrongCnt������wrongCnt[i] == maxWrongCnt����Щ��š�

*/ 
//ע�⣺scanf�е�%d��%c֮��?һ��Ҫ�зָ���������scanf��?�룬������ܽ��ճɿո���߿�ֵ��

int main()
{
	int n,m,temp,k;
	scanf("%d%d",&n,&m);
	//��������ѡ����� 
	vector < set<char> > right(m);
	//ÿһ������������ set<char>�������͵� 
	//set�Զ����� �����ƶ�ά���� 
	 
	vector<int> total(m),wrongcnt(m);
	//����һά���� 
	
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&total[i],&temp,&k);
		// ����ֵ��ѡ���������ȷѡ����� 
		for(int j=0;j<k;j++){
			char c;
			scanf(" %c",&c);
			right[i].insert(c);	//�ں������	
			
		}
	}
	
	for(int i=0;i<n;i++){
		int score=0;
		scanf("\n");
		for(int j=0;j<m;j++){
			if(j!=0)scanf(" ");//�����ʽ 
			scanf("(%d",&k);
			set<char> st;
			char c;
			for(int l=0;l<k;l++){
				scanf(" %c",&c);
				st.insert(c);			
			} 
			scanf(")");
			//һ������scanf�Ű�һ��ѡ��Ĵ����� 
			//��ס���Ӹ�ʽ�����뷽������������ 
			if(st==right[j]){
				score+=total[j];
				//�������������� 
			}else{
				wrongcnt[j]++;
			}
			
		}
		printf("%d\n",score);
		//��ӡÿ���˵ĳɼ� 
	}
	int maxwrongcnt=0;
	for(int i=0;i<m;i++){
		if(wrongcnt[i]>maxwrongcnt){
			maxwrongcnt =wrongcnt[i];
		}//Ѱ��max 
		
	}
	if(maxwrongcnt==0)
		printf("Too simple");
	else{
		printf("%d",maxwrongcnt);
		for(int i=0;i<m;i++){
			if(wrongcnt[i]==maxwrongcnt){
				printf(" %d",i+1);
			}
		}//��ӡ����������� ��� 
	}
		
	
	
	
	return 0;
	
}
