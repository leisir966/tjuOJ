#include <iostream>
#include <cstdio>
#include <string.h>
#include <map>
using namespace std; 
bool cmp(string time1,string time2)
{
	for(int i=0;i<time1.size();i++){
		
		if(time1[i]!=time2[i]){
			return time1[i]>time2[i];
		}
	}
	return 1;
}
 
int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
	
	string early_person,late_person,early_tm,late_tm;
	for(int j=0;j<num;j++)
	{
		string person,start_tm,end_tm;
		scanf("%s%s%s",&person,&start_tm,&end_tm);
		
		if(j==0){
			early_person=late_person=person;
			early_tm=start_tm;
			late_tm=end_tm;
			
		}
		else
		{
			if(cmp(early_tm,start_tm))
			{
				early_tm=start_tm;
				early_person=person;
			}
		
		
			if(cmp(end_tm,late_tm))
			{
				late_tm=end_tm;
				late_person=person;
			}
			
		}
			
	}
	cout<<early_person<<","<<late_person<<endl;
}
	
	
	return 0;
	
}
