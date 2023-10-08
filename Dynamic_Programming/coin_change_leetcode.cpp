#include<iostream>
#include<vector>
#include<climits>

using namespace std;
vector<int>coins;
vector<int> dp(100000000, -1);

int f(int n){

 if(n == 0) return 0;

 if(dp[n] != -2) return dp[n];

 int result = INT_MAX;

 for(int i = 0; i<coins.size(); i++){

  if((n - coins[i]) < 0) continue;

  result = max(result, f(n -  coins[i]));
 } 
 if(dp[n] == INT_MAX) return dp[n] = INT_MAX;
 return dp[n] = 1 +  result;

}

int main(){
int m,n;
cin>>m>>n;

for(int i = 0; i<m; i++){
  int num;
  cin>>num;
  coins.push_back(num);


 }
 cout<<f(n)<<endl;
 int ans = f(n);
 if(ans == INT_MAX) cout<<"-1\n";
 else cout << ans<< "\n";

 return 0;
}