#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
		int sum =0;
		int count = 0;
	    cin>> x;
	    int arr[x];
	    for(int i=0; i<x;i++){
	        cin>>arr[i];
	        int k = sum+arr[i];
	        if(k == 1){
				count +=1;
			}
	    }
		cout<<count<<endl;
	}
	return 0;
}
