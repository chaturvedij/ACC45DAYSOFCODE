#include <iostream>
using namespace std;

int main() {
	int n,l=0,m=0;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i%2]==0)
	    l++;
	    else
	    m++;
	}
	if(l>m)
	{
	    cout<<"ready for the battle"<<endl;
	}
	else
	{
	    cout<<"not ready"<<endl;
	}
	
}
