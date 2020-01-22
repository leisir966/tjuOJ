#include <cstdio>
#include <vector>
#include <set>
using namespace std;
/*
n个学?生，m道题?目。对于每?一道题?目，将题?目的总分存储在total[i]数组?里里?面，
将题?目的选项 插?入存储在right[i]（为集合类型）?
里里?面。wrongCnt[i]存储第i道题错误的?人数，对于n个学?生，每?一个 学?生的答案插?入?一个集合st?里里?面，
?比较st与right[i]是否相等，如果相等说明该?生答对了了，他的score += total[i]（加上当前题?目的总分），
如果该?生答错了了，wrongCnt[i]++，表示第i道题新增?一个错误的 ?人。
输出每?一个学?生的得分；遍历wrongCnt数组，求wrongCnt的?大值maxWrongCnt。
如果 maxWrongCnt == 0说明没有?一个?人做错题?目，则输出“Too simple”，否
则输出maxWrongCnt的值， 和wrongCnt数组中wrongCnt[i] == maxWrongCnt的那些题号～

*/ 
//注意：scanf中的%d和%c之间?一定要有分隔符的主动scanf输?入，否则可能接收成空格或者空值～

int main()
{
	int n,m,temp,k;
	scanf("%d%d",&n,&m);
	//人数，多选题个数 
	vector < set<char> > right(m);
	//每一个迭代器都是 set<char>集合类型的 
	//set自动排序 ，类似二维数组 
	 
	vector<int> total(m),wrongcnt(m);
	//类似一维数组 
	
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&total[i],&temp,&k);
		// 满分值，选项个数，正确选项个数 
		for(int j=0;j<k;j++){
			char c;
			scanf(" %c",&c);
			right[i].insert(c);	//在后面插入	
			
		}
	}
	
	for(int i=0;i<n;i++){
		int score=0;
		scanf("\n");
		for(int j=0;j<m;j++){
			if(j!=0)scanf(" ");//输入格式 
			scanf("(%d",&k);
			set<char> st;
			char c;
			for(int l=0;l<k;l++){
				scanf(" %c",&c);
				st.insert(c);			
			} 
			scanf(")");
			//一共三个scanf才把一个选项的答案输入 
			//记住复杂格式的输入方法，机试有用 
			if(st==right[j]){
				score+=total[j];
				//如果两个集合相等 
			}else{
				wrongcnt[j]++;
			}
			
		}
		printf("%d\n",score);
		//打印每个人的成绩 
	}
	int maxwrongcnt=0;
	for(int i=0;i<m;i++){
		if(wrongcnt[i]>maxwrongcnt){
			maxwrongcnt =wrongcnt[i];
		}//寻找max 
		
	}
	if(maxwrongcnt==0)
		printf("Too simple");
	else{
		printf("%d",maxwrongcnt);
		for(int i=0;i<m;i++){
			if(wrongcnt[i]==maxwrongcnt){
				printf(" %d",i+1);
			}
		}//打印所有最多错题的 题号 
	}
		
	
	
	
	return 0;
	
}
