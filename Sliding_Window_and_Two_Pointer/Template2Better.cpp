#include<bits/stdc++.h>
using namespace std;
int finding(vector<int> &arr, int k){
 int n = arr.size();
 int l = 0;
 int r = 0;
 int sum =0;
 int maxi = 0;
 while(r < n){
  sum+=arr[r];
  while(sum>k){
   sum -= arr[l];
   l++;
  }
  if(sum <= k){
   maxi = max(maxi, r-l+1);
   r=r+1;
  }
 }
 return maxi;
}
int main(){
 int t, k;
 cout<<"Enter the value of t and k"<<endl;
 cin>>t>>k;
 vector<int> arr(t);
 for(int i = 0; i< t; i++){
  cin>>arr[i];
 }
 cout<<finding(arr, k)<<endl;
}