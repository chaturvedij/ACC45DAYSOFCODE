#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x1,y1,x2,y2,s,p;
	    cin>>x1>>y1>>x2>>y2;
	    
	    s=x1+y1;
	    p=x2+y2;
	    
	    if(s<=p)
	    {
	        cout<<s<<endl;
	    }
	    else
	    {
	        cout<<p<<endl;
	    }
	}
	return 0;
}
