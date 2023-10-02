#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n[t];
	    for(int i=0;i<3;i++){
	        cin>>n[i];
            for(int j=0;j<100;j++){
                if(n[i]%j!=0){
                    cout<<j<<endl;
                    break;
                }
            }
        }
	}
	return 0;
}