#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

 vector<int> getdigits(int n){
 vector<int> result;
 while(n>0){
  if(n%10!=0){
    result.push_back(n%10);
   
  }
  n = n/10;
 }
 return result;
}


// in dp

vector<int>dp;
int f(int n){


 if(n == 0) return 0;
 if(n<=9) return 1;
 vector<int> get = getdigits(n);

 int result = INT_MAX;

 if(dp[n] != -1) return dp[n];

 for(int i = 0 ; i<get.size(); i++){
  result = min(result, f(n-get[i]));
 }
 return dp[n] = 1+ result;


}

// buttomn up dp solution

int fbu(int num){

 dp[0] = 0;
 for(int i = 0; i<=9; i++) dp[i] = 1;
 for(int n = 10; n<= num; n++){

  vector<int> d = getdigits(n);

  int result = INT_MAX;
  for(int i = 0; i<d.size(); i++){
   result = min(result,dp[n-d[i]]);
  }
  dp[n] = 1+result;

 }
 return dp[num];
}
int main(){
int n;
dp.clear();
dp.resize(100000000,-1);
cout<<"Enter the value"<<endl;
cin>>n;

cout<<f(n)<<endl;
}