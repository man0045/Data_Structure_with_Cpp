#include<iostream>
#include<vector>
using namespace std;

int f(int arr[], int n, int key){

 if(n == 0) return -1;
 else if(arr[n - 1] == key) return n-1;
 return f(arr,n-1, key);
}
int main(){
 int n = 5;
 int arr[] = {34,12,65,23,55};
 int key = 89;
 int ans = f(arr, n, key);
 if(ans == -1) cout<<"The element of " <<key << " 
 is not found at given index"<<endl;
 else {
  cout<<"eleement found of key "<<key<<"is found"<<"and the answer is this"<<ans<<endl;

 }
 return 0;
}