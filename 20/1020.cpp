#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct mooncake{
	float mount ,price,unit;
}; //*关键  写一个结构体比较方便处理 
	//本题关于贪心算法，主要还是对排序，总量的处理 

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
			break;//*break 是for循环的关键 
		}
		
	}
	
	printf("%.2f",result);
	//printf 用"%.2f"来精确到小数点后两位
	//float 类型做除法 
	
	
	
	
	
	return 0;
	
}
