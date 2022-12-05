#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(((a+b)/2<35) || ((a+c)/2<35) || ((c+b)/2<35)){
	        cout<<"fail"<<endl;
	    }
	    else{
	        cout<<"pass"<<endl;
	    }
	}
	return 0;
}
