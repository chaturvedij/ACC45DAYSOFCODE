#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	     if(a%2!=0 && b%2!=0 && c%2!=0)
    	  cout<<"NO"<<endl;
    	  else if(a%2==0 && b%2==0 && c%2==0)
    	  cout<<"NO"<<endl;
    	  else
    	  cout<<"Yes"<<endl;
	}
	return 0;
}
