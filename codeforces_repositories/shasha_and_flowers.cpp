#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int a;
  cin>>a;
  vector<int> arr(a);
  vector<int> ans;
  for(int i= 0; i<a; i++){
   int x;
   cin>>x;
   arr[i] = x;
  } 
  sort(arr.begin(), arr.end());
  int sum = 0;
  for(int i = 1; i<a; i++){
   int x = arr[i]-arr[i-1];
   sum = sum+x;
  }
  cout<<sum<<endl;
 }
}