//��ӡɳ©
/*���м�ֻ�� 1 �����ţ�������չ�Ĳ���Ϊ i��
����չ��ȥ���ϱ���Ҫ�����з��Ÿ���Ϊ
3 + 5 + 7 + �� + (2i+1) = (3 + 2i + 1) * i / 2 = i * (i + 2)
����չ��ȥ���±����ϱ�ͬ�������Գ���2��
�������м����һ��һ�����ţ�
���� �ܹ���Ҫ2 * i * (i + 2) + 1������
������(2 * i * (i + 2) + 1) > N����С�� i
��Ϊ���Ų����ܳ���N������ֻ����չ��ȥ i-1 �У�
*/
#include <iostream>
using namespace std;
int main(){
	int n,row=0;
// �ñ�����row��ʾ���м�һ����Ҫ��չ��ȥ����������row = i �C 1��
	char c;
	cin>>n>>c;
	for(int i=0;i<n;i++){
		if((2*i*(i+2)+1)>n){
			row=i-1;
			break;
		}//*��Ϊ�ؼ� 
	} 
	//�ϲ� 
	for(int i=row;i>=1;i--){
		for(int k=row-i;k>=1;k--)cout<<" ";
		for(int j=i*2+1;j>=1;j--)cout<<c;
		cout<<endl;		
	}
	//�м� 
	for(int i=0;i<row;i++)cout<<' ';
	cout<<c<<endl;
	
	//�²�
	for(int i=1;i<=row;i++){
		for(int k=row-i;k>=1;k--)cout<<" ";
		for(int j=i*2+1;j>=1;j--)cout<<c;
		cout<<endl; 
	} 
	
	cout<<(n - (2 * row * (row + 2) + 1));
	
	
	return 0;
	
} 
