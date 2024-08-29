#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void solve(){
 int n, k;
 cin>>n>>k;
 vector<int> arr(n);
 for(int i = 0; i< n; i++){
  cin>>arr[i];
 }
 sort(arr.rbegin(), arr.rend());
 for(int i =0; i< n; i++){
  if(k ==0){
   break;
  }
  if(i == n-1){
   break;
  }
  int mini = arr[i] - arr[i+1];
  int res = min(mini, k);
  arr[i+1]+=res;
  k-=res;
  i++;
 }

 int oddInd = 0;
 int evenInd = 0;
 for(int i =0; i<n; i++){
  if(i%2 == 0) evenInd+=arr[i];
  else oddInd += arr[i];
 }
 cout<<abs(oddInd - evenInd)<<endl;

}
int main(){
 int t;
 cin>>t;
 while(t--){
  solve();
 }
 
}