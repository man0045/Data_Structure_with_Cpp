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
int main(){
int n;
dp.clear();
dp.resize(100000000,-1);
cout<<"Enter the value"<<endl;
cin>>n;

cout<<f(n)<<endl;
}