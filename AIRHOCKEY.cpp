#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int p;
        int x,y;
        cin>>x>>y;
        if(x<=y){
            p=7-y;
            cout<<p<<endl;
             
        }
        else if(x>y){
            p=7-x;
            cout<<p<<endl;
        }
	}
	return 0;
}
