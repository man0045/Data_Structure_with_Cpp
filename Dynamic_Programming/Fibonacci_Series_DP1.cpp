#include<iostream>
#include<vector>
using namespace std;
vector<int>dp;
int f(int n){
 if(n ==0 or n==1) return n;
 if(dp[n] != -1) return dp[n];
 else return dp[n] = f(n-1) + f(n-2);
}
int main(){
 int n;
 cout<<"Enter the value of n";
 cin>>n;
 dp.clear();
 dp.resize(n+1, -1); //dp[i] == -1 --> that ith subProblem is not yet Computed
 cout<<f(n)<<endl;
 return 0;
}