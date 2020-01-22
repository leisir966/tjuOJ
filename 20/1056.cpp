#include <cstdio>
//组合数的和  一个好的算法（想法 

int main(){
	int n,sum=0,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		sum+=temp*11*(n-1);
		//sum+=temp*10*(n-1)+ temp*(n-1)
		//     每个数十位、个位各出现n-1次 
	} 
	
	printf("%d",sum);
	
	return 0;
}
//总结：这是一个数学问题  
