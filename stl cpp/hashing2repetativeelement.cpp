#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<int>arr(n);
 for (int i =0; i<n; i++){
  cin>>arr[i];
 }

 map<int, int >m;
 for(int i =0; i<n; i++){
  m[arr[i]]++;
 }
 int sum = 0;
 for(auto pair: m){
  if(pair.second > 1){
   sum = sum + pair.first;
  }
 }
 cout<<"the sum is : " << sum <<endl;
}