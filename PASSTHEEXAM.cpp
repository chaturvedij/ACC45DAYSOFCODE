#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c;
	    
	    d=a+b+c;
	    if(d>=100 &&a>10 &&b>10 && c>10)
	    {
	        cout<<"PASS"<<endl;
	    }
	    else
	    {
	        cout<<"Fail"<<endl;
	    }
	    
	}
	return 0;
}
