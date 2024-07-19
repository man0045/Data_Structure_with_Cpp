#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  string str;

  cin>>str;
  int k = str.size();
  if(k == 1) cout<<"No"<<endl;
  for(int i =0; i<k; i++){
   if(str[i]==str[i+1]){
    cout<<"No"<<endl;
   }
  }
  vector<char> vt;
  vector<char>vt2;
  for(int i =0; i<k/2; i++){
   if(k%2 == 0){
    vt.push_back(str[i]);
   }
  }
  for(int i = k/2; i<k; i++){
   if(k%2 == 0){
    vt2.push_back(str[i]);
   }
  }
  for(int i = 0; i<vt.size(); i++){
   if(vt[i] == )
  }
  else{
  for(auto x : vt2){
   vt.push_back(x);
  }
  }

  

 }
}