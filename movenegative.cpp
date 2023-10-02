#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void move(vector<int>&n){
 sort(n.begin(), n.end());
}
int main(){
 vector<int>n;
 int t;
 cin>>t;
 while(t--){
  int x;
  cin>>x;
  n.push_back(x);
 
 }
 for (int e : n)
       cout<<e << " ";
    return 0;
}