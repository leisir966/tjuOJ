#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n+1);
	//因为没有0的下标，所以用n+1，与数组的下标一样 
	int num,score; 
	for(int i=0;i<n;i++){
		cin>>num>>score;
		a[num]+=score;
	}
	int max=a[1],t=1;
	//遍历比较出最大值 
	for(int i=2;i<=n;i++){
		if(max<a[i]){
			max=a[i];
			t=i;
		}
	}
	
	cout<<t<<" "<<max; 
	
	return 0;
}
