#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    float x,y;
	    cin>>x>>y;
	    
	    if(x*1.07>=y)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
