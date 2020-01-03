#include <iostream>
 using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	int awin=0,bwin=0;
 	int a[3]={0},b[3]={0};
 	
 	char str[4]={"BCJ"};//×Ö·û´®ÓÃË«ÒýºÅ 
 	for(int i=0;i<n;i++){
 		char s,t;
 		
 		cin>>s>>t;
 		
 		if(s=='B'&& t=='C' ){
 				awin++;
 				a[0]++;
				
			 }else if(s=='C'&& t=='J' ){
 				awin++;
 				a[1]++;
	
			 }else if (s=='J'&& t=='B' ){
 				awin++;
 				a[2]++;
			
			 }else if (s=='B'&& t=='J'){
				bwin++;
				b[2]++;
			 }else if(s=='C'&& t=='B'){
				bwin++;
				b[0]++;
				
			 }else if(s=='J'&& t=='C'){
				bwin++;
				b[1]++;
			 } 
		 
 	}
 		cout<<awin<<' '<<n-awin-bwin<<' '<<bwin<<endl;
 		cout<<bwin<<' '<<n-awin-bwin<<' '<<awin<<endl;
 		
 		int maxa=a[0]>=a[1]?0:1;
 		  	maxa=a[maxa]>=a[2]?maxa:2;
 		  	
 		int maxb=b[0]>=b[1]?0:1;
 		  	maxb=b[maxb]>=b[2]?maxb:2;
 			
 		cout<<str[maxa]<<' '<<str[maxb]; 
 	
 	return 0;
 }
