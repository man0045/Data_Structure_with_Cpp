// #finding Constant window

#include<bits/stdc++.h>
using namespace std;
int find(vector<int> &arr, int k){
 int r = k-1;
 int l = 0;
 int t = arr.size();
 int sum =0;
 for(int i=0; i< k; i++){
  sum+=arr[i];
 }
 int maxi=0;
 while(r < t-1){
  sum-=arr[l];
  l++;
  r++;
  sum+=arr[r];
  maxi =  max(maxi, sum);
 }
 return maxi;
}
int main(){
 int t, k;
 cout<<"Enter the Value of t and k"<<endl;
 cin>>t>>k;
 vector<int> arr(t);
 for(int i=0; i< t; i++){
  cin>>arr[i];
 }
 cout<<find(arr, k);
}