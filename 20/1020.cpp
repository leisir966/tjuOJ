#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct mooncake{
	float mount ,price,unit;
}; //*�ؼ�  дһ���ṹ��ȽϷ��㴦�� 
	//�������̰���㷨����Ҫ���Ƕ����������Ĵ��� 

bool cmp(mooncake a,mooncake b){
	return a.unit>b.unit;
}//both bool and int  are right

int main(){
	int n,need;
	cin>>n>>need;
	vector <mooncake> a(n);
	for(int i=0;i<n;i++) scanf("%f",&a[i].mount);
	for(int i=0;i<n;i++) scanf("%f",&a[i].price);
	for(int i=0;i<n;i++) a[i].unit=a[i].price/a[i].mount;
	
	sort(a.begin(),a.end(),cmp);
	float result =0.0;
	for(int i=0;i<n;i++){
		if(a[i].mount<need){
			result +=a[i].price;
			need -=a[i].mount;		
		}
		else {
			result +=need*a[i].unit;
			break;//*break ��forѭ���Ĺؼ� 
		}
		
	}
	
	printf("%.2f",result);
	//printf ��"%.2f"����ȷ��С�������λ
	//float ���������� 
	
	
	
	
	
	return 0;
	
}
