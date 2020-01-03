#include<iostream>
using namespace std;
int main(){
	int n,ga,sa,gb,sb,wa=0,wb=0;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>ga>>sa>>gb>>sb;
		if(sa!=sb){
		if(sa==(ga+gb)) 
            wb++;
		if(sb==(ga+gb))  
            wa++;
        }
	}
	cout<<wa<<" "<<wb;
	return 0;	
	
} 
