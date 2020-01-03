#include<iostream>
#include<cmath>
using namespace std;
int m[50000];

int main(){
	int i,j,n,d,num;
	d=sqrt(50000.0);
	m[1]=0;
	
	for(i=2;i<=50000;i++)
		m[i]=1;
	
	for(i=2;i<=d;i++)
	{
		m[i*i]+=i;
		for(j=i+1;j<=(50000/i);j++)
			m[i*j]+=(i+j);
	}
	cin>>num;
	while(cin>>n)
	{
		cout<<m[n]<<endl;
		if(--num==0)
			break;
	}
	return 0;
} 
