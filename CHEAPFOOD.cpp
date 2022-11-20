#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	    int a=x/10;
        if(a>=100)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<100<<endl;
        }
	}
	return 0;
}
