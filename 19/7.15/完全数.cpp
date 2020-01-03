#include<iostream>
#include<cmath>
using namespace std;
int m[10000];

int main(){
	int i,j,n,d,num1,num2,count;
	d=sqrt(10000.0);
	m[1]=0;
	
	for(i=2;i<=10000;i++)
		m[i]=1;
	
	for(i=2;i<=d;i++)
	{
		m[i*i]+=i;
		for(j=i+1;j<=(10000/i);j++)
			m[i*j]+=(i+j);
	}
	cin>>n;
	
	while(n--){
	count=0;
	cin>>num1>>num2;
	for(i=num1;i<=num2;i++)
		if(m[i]==i) count++;
	
	cout<<count<<endl;
	}
	
	
	
	
	
	return 0;
} 
