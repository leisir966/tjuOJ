#include <iostream>
using namespace std;
int main(){
	int n,grade,max=-1,min=101;//最高分和最低分，学号 
	string name,num,maxname,maxnum,minname,minnum;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name>>num>>grade;
		//每输入一个人的【姓名，学号，成绩】就与最大最小值对比；没有用到排序算法 
		if(grade<min){
			minname=name;
			minnum=num;
			min=grade;
		} 
		if(grade>max){
			maxname=name;
			maxnum=num;
			max=grade;
		}
	}
	cout<<maxname<<" "<<maxnum<<endl<<minname<<" "<<minnum;
	return 0;

	
} 
