#include<iostream>
#include<climits>
#include<cstring>
#include<vector>
using namespace std;

int f(int i,int t, vector<int> &arr){
 if(i == 0){
  return t%arr[0];
 }
 int not_take = f(i+1, t, arr);

 int take = INT_MAX;

 if(arr[i] <= t){
  take = 1+f(i, t-arr[i], arr);
 }
 return take + not_take;
}
int main(){
 int t, k;
 cin>>t>>k;
 // vector<int> arr(t);
 int a;

 vector<int> arr;
 // vector<vector<int>> dp(t);

 for(int i = 0; i<t; i++){
  cin>>a;
  arr.push_back(a);
 }
 int ans =  f(t-1, k, arr);
 return ans;

}