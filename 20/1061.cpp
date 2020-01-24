#include <iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> score(m),right(m);
	for(int i=0;i<m;i++){
		cin>>score[i];
	}
	
	for(int i=0;i<m;i++){
		cin>>right[i];
	}
	
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			int a;
			cin>>a;
			if(a==right[j])
				sum+=score[j];
		}
		printf("%d\n",sum);
	}
	
	return 0;
} 
