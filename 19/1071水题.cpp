using namespace std;
#include <iostream>
int main(){
	int n1,b,t,n2,T,K;
	scanf("%d%d",&T,&K);
	for(int i=0;i<K;i++){
		scanf("%d%d%d%d",&n1,&b,&t,&n2);
		if (T==0){
			printf("Game over.\n");
			return 0;
		}
		else if(T<t){
		printf("Not enough tokens.Total=%d.\n",T);
			
		}
		else if(b!=(n1>n2)){
			T=T+t;
			printf("Win %d!  Total = %d.\n", t, T); 
		}
		else if(b==(n1>n2)){
			T-=t;
			printf("Lose %d!  Total = %d.\n", t, T); 
			
		}
		
	}
	return 0;
}


