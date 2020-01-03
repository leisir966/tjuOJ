#include<iostream>
int main()
{
//	const int maxnumber =25;//#define 常量 
	int maxnumber;
	scanf("%d",&maxnumber) ;
	//在这边输入cin>>maxnumber;则会报错 
	int isprime[maxnumber];
	for (int i=0;i<maxnumber;i++)
	isprime[i]=1;
	
	for (int x=2;x<maxnumber;x++)
	{
		if(isprime[x]){
		for(int j=2;j*x<maxnumber;j++)
		{
			isprime[j*x]=0;
		} 
		
		}//如果x是素数，则将所有的2*x都设为非素数 
	
	for(int i=2;i<maxnumber;i++){
		if(isprime[i])
		{
			printf("%d\t",i);//%d--%为占位符，d表示精确度 
		}
	}//输出素数 
	printf("\n");
	
	return 0;
	 
	}
	 } 
 
