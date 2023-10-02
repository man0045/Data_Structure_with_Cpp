#include<iostream>
#include<climits>
#include<vector>
using namespace std;
// top to bottum approach DP 
vector<int>h;
int k;
vector<int> dp;
int f(int i){
 if(i >= h.size()) return INT_MAX;
 if(i == h.size() - 1) return 0;
 if(dp[i] != -1) return dp[i];
 int ans =  INT_MAX;
 for(int j = 1; j<=k; j++){
  if(i+j >= h.size()) break;
  ans = min(ans, abs(h[i] - h[i+j]) + f(i+j));
 }
 return dp[i] = ans;
}
// down to top approach 

int fib(){
 int n = h.size();
 dp.resize(100005, INT_MAX);

 dp[n-1] = 0;
 for(int i = n-2; i>=0; i--){
  
  for(int j = 1; j <= k; j++){
   if(i+j >= h.size()) break;
   dp[i] = min(dp[i], abs(h[i] - h[i+j]) + dp[i+j]);
  }
 }
 return dp[0];
}
int main(){
 int n;
 cout<<"Enter the value of n and k"<<endl;
 cin>>n>>k;
 h.resize(n);
 for(int i = 0; i<n; i++){
  cin>>h[i];
 }
// cout<< "The lowest path to covered by frog is : "<<f(0)<<"\n";
 cout<< "The lowest path to covered by frog is : "<<fib()<<"\n";

 return 0;
}