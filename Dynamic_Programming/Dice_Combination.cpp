#include<iostream>
#include<vector>
#include<climits>
#define MOD 1000000007
#define ll long long int
using namespace std;

vector<ll>dp;
ll f(int n){
 if( n == 0) return 1;
 if(dp[n] != -1) return dp[n];

 int sum = 0;

 for(int i = 1; i<=6; i++){
  if(n-i < 0) break;
  sum = (sum%MOD+f(n-i)%MOD)%MOD;
 }
 return dp[n] = sum%MOD;
}

ll fbu(int n){

 dp[0] = 1;
 for(int k =1; k<=n; k++){
  for(int k = 0; k<= n; k++){
   ll sum = 0;
   for(int i = 1; i<=6; i++){
   if(n-i < 0) break;
   sum = (sum%MOD+f(n-i)%MOD)%MOD;

  }
 }
 }
}
int main(){
 dp.clear();
 dp.resize(10000000,-1);
 int n;
 cin>>n;
 cout<<fbu(n);
}