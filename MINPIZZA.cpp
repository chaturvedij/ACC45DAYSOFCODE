#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    if((n*x)%4==0)
	    {
	        cout<<(n*x)/4<<endl;
	    }
	    else if((n*x)%4!=0)
	    {
	        cout<<(n*x)/4+1<<endl;
	    }
	    else
	    {
	        return -1;
	    }
	}
	return 0;
}
