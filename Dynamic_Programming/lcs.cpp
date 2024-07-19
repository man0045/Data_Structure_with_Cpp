#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<vector<int>> dp;
string ans = "";
// top-down approach
int f(string &s1, string &s2, int i, int j, string output){
 if(output.size() > ans.size()) ans = output;
 if(i >= s1.size() or j>= s2.size()) return 0;
 // if() return 0;
 if(dp[i][j] != -1) return dp[i][j];
 if(s1[i] == s2[j]) {
  return dp[i][j] = 1+f(s1,s2,i+1, j+1, output+s1[i]);
 }else{
  return dp[i][j] = max(f(s1,s2,i+1, j, output), f(s1,s2, i, j+1, output));
 }
}
// tubulation method 

int lcs(string s1, string s2, int m, int n){

 int l[m+1][n+1];
 for(int i=0; i<m; i++){
  for(int j = 0; j<=n; j++){
   if(i==0 or j == 0){
    l[i][j] = 0;
   }
   else if(s1[i-1] == s2[j-1]){
    l[i][j] = l[i-1][j-1] +1;
   }
   else{
    l[i][j] = max(l[i-1][j], l[i][j-1]);
   }
  }
  return l[m][n];
 }

}

int main(){
 string s1, s2;
 cin>>s1>>s2;
 dp.clear();
 dp.resize(1005, vector<int>(1005,-1));
 int m = s1.size();
 int n = s2.size(); 
 f(s1,s2, 0, 0,"");;
 // int ans = lcs(s1,s2,m,n);
  cout<<ans;
 return 0;
}
