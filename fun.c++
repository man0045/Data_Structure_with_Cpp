#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,l,m;
	    cin>>x>>y;
	    l=x/y;
	    m=x%y;
	    if(m==0){
	        cout<<l<<endl;
	    }
	    else{
	        cout<<(l+m)<<endl;
	    }
	    
	}
	return 0;
}
