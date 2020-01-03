#include<iostream>
#include<vector>
using namespace std;
int main(){
	int score,num,n;
	cin>>n;
	vector<int>a(n+1);
	for(int i=0;i<n;i++){
		cin>>num>>score;
		a[num]+=score;
	}
	int max=a[1],t=1;
	for(int i=2;i<=n;i++){
		if (max<a[i]){
			max=a[i];
			t=i;
		}
	}
	cout<<t<<" "<<max;
	return 0;
	
}
