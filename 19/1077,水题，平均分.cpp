#include <iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;//m前面没有输入进去 
  for(int i=0;i<n;i++){
    int g1,g2=0,cnt=-2,temp,maxn=-1,minn=m+1;
    cin>>g1;
    for(int j=0;j<n-1;j++){
      cin>>temp;
      if(temp>=0&&temp<=m){
        if(temp<minn)minn=temp;
        if(temp>maxn)maxn=temp;
        cnt++;
        g2 +=temp;
      }
      
//    g2=g2-maxn-minn; 从输入点开始每个g2都减去了maxn，minn，一共减了5次。。。 

  }
 g2=g2-maxn-minn;
  cout<<int((((g2*1.0)/cnt)+g1)/2+0.5)<<endl;
}
return 0;

}
