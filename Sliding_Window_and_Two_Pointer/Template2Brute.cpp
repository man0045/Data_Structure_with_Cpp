// finding length of subarray or substring which has length less han or equal to k with complexity of over O(N*N)
#include<bits/stdc++.h>
using namespace std;

int finding(vector<int> arr, int k){
 int n = arr.size();
 int maxi = 0;
 for(int i=0; i< n; i++){
  int sum=0;
  for(int j=i; j< n; j++){
   sum+=arr[j];
   if(sum <= k){
    maxi= max(maxi, j-i+1);
   }
   else if (sum > k){
    break;
   }
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