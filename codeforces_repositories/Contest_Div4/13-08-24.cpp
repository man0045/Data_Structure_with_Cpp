#include<iostream>
#define ll long long int
using namespace std;
int main(){
 ll t;
 cin>>t;
 while(t--){
  string n;
  cin>>n;

  int k = n.size();
  if(k < 2) cout<<"No"<<endl;
  string r = string(1, n[0]) + n[1];
  string res = n.substr(2);

  ll ans = stoi(res);
  ll ans2 = stoi(r);

  if(ans > 2 and ans2 == 10){
   cout<<"Yes"<<endl;
  }
  else{
   cout<<"No"<<endl;
  }
 }
}