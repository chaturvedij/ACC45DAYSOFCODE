#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    if(x>y && x>z){
	        cout<<endl<<"setter";
	    }
	    else if(y>x && y>z){
	        cout<<endl<<"tester";
	    }
	    else{
	        cout<<endl<<"editorialist";
	    }
	}
	return 0;
}
