using namespace std;
#include <iostream>
#include<algorithm>
int main(){
int N,M;
cin>>N>>M;
int score[N];
int t,sum,b,k;
float avg;
for(int i=0;i<N;i++){
	sum=0;
	k=0;
	cin>>t;
	for(int j=0;j<N-1;j++){
            cin >> b;
            if (b >= 0 && b <= M) {
                score[k] = b;
                ++k;
            }
	
	}
	sort(score,score+k);
	for(int i=1;i<k-1;i++)
	{
		sum+=score[i];
	}
	
		avg=(t+sum*1.0/(k-2))*1.0/2;
		b = avg;
        if (avg - b >= 0.5) cout << b + 1 << endl;
        else cout << b << endl;
}

    return 0;
}
