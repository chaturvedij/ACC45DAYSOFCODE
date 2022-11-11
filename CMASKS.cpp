#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
  for(int i=1;i<=t;i++)
    {
    int x,y,z1,z2;
    cin>>x>>y;
    z1=x*100;
    z2=y*10;
    if(z1>=z2) cout<<"cloth"<<endl;
    else cout<<"disposable"<<endl;
}
	return 0;
}
