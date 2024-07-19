#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  vector<int>arr(2);

  for(int i =0; i<2; i++){
   cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  for(auto x: arr){
   cout<<x<<" ";
  }
  cout<<endl;
 }
}