using namespace std;
#include <iostream> 
#include <stack> 
int Barckets(char exp[])
{
	stack<char> s;
	char ch,*p=exp;
	while(*p){
		if(*p==39)
		{
			++p;
			while(*p!=0&&*p!=39)
				++p;
			++p;
		}
		if(*p==34)
		{
			++p;
			while(*p!=0&&*p!=34)
				++p;
			++p;
		} 
	 
	 if(*p)
	 {
	 	switch(*p)
	 	{
	 		case'{':
	 		case'[':	
	 		case'(': s.push(*p);break;
			case'}':
				ch=s.top();
				if(ch=='}')
					s.pop();
				else 
					return 0;
			case']':
				ch=s.top();
				if(ch==']')
					s.pop();
				else 
					return 0;
			case')':
				ch=s.top();
				if(ch==')')
					s.pop();
				else 
					return 0;	 	
		 }
		 ++p;
	 }
	 
	if(s.empty()){
	
		cout<<"success£¡" ;
	 	return 1;
	 }
	else
		return 0; 
	}
}
int main(){
	char str[100];
	cin>>str;
	Barckets(str);
	
	return 0;
}
