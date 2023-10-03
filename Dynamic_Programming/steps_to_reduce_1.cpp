#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

#define inf INT_MAX
using namespace std;
vector<int>dp;

int fbu(int n){
 if(n == 1) return 0;
 if(n == 2 or n==3) return 1;
 
 return 1 + min({fbu(n-2), (n%2 == 0) ? fbu(n/2) : inf, (n%3==0) ? fbu(n/2) : inf});


 
}

int stepbut(int i){
 dp.clear();
 dp.resize(i+1, -1);
 dp[1] = 0;
 dp[2] = dp[3] = 1;

 for(int j = 4; j<= i; j++){

  dp[j] = 1 + min({dp[j-2], (j%2 == 0) ? dp[j/2] : inf, (j%3==0) ? dp[j/3] : inf});

 }
 return dp[i];
}
int stepttb(int n){
 if(n == 1) return 0;
 if(n == 2 or n == 3) return 1;

 if(dp[n] != -1) return -1;
 return dp[n] = 1 + min({fbu(n-2), (n%2 == 0) ? fbu(n/2) : inf, (n%3==0) ? fbu(n/2) : inf}); 
}
int main(){
 int n;
 dp.clear();
 dp.resize(100007, -1);
 cin>>n;
 cout<<stepttb(n)<<endl;
 cout<<stepbut(n)<<endl;
}