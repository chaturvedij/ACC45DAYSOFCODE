#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,p,q,s;
	    cin>>x>>p>>q;
	    s=p-q;
	    if(s!=0)
	    {
	        cout<<x*s<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
