#include <iostream> 
using namespace std; 
int main() {    
int a, b, flag = 0;    
	while (cin >> a >> b) {  //每当有输入的时候就判断b的值      
		if (b != 0) {        //并且根据flag的值来输出空格，和最后的0 0    
			if (flag == 1) cout << " ";
			cout << a * b << " " << b - 1;            
			flag = 1;        
		} 
	}    
	if (flag == 0) cout << "0 0";    
	return 0; 
}
