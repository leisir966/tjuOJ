//打印沙漏
/*最中间只有 1 个符号，假设扩展的层数为 i，
则扩展出去的上边需要的所有符号个数为
3 + 5 + 7 + … + (2i+1) = (3 + 2i + 1) * i / 2 = i * (i + 2)
，扩展出去的下边与上边同样多所以乘以2，
加上最中间的那一行一个符号，
所以 总共需要2 * i * (i + 2) + 1个符号
找满足(2 * i * (i + 2) + 1) > N的最小的 i
因为符号不不能超过N，所以只能扩展出去 i-1 行，
*/
#include <iostream>
using namespace std;
int main(){
	int n,row=0;
// 用变量量row表示从中间一行需要扩展出去的行行数，row = i – 1，
	char c;
	cin>>n>>c;
	for(int i=0;i<n;i++){
		if((2*i*(i+2)+1)>n){
			row=i-1;
			break;
		}//*此为关键 
	} 
	//上层 
	for(int i=row;i>=1;i--){
		for(int k=row-i;k>=1;k--)cout<<" ";
		for(int j=i*2+1;j>=1;j--)cout<<c;
		cout<<endl;		
	}
	//中间 
	for(int i=0;i<row;i++)cout<<' ';
	cout<<c<<endl;
	
	//下层
	for(int i=1;i<=row;i++){
		for(int k=row-i;k>=1;k--)cout<<" ";
		for(int j=i*2+1;j>=1;j--)cout<<c;
		cout<<endl; 
	} 
	
	cout<<(n - (2 * row * (row + 2) + 1));
	
	
	return 0;
	
} 
